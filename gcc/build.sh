#!/bin/bash
 ./configure \
	--prefix=/home/anushruth/experiment/sysroot/ \
	--target=arm-linux-androideabi \
	--with-gmp=/home/anushruth/experiment/sysroot/ \
	--with-mpfr=/home/anushruth/experiment/sysroot/ \
	--with-mpc=/home/anushruth/experiment/sysroot/ \
	--disable-nls                                    \
    --disable-shared                                 \
    --disable-multilib                               \
    --disable-decimal-float                          \
    --disable-threads                                \
    --disable-libatomic                              \
    --disable-libgomp                                \
    --disable-libitm                                 \
    --disable-libquadmath                            \
    --disable-libsanitizer                           \
    --disable-libssp                                 \
    --disable-libvtv                                 \
    --disable-libcilkrts                             \
    --disable-libstdc++-v3                           \
    --enable-languages=c,c++ \
	--host=arm-linux-androideabi \
	--without-headers \
	CC=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-gcc \
	CXX=~/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-g++ \
	LDFLAGS=--sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/ \
	CFLAGS="-g -O2 --sysroot=/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/ -I/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include"
