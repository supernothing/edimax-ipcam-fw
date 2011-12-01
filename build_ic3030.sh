#!/bin/sh

if [ $# -ne 2 ]; then
    echo "Usage: `basename $0` WORKING_DIRECTORY DEST_IMAGE"
    exit 1;
fi

FBASE=$1
UPG_FN=$2

if [ ! -d $ORIGDIR ] || [ ! -d $SFSROOT ]; then
    echo "FATAL: filesystem not intact. Please run extract first."
    exit 1;
fi

if [ ! -d $TEMPDIR ]; then
    mkdir -p $TEMPDIR
    cp $ORIGDIR/vmlinuz $TEMPDIR/
fi


# File locations
TBASE="tools"
SFSROOT="$FBASE/squashfs_root/"
TEMPDIR="$FBASE/temp_files"
TVML="$TEMPDIR/vmlinuz"
TCFS="$TEMPDIR/cramfs"
THDR="$TEMPDIR/header.txt"
ACSUM="$TBASE/AppendChecksum"

echo "Building new squashfs image..."
./squashfs-3.0/mksquashfs-lzma $SFSROOT $TCFS -all-root -noappend
echo "Image built."


################################################################################
#      check files size

KERNEL_SIZE=`stat -c%s $TVML`
SQUASHFS_SIZE=`stat -c%s $TCFS`
echo "Checking kernel size..."
#if [ $KERNEL_SIZE -gt 589824 ]; then
if [ $KERNEL_SIZE -gt 786440 ]; then
	echo "kernel size is TOO big!!"
	exit -1
fi
echo "Kernel size OK."
echo "Checking squashfs size..."
#if [ $SQUASHFS_SIZE -gt 1376256 ]; then
if [ $SQUASHFS_SIZE -gt 3080192 ]; then
	echo "squashfs size is TOO big!!"
	exit -1
fi
echo "Squashfs OK."
################################################################################

echo "Building image..."

if [ -e $UPG_FN ]; then
    rm $UPG_FN
fi

dd if=$THDR of=$UPG_FN ibs=8 obs=1k count=1 conv=sync,notrunc oflag=append
dd if=$TVML of=$UPG_FN ibs=786432 obs=1k count=1 conv=sync,notrunc oflag=append
dd if=$TCFS of=$UPG_FN ibs=3200k obs=1k count=1 conv=notrunc oflag=append
echo "Calculating checksum..."
$ACSUM $UPG_FN
md5sum $UPG_FN >> checksum_custom_img.txt
echo "Image built: $UPG_FN"

