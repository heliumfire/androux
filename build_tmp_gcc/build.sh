#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#

make distclean
rm */config.cache
../gcc/configure \
    --prefix=${PREFIX} \
    --host=arm-linux-androideabi \
    --target=arm-linux-androideabi \
    --with-gmp=${PREFIX} \
    --with-mpc=${PREFIX} \
    --with-mpfr=${PREFIX} \
    --disable-multilib \
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
make -j$THREADS
make install
make clean
