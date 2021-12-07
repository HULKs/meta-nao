FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://sbin_path.sh"

do_install:append() {
  install -d ${D}/data
  install -d ${D}/media/internal

  install -d ${D}${sysconfdir}/profile.d/
  install -m 0644 ${WORKDIR}/sbin_path.sh ${D}${sysconfdir}/profile.d/
}
