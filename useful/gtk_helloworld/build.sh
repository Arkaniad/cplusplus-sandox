#!/bin/bash
echo "Building... please wait."
mkdir bin
g++ gtk_helloworld.cpp -o bin/gtktest `pkg-config --cflags --libs gtk+-2.0`
echo "Build successful."
