#!/bin/bash
set -e
export PWD=`pwd`
export CROSS_COMPILE=arm-linux-androideabi-
export PATH=$PATH:${PWD}/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/
export PREFIX=${PWD}/system
export SYSROOT=${PWD}/platforms/android-9/arch-arm
export THREADS="$(sysctl -n hw.ncpu)"

cd binutils
./build.sh

cd ../gmp
./build.sh

cd ../mpfr
./build.sh

cd ../mpc
./build.sh

cd ../build_tmp_gcc
./build.sh

cd ../make
./build_android.sh
