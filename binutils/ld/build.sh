#!/bin/sh

#  build.sh
#  
#
#  Created by Anushruth on 17/12/2014.
#
./configure --prefix=/Users/regnarts/Documents/experiment/prefix --host=arm-linux-androideabi --target=arm-linux-androideabi CC=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-gcc CXX=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-g++ CFLAGS="-g -O2 -I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/ --sysroot=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/ -Wno-error" LDFLAGS="-L/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/lib/ --sysroot=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/" CPP=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-cpp CPPFLAGS="-I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/" AR=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.6/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-ar
make