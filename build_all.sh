#!/bin/bash
set -e
export PWD=`pwd`
export CROSS_COMPILE=${PWD}/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-
export PATH=$PATH:${PWD}/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/
export PREFIX=${PWD}/system
export SYSROOT=${PWD}/platforms/android-9/arch-arm

cd binutils
./build.sh

#cd gmp
#./build.sh
#
#cd mpc
#./build.sh
#
#cd mpfr
#./build.sh
#
#cd build_tmp_gcc
#./build.sh