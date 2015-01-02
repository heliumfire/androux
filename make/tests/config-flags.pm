# This is a -*-perl-*- script
#
# Set variables that were defined by configure, in case we need them
# during the tests.

%CONFIG_FLAGS = (
    AM_LDFLAGS   => '-Wl,--export-dynamic',
    AR           => 'ar',
    CC           => '/home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-gcc',
    CFLAGS       => '-g -O2 --sysroot=/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/ -I/home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include',
    CPP          => '/lib/cpp',
    CPPFLAGS     => '',
    GUILE_CFLAGS => '',
    GUILE_LIBS   => '',
    LDFLAGS      => '--sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/',
    LIBS         => ''
);

1;
