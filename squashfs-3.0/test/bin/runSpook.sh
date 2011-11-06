#!/bin/sh

sleep 1
while [ -f /bin/spook ]
do
	/bin/spook -c /tmp/spook.conf
	sleep 1
done
