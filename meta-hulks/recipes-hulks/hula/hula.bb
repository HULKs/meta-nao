SUMMARY = "hula"
HOMEPAGE = "https://hulks.de"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/COPYING;md5=5b4473596678d62d9d83096273422c8c"

inherit cargo

SRC_URI += "git://github.com/HULKs/hulk.git;branch=main;protocol=https"
SRCREV = "edb5c9db821a9e91178e9b73c5d705c2e6c61b0f"
S = "${WORKDIR}/git/tools/hula"
CARGO_SRC_DIR = "proxy"

inherit pkgconfig

DEPENDS += "\
            dbus \
            systemd \
           "
RDEPENDS:${PN} += "\
                   dbus \
                   systemd \
                  "

SYSTEMD_SERVICE:${PN} = "hula.service"
SRC_URI += "\
            file://hula.service \
            file://org.hulks.hula.conf \
           "

inherit systemd

do_install:append() {
  install -d ${D}${systemd_unitdir}/system/
  install -m 0644 ${UNPACKDIR}/hula.service ${D}${systemd_unitdir}/system/
  install -d ${D}${datadir}/dbus-1/system.d/
  install -m 0644 ${UNPACKDIR}/org.hulks.hula.conf ${D}${datadir}/dbus-1/system.d/
}

FILES:${PN} += "${datadir}/dbus-1/system.d/org.hulks.hula.conf"

require hula-crates.inc
