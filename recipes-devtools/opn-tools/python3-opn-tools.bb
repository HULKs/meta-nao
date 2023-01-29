LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "d3bf5af100aeb9f842629350c1c3b9d9a08a9b9c"

inherit setuptools3

BBCLASSEXTEND = "native nativesdk"
