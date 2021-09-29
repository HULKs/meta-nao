LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "dea926bcce6a02ab527532347c80539558562ead"

inherit setuptools3

BBCLASSEXTEND = "native nativesdk"
