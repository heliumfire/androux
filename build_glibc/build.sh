#!/bin/bash
 ../glibc/configure \
	--prefix=/home/anushruth/experiment/sysroot/ \
	--target=arm-linux-androideabi \
	--with-gmp=/home/anushruth/experiment/sysroot/ \
	--with-mpfr=/home/anushruth/experiment/sysroot/ \
	--host=arm-linux-androideabi \
	--disable-shared \
	--with-headers=/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include \
	--disable-profile \
	libc_cv_forced_unwind=yes \
	libc_cv_ctors_header=yes \
	libc_cv_c_cleanup=yes \
	CC=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-gcc \
	CXX=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-g++ \
	LDFLAGS=--sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/ \
	CFLAGS="-g -O2 --sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/usr/ -I/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/usr/include"
make clean
make -j8
