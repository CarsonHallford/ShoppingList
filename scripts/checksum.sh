#!/bin/bash

files=$(find . -not -path './app/*' -not -path './solution/*' \( -name '*.cpp' -or -name '*.h' -or -name '*.sh' \) | sort)
for file in $files; do
  echo $file $(cat $file | shasum)
done
cat $files | shasum
