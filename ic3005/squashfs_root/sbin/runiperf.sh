#!/bin/sh

while [ -f /sbin/iperf ]
do
	/sbin/iperf -s
	sleep 1
done
