#!/bin/bash

if [ $# -ne 2 ]; then
    echo "Usage: `basename $0` SOURCE_IMAGE DEST_PATH"
    echo "WARNING: Running this will overwrite any files in your working directory."
    exit 1;
fi
SRC=$1
FBASE=$2
#FBASE="ic3005_files"
SFSROOT="$FBASE/squashfs_root"
TEMPDIR="$FBASE/temp_files"
ORIGDIR="$FBASE/original_images"

#if [ ! -d $SFSROOT ]; then
#    mkdir -p $SFSROOT
#fi

if [ ! -d $TEMPDIR ]; then
    mkdir -p $TEMPDIR
fi

if [ ! -d $ORIGDIR ]; then
    mkdir -p $ORIGDIR
fi

rm $TEMPDIR/*
rm -rf $SFSROOT
dd if=$SRC of="$TEMPDIR/header.txt" bs=1 count=8
dd if=$SRC of="$TEMPDIR/vmlinuz" bs=1 skip=8 count=786432
dd if=$SRC of="$TEMPDIR/cramfs" bs=1 skip=786440 obs=1k count=20000000
cp $TEMPDIR/* $ORIGDIR/

./squashfs-3.0/unsquashfs-lzma -dest $SFSROOT "$ORIGDIR/cramfs"
