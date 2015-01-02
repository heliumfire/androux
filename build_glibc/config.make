# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.20
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /home/anushruth/experiment/sysroot
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
slibdir = 
rtlddir = 
localedir = 
sysconfdir = ${prefix}/etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = 
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = ${prefix}/var

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = arm
base-machine = arm
config-vendor = unknown
config-os = linux-androideabi
config-sysdirs =  sysdeps/unix/sysv/linux/arm sysdeps/arm/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/arm sysdeps/unix sysdeps/posix sysdeps/arm sysdeps/arm/soft-fp sysdeps/wordsize-32 sysdeps/ieee754/flt-32 sysdeps/ieee754/dbl-64 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include
sysincludes = -nostdinc -isystem /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/../lib/gcc/arm-linux-androideabi/4.6/include -isystem /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/../lib/gcc/arm-linux-androideabi/4.6/include-fixed -isystem /home/anushruth/tools/android-ndk-r10b/platforms/android-9/arch-arm/usr/include
c++-sysincludes = 
all-warnings = 

have-z-combreloc = yes
have-z-execstack = yes
have-Bgroup = no
with-fp = yes
old-glibc-headers = no
unwind-find-fde = no
have-forced-unwind = yes
have-fpie = yes
gnu89-inline-CFLAGS = -fgnu89-inline
have-ssp = yes
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
fno-unit-at-a-time = -fno-toplevel-reorder -fno-section-anchors
bind-now = no
have-hash-style = yes
use-default-link = no
output-format = unknown

static-libgcc = -static-libgcc

oldest-abi = default
exceptions = -fexceptions
multi-arch = no

mach-interface-list = 

sizeof-long-double = 0

nss-crypt = no

# Configuration options.
build-shared = no
build-pic-default= yes
build-profile = no
build-static-nss = yes
add-ons = libidn
add-on-subdirs = 
sysdeps-add-ons = 
cross-compiling = maybe
force-install = yes
link-obsolete-rpc = no
build-nscd = yes
use-nscd = yes
build-hardcoded-path-in-tests= no
build-pt-chown = no
enable-lock-elision = no

# Build tools.
CC = /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-gcc
CXX = /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/arm-linux-androideabi-g++
BUILD_CC = gcc
CFLAGS = -g -O2 --sysroot=/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/usr/ -I/home/anushruth/tools/android-ndk-r10d/platforms/android-9/arch-arm/usr/include
CPPFLAGS-config = 
CPPUNDEFS = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/../lib/gcc/arm-linux-androideabi/4.6/../../../../arm-linux-androideabi/bin/ar
NM = nm
MAKEINFO = makeinfo
AS = $(CC) -c
BISON = /usr/bin/bison
AUTOCONF = no
OBJDUMP = /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/../lib/gcc/arm-linux-androideabi/4.6/../../../../arm-linux-androideabi/bin/objdump
OBJCOPY = /home/anushruth/tools/android-ndk-r10d/toolchains/arm-linux-androideabi-4.6/prebuilt/linux-x86_64/bin/../lib/gcc/arm-linux-androideabi/4.6/../../../../arm-linux-androideabi/bin/objcopy
READELF = readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = msgfmt

# Script execution tools.
BASH = /bin/bash
AWK = gawk
PERL = /usr/bin/perl

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (GNU libc) 
PKGVERSION_TEXI = (GNU libc) 
REPORT_BUGS_TO = <http://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{http://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

override stddef.h = # The installed <stddef.h> seems to be libc-friendly.
default-abi = soft
have-arm-tls-desc = no
