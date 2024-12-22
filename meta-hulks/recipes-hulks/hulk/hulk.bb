SUMMARY = "Nao SPL Robocup -- HULKs setup"
HOMEPAGE = "https://hulks.de"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "\
           file://hulk.service \
           file://hulk-gdbserver.service \
           file://launchHULK \
           file://hulk \
          "

S = "${WORKDIR}/sources"
UNPACKDIR = "${S}"

SYSTEMD_SERVICE:${PN} = "hulk.service hulk-gdbserver.service"

inherit systemd

do_install() {
  install -d ${D}${bindir}
  install -m 755 ${S}/launchHULK ${D}${bindir}
  install -m 755 ${S}/hulk ${D}${bindir}

  install -d ${D}${systemd_unitdir}/system/
  install -m 0644 ${S}/hulk.service ${D}${systemd_unitdir}/system/
  install -m 0644 ${S}/hulk-gdbserver.service ${D}${systemd_unitdir}/system/
}

FILES:${PN} = " \
                ${bindir}/launchHULK \
                ${bindir}/hulk \
              "
