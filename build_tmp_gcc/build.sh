#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#
CROSS_COMPILE=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-
SYSROOT=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm
PREFIX=/Users/regnarts/Documents/experiment/sysroot

#export CC=${CROSS_COMPILE}gcc
#export CXX=${CROSS_COMPILE}g++
#export CFLAGS="-g -O2 -I${SYSROOT}/usr/include/ --sysroot=${SYSROOT}"
#export LDFLAGS="-L${SYSROOT}/usr/lib/ --sysroot=${SYSROOT}"
#export CPP=${CROSS_COMPILE}cpp
#export CPPFLAGS="-I${SYSROOT}/usr/include/"
#export AR=${CROSS_COMPILE}ar
#export NM=${CROSS_COMPILE}nm

make distclean
../gcc/configure \
    --prefix=${PREFIX} \
    --host=arm-linux-androideabi \
    --target=arm-linux-androideabi \
    --with-gmp=${PREFIX} \
    --with-mpfr=${PREFIX} \
    --without-headers \
    --with-newlib \
    --disable-decimal-float \
    --disable-libgomp \
    --disable-libmudflap \
    --disable-libssp \
    --disable-libatomic \
    --disable-libitm \
    --disable-libsanitizer \
    --disable-libquadmath \
    --disable-threads \
    --disable-multilib \
    --disable-target-zlib \
    --with-system-zlib \
    --enable-languages="c,c++" \
    CC=${CROSS_COMPILE}gcc \
    CXX=${CROSS_COMPILE}g++ \
    CFLAGS="-g -O2 -I${SYSROOT}/usr/include/ --sysroot=${SYSROOT}" \
    LDFLAGS="-L${SYSROOT}/usr/lib/" \
    CPP=${CROSS_COMPILE}cpp \
    CPPFLAGS="-I${SYSROOT}/usr/include/" \
    AR=${CROSS_COMPILE}ar \
    NM=${CROSS_COMPILE}nm \
    RANLIB=${CROSS_COMPILE}ranlib
make clean
make -j4
#make install
