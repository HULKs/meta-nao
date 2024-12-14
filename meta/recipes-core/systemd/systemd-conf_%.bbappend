FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
    file://80-wired.network \
"

FILES:${PN} += " \
    ${sysconfdir}/systemd/network/80-wired.network \
"

do_install:append() {
    install -d ${D}${sysconfdir}/systemd/network
    install -m 0644 ${WORKDIR}/80-wired.network ${D}${sysconfdir}/systemd/network
}
