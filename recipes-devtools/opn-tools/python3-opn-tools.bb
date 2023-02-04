LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "c25950ce981ca66a6cea621f9a415cef849841b0"

inherit setuptools3

BBCLASSEXTEND = "native nativesdk"
