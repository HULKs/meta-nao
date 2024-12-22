DEPENDS += "\
            nao-wifi-conf\
           "

SUMMARY = "Add systemd services to initially set ip address config"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "\
           file://configure_network \
           file://network-config.service \
           file://SPL_HULKs.psk \
           file://fallback_notification.wav \
           file://network-fallback-notification.service \
          "

S = "${WORKDIR}/sources"
UNPACKDIR = "${S}"

do_install() {
    install -d ${D}${sbindir}/
    install -m 0755 ${S}/configure_network ${D}${sbindir}/
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/network-config.service ${D}${systemd_unitdir}/system/
    install -m 0644 ${S}/network-fallback-notification.service ${D}${systemd_unitdir}/system/
    install -d ${D}/var/lib/iwd/
    install -m 0600 ${S}/SPL_HULKs.psk ${D}/var/lib/iwd/
    install -d ${D}/${datadir}/network-config/
    install -m 0600 ${S}/fallback_notification.wav ${D}/${datadir}/network-config/
}

FILES:${PN} = " \
                ${sbindir}/configure_network \
                /var/lib/iwd/ \
                ${datadir}/network-config/ \
              "

SYSTEMD_SERVICE:${PN} = " \
                          network-config.service \
                          network-fallback-notification.service \
                        "

inherit systemd
