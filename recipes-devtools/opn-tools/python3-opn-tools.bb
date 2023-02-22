LICENSE = "CLOSED"

SRC_URI = "git://git@github.com/HULKs/opn-tools.git;branch=main;protocol=https"
S = "${WORKDIR}/git"
SRCREV = "cd1663fa7b93c25705bb4df11eb95929c0e57985"

inherit python_setuptools_build_meta

BBCLASSEXTEND = "native nativesdk"
