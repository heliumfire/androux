#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#

make distclean
./configure \
--prefix=${PREFIX} \
    --host=arm-linux-androideabi \
    --target=arm-linux-androideabi \
    --with-mpfr=${PREFIX} \
    --with-gmp=${PREFIX} \
    CC=${CROSS_COMPILE}gcc \
    CXX=${CROSS_COMPILE}g++ \
    CFLAGS="-g -O2 -I${SYSROOT}/usr/include/ --sysroot=${SYSROOT}" \
    LDFLAGS="-L${SYSROOT}/usr/lib/" \
    CPP=${CROSS_COMPILE}cpp \
    CPPFLAGS="-I${SYSROOT}/usr/include/" \
    AR=${CROSS_COMPILE}ar \
    NM=${CROSS_COMPILE}nm
make clean
make -j$THREADS
make install
make clean