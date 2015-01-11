#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#
#CROSS_COMPILE=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-
#export PATH=$PATH:/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/
#PREFIX=/Users/regnarts/Documents/experiment/sysroot
#SYSROOT=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm
make distclean
./configure \
    --prefix=${PREFIX} \
    --host=arm-linux \
    CC=${CROSS_COMPILE}gcc \
    CXX=${CROSS_COMPILE}g++ \
    CFLAGS="-g -O2 -I${SYSROOT}/usr/include/ --sysroot=${SYSROOT}" \
    LDFLAGS="-L${SYSROOT}/usr/lib/ -L${PREFIX}/lib -liberty" \
    CPP=${CROSS_COMPILE}cpp \
    CPPFLAGS="-I${SYSROOT}/usr/include/ -DHAVE_TTYNAME=0" \
    AR=${CROSS_COMPILE}ar \
    NM=${CROSS_COMPILE}nm
make clean
make -j2
make install
make clean
