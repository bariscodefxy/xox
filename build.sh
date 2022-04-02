#!/usr/bin/sh
if [ -f "/usr/bin/cmake" ];
then
	echo "Cmake is found.";
else
	echo "CMake Not Found!";
	return;
fi
cd $PWD/src/
mkdir -p build
cd build
cmake ../ && make
