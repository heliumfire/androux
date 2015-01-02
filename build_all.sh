#!/bin/bash
abort()
{
    echo >&2 '
***************
*** ABORTED ***
***************
'
    echo "An error occurred. Exiting..." >&2
    exit 1
}

trap 'abort' 0

set -e
export CROSS_COMPILE=/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-
export PATH=$PATH:/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/
export PREFIX=/Users/regnarts/Documents/experiment/system
export SYSROOT=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm

cd binutils
./build.sh
