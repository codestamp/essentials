#!/bin/bash

for i in {1..5}; do 
  echo lab$i
  adduser "lab$i"
  passwd
  passwd
  done


