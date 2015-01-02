#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#
./configure \
    --prefix=$PREFIX \
    --host=arm-linux-androideabi \
    --target=arm-linux-androideabi \
    CC=${CROSS_COMPILE}gcc \
    CXX=${CROSS_COMPILE}g++ \
    CFLAGS="-g -O2 -I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/ --sysroot=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/ -Wno-error" \
    LDFLAGS="-L/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/lib/" \
    CPP=${CROSS_COMPILE}cpp \
    CPPFLAGS="-I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/" \
    AR=${CROSS_COMPILE}ar
make
make install