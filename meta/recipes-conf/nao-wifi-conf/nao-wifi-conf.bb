SUMMARY = "Wifi configuration for RoboCup"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "\
           file://main.conf \
           file://SPL_A.psk \
           file://SPL_B.psk \
           file://SPL_C.psk \
           file://SPL_D.psk \
           file://SPL_E.psk \
           file://SPL_F.psk \
          "
RDEPENDS:${PN} = "iwd"

do_install() {
    install -d ${D}${sysconfdir}/iwd/
    install -m 0644 ${WORKDIR}/main.conf ${D}${sysconfdir}/iwd/

    install -d ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_A.psk ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_B.psk ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_C.psk ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_D.psk ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_E.psk ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_F.psk ${D}/var/lib/iwd/
}

FILES:${PN} = "\
               ${sysconfdir}/iwd/main.conf \
               /var/lib/iwd/ \
              "
