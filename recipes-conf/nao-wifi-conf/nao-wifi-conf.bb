SUMMARY = "Wifi configuration"
LICENSE = "CLOSED"

SRC_URI = " \
            file://main.conf \
            file://SPL_A.psk \
            "
RDEPENDS_${PN} = "iwd"

do_install() {
    install -d ${D}${sysconfdir}/iwd/
    install -m 0644 ${WORKDIR}/main.conf ${D}${sysconfdir}/iwd/

    install -d ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_A.psk ${D}/var/lib/iwd/
}

FILES_${PN} = "\
                ${sysconfdir}/iwd/main.conf \
                /var/lib/iwd/ \
              "
