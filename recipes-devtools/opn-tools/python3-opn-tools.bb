LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "ac0ae1702bc43623aaf07ba467acf632c879d856"

inherit python_setuptools_build_meta

BBCLASSEXTEND = "native nativesdk"
