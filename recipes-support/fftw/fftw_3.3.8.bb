DESCRIPTION = "FFTW"
SECTION = "libs"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=59530bdf33659b29e73d4adb9f9f6552"

SRC_URI = " \
    http://www.fftw.org/fftw-${PV}.tar.gz \
"
SRC_URI[md5sum] = "8aac833c943d8e90d51b697b27d4384d"
SRC_URI[sha256sum] = "6113262f6e92c5bd474f2875fa1b01054c4ad5040f6b0da7c03c98821d9ae303"

inherit cmake
