# Copyright (C) 2021 Maximilian Schmidt <maximilian.schmidt@tuhh.de>
# Released under the MIT license (see COPYING.MIT for the terms)

SUMMARY = "Aldebaran flavoured NaoV6"
LICENSE = "CLOSED"

RDEPENDS_${PN} = "aldebaran-binaries"

SRC_URI = " \
           file://harakiri \
           file://42-usb-cx3.rules \
           file://alfand.service \
           file://00-hal-log.conf \
           file://rt-group.conf \
           file://aldebaran_path.sh \
           file://90-cgos.rules \
           file://90-hal.rules \
           file://hal \
           file://hal.service \
           file://lola \
           file://lola.service \
          "

ALDEBARAN_DIR = "/opt/aldebaran"

do_install() {
  install -d ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${WORKDIR}/42-usb-cx3.rules ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${WORKDIR}/90-cgos.rules ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${WORKDIR}/90-hal.rules ${D}${sysconfdir}/udev/rules.d/

  install -d ${D}/lib/systemd/system-shutdown/
  install -m 755 ${WORKDIR}/harakiri ${D}/${nonarch_base_libdir}/systemd/system-shutdown

  install -d ${D}${systemd_unitdir}/system
  install -m 0644 ${WORKDIR}/alfand.service ${D}${systemd_unitdir}/system
  install -m 0644 ${WORKDIR}/hal.service ${D}${systemd_unitdir}/system
  install -m 0644 ${WORKDIR}/lola.service ${D}${systemd_unitdir}/system

  install -d ${D}${bindir}
  install -m 755 ${WORKDIR}/hal ${D}${bindir}
  install -m 755 ${WORKDIR}/lola ${D}${bindir}

  install -d ${D}/${sysconfdir}/tmpfiles.d/
  install -m 0644 ${WORKDIR}/00-hal-log.conf ${D}/${sysconfdir}/tmpfiles.d/

  install -d ${D}/${sysconfdir}/security/limits.d/
  install -m 0644 ${WORKDIR}/rt-group.conf ${D}/${sysconfdir}/security/limits.d/

  install -d ${D}${sysconfdir}/profile.d/
  install -m 0644 ${WORKDIR}/aldebaran_path.sh ${D}${sysconfdir}/profile.d/
}

FILES_${PN} = "\
                ${nonarch_base_libdir}/systemd/system-shutdown \
                ${sysconfdir}/udev/rules.d/ \
                ${sysconfdir}/tmpfiles.d/ \
                ${sysconfdir}/security/limits.d \
                ${sysconfdir}/profile.d/ \
                ${bindir}/hal \
                ${bindir}/lola \
              "

NATIVE_SYSTEMD_SUPPORT = "1"
SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE_${PN} = "alfand.service hal.service lola.service"

inherit systemd
