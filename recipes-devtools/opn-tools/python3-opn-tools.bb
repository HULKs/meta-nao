LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "ac0ae1702bc43623aaf07ba467acf632c879d856"

inherit setuptools3

BBCLASSEXTEND = "native nativesdk"
