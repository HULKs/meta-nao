SUMMARY = "Add systemd services to prepare the data partition"
LICENSE = "CLOSED"

SRC_URI = "\
           file://data-format.service \
           file://data-skeleton.service \
           "

do_install() {
    install -d ${D}${systemd_unitdir}/system/
    install -m 0644 ${WORKDIR}/data-format.service ${D}${systemd_unitdir}/system/
    install -m 0644 ${WORKDIR}/data-skeleton.service ${D}${systemd_unitdir}/system/
}

FILES:${PN} = "\
               ${systemd_unitdir}/system/data-format.service \
               ${systemd_unitdir}/system/data-skeleton.service \
              "

# install services by default
NATIVE_SYSTEMD_SUPPORT = "1"
SYSTEMD_PACKAGES = "${PN}"
SYSTEMD_SERVICE:${PN} = "data-format.service data-skeleton.service"

inherit systemd
