LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=5b4473596678d62d9d83096273422c8c"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "1ad3431fb0cef45cd7301ecbf0e6196fbaa8dcb3"

inherit python_setuptools_build_meta

BBCLASSEXTEND = "native nativesdk"
