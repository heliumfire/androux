#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#
make distclean
rm */config.cache
./configure \
    --prefix=$PREFIX \
    --host=arm-linux-androideabi \
    --target=arm-linux-androideabi \
    CC=${CROSS_COMPILE}gcc \
    CXX=${CROSS_COMPILE}g++ \
    CFLAGS="-g -I -O2 -I${PWD}/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86_64/lib/gcc/arm-linux-androideabi/4.6/include -I${SYSROOT}/usr/include/ --sysroot=${SYSROOT} -Wno-error" \
    LDFLAGS="-L/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/lib/" \
    CPP=${CROSS_COMPILE}cpp \
    CPPFLAGS="-I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/" \
    AR=${CROSS_COMPILE}ar
make -j$THREADS
make install
make clean