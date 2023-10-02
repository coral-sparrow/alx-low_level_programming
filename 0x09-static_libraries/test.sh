#!/bin/bash


files=$(ls .)
counter=1

for file in $files
do
	echo "file no. $counter is: $file"
	((counter++))
done
