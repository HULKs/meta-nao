LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5b4473596678d62d9d83096273422c8c"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "630d559f74b92c118209afc1f39c2d7b1fe6bc66"

inherit python_setuptools_build_meta

BBCLASSEXTEND = "native nativesdk"
