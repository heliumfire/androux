# This is a -*-perl-*- script
#
# Set variables that were defined by configure, in case we need them
# during the tests.

%CONFIG_FLAGS = (
    AM_LDFLAGS   => '-Wl,--export-dynamic',
    AR           => '/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-ar',
    CC           => '/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-gcc',
    CFLAGS       => '-g -O2 -I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/ --sysroot=/usr/android/android-ndk-r10b/platforms/android-9/arch-arm',
    CPP          => '/usr/android/android-ndk-r10b/toolchains/arm-linux-androideabi-4.8/prebuilt/darwin-x86_64/bin/arm-linux-androideabi-cpp',
    CPPFLAGS     => '-I/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/include/ -DHAVE_TTYNAME=0',
    GUILE_CFLAGS => '',
    GUILE_LIBS   => '',
    LDFLAGS      => '-L/usr/android/android-ndk-r10b/platforms/android-9/arch-arm/usr/lib/',
    LIBS         => ''
);

1;
