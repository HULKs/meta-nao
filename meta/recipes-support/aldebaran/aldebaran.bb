SUMMARY = "Aldebaran flavoured NAOv6"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

RDEPENDS:${PN} = "aldebaran-binaries flash-cx3"

SRC_URI = "\
           file://harakiri \
           file://42-usb-cx3.rules \
           file://alfand.service \
           file://00-hal-log.conf \
           file://rt-group.conf \
           file://aldebaran_path.sh \
           file://90-cgos.rules \
           file://90-hal.rules \
           file://hal.service \
           file://lola.service \
          "

S = "${WORKDIR}/sources"
UNPACKDIR = "${S}"

ALDEBARAN_DIR = "/opt/aldebaran"

do_install() {
  install -d ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${S}/42-usb-cx3.rules ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${S}/90-cgos.rules ${D}${sysconfdir}/udev/rules.d/
  install -m 0644 ${S}/90-hal.rules ${D}${sysconfdir}/udev/rules.d/

  install -d ${D}/${nonarch_base_libdir}/systemd/system-shutdown/
  install -m 755 ${S}/harakiri ${D}/${nonarch_base_libdir}/systemd/system-shutdown

  install -d ${D}${systemd_unitdir}/system
  install -m 0644 ${S}/alfand.service ${D}${systemd_unitdir}/system
  install -m 0644 ${S}/hal.service ${D}${systemd_unitdir}/system
  install -m 0644 ${S}/lola.service ${D}${systemd_unitdir}/system

  install -d ${D}/${sysconfdir}/tmpfiles.d/
  install -m 0644 ${S}/00-hal-log.conf ${D}/${sysconfdir}/tmpfiles.d/

  install -d ${D}/${sysconfdir}/security/limits.d/
  install -m 0644 ${S}/rt-group.conf ${D}/${sysconfdir}/security/limits.d/

  install -d ${D}${sysconfdir}/profile.d/
  install -m 0644 ${S}/aldebaran_path.sh ${D}${sysconfdir}/profile.d/
}

FILES:${PN} = "\
               ${nonarch_base_libdir}/systemd/system-shutdown \
               ${sysconfdir}/udev/rules.d/ \
               ${sysconfdir}/tmpfiles.d/ \
               ${sysconfdir}/security/limits.d \
               ${sysconfdir}/profile.d/ \
              "

NATIVE_SYSTEMD_SUPPORT = "1"
SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE:${PN} = "alfand.service hal.service lola.service"

inherit systemd
