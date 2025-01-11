SUMMARY = "aliveness"
HOMEPAGE = "https://hulks.de"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${WORKDIR}/git/COPYING;md5=5b4473596678d62d9d83096273422c8c"

inherit cargo

SRC_URI = "git://github.com/HULKs/hulk.git;branch=main;protocol=https"
SRCREV = "6208ddeaeab62317ed95bf89417207757bb6bf2c"
S = "${WORKDIR}/git/tools/aliveness"

SYSTEMD_SERVICE:${PN} = "aliveness.service eth0-wait-online.service"
SRC_URI += "file://aliveness.service"
SRC_URI += "file://eth0-wait-online.service"

inherit systemd

do_install:append () {
  install -d "${D}${systemd_unitdir}/system"
  install -m 0644 "${UNPACKDIR}/aliveness.service" "${D}${systemd_unitdir}/system/"
  install -m 0644 "${UNPACKDIR}/eth0-wait-online.service" "${D}${systemd_unitdir}/system/"
}

require aliveness-crates.inc
