#!/bin/bash

echo "Compile Script ...";

g++ testStabLineProg.cpp;

g++ testStabLineProg.o -o testStabLineProg;

echo "Script completed ..."
