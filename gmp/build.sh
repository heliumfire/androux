#!/bin/bash
 ./configure \
	--prefix=/home/anushruth/experiment/sysroot \
	--with-sysroot=/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/ \
	--target=arm-linux-androideabi \
	--host=arm-linux-androideabi \
	--disable-shared \
	CC=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-gcc \
	CXX=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-g++ \
	LDFLAGS=--sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/ \
	CFLAGS="-g -O2 --sysroot=/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/ -I/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include"
