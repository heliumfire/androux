# This is a -*-perl-*- script
#
# Set variables that were defined by configure, in case we need them
# during the tests.

%CONFIG_FLAGS = (
    AM_LDFLAGS   => '-Wl,--export-dynamic',
    AR           => 'arm-linux-androideabi-ar',
    CC           => 'arm-linux-androideabi-gcc',
    CFLAGS       => '-g -O2 -I/home/anushruth/exps/androux/platforms/android-9/arch-arm/usr/include/ --sysroot=/home/anushruth/exps/androux/platforms/android-9/arch-arm',
    CPP          => 'arm-linux-androideabi-cpp',
    CPPFLAGS     => '-I/home/anushruth/exps/androux/platforms/android-9/arch-arm/usr/include/ -DHAVE_TTYNAME=0',
    GUILE_CFLAGS => '',
    GUILE_LIBS   => '',
    LDFLAGS      => '-L/home/anushruth/exps/androux/platforms/android-9/arch-arm/usr/lib/',
    LIBS         => ''
);

1;
