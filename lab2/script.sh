#!/bin/bash

count=1 

sort password.txt | while IFS= read -r password
do
	if [ -n "$password" ]; then
		echo "$password"
		echo "$password" > "password${count}.txt"
		count=$((count + 1))
	fi
done < <(sort password.txt)

echo "Password files created successfully!"
