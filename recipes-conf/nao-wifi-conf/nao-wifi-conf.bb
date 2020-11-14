SUMMARY = "Wifi configuration"
LICENSE = "CLOSED"

SRC_URI = " \
            file://80-wlan.network \
            file://wpa_supplicant-nl80211-wlan0.conf \
            "
DEPENDS = "systemd wpa-supplicant"

inherit systemd

do_install() {
    #install -d ${D}${systemd_unitdir}/system/
    install -d ${D}${systemd_unitdir}/network/
    install -m 0644 ${WORKDIR}/80-wlan.network ${D}${systemd_unitdir}/network/
    install -d ${D}${sysconfdir}/wpa_supplicant/
    install -m 0644 ${WORKDIR}/wpa_supplicant-nl80211-wlan0.conf ${D}${sysconfdir}/wpa_supplicant/
    install -d ${D}${systemd_unitdir}/system/network.target.wants/
    ln -s ${systemd_unitdir}/system/wpa_supplicant-nl80211@.service ${D}${systemd_unitdir}/system/network.target.wants/wpa_supplicant-nl80211@wlan0.service
}

FILES_${PN} = "\
                ${systemd_unitdir}/network/80-wlan.network \
                ${sysconfdir}/wpa_supplicant/wpa_supplicant-nl80211-wlan0.conf \
                ${systemd_unitdir}/system/network.target.wants/wpa_supplicant-nl80211@wlan0.service \
              "
