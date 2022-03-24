#!/bin/sh

ifconfig | grep ether | tr -s '[:space:]' | cut -d " " -f 3
