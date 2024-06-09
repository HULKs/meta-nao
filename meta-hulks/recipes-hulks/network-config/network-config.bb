DEPENDS += "nao-wifi-conf"

SUMMARY = "Add systemd services to initially set ip address config"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "\
           file://id_map.json;sha256sum=16e109281e2e4b119619dd721531e48d6634d64f6787bc45be0cb8e17087fa70 \
           file://configure_network \
           file://network-config.service \
           file://SPL_HULKs.psk \
          "

do_install() {
    install -d ${D}${sysconfdir}/
    install -m 0644 ${WORKDIR}/id_map.json ${D}${sysconfdir}/
    install -d ${D}${sbindir}/
    install -m 0755 ${WORKDIR}/configure_network ${D}${sbindir}/
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${WORKDIR}/network-config.service ${D}${systemd_unitdir}/system/
    install -d ${D}/var/lib/iwd/
    install -m 0600 ${WORKDIR}/SPL_HULKs.psk ${D}/var/lib/iwd/
}

FILES:${PN} = " \
                ${sysconfdir}/id_map.json \
                ${sbindir}/configure_network \
                /var/lib/iwd/ \
              "

SYSTEMD_SERVICE:${PN} = "network-config.service"

inherit systemd
