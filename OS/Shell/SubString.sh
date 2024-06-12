#!/bin/bash

echo "Enter the main string:"
read STR

echo "Enter the substring to search for:"
read SUB

if [[ "$STR" == *"$SUB"* ]]; then
  echo "Match is found."
else
  echo "Match not found."
fi
