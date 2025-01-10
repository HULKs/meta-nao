SUMMARY = "breeze"
HOMEPAGE = "https://hulks.de"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/COPYING;md5=5b4473596678d62d9d83096273422c8c"

inherit cargo
SRC_URI += "git://github.com/hulks/hulk.git;branch=main;protocol=https"
SRCREV = "3788aa0556d85248bb9bca2f72a98c080bb5debd"
S = "${WORKDIR}/git/tools/breeze"

inherit pkgconfig

DEPENDS += "\
            cgos \
            clang-native \
            systemd \
           "
RDEPENDS:${PN} += "\
                   cgos \
                   systemd \
                  "

SYSTEMD_SERVICE:${PN} = "breeze.service"
SRC_URI += "\
            file://breeze.service \
           "

inherit systemd
# Needed because bindgen does not find cgos.h
export BINDGEN_EXTRA_CLANG_ARGS="-I ${STAGING_INCDIR}"
do_install:append() {
  install -d ${D}${systemd_unitdir}/system/
  install -m 0644 ${UNPACKDIR}/breeze.service ${D}${systemd_unitdir}/system/
}

require breeze-crates.inc
