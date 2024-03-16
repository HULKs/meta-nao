FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += "\
            file://0001-NAO-adjustments-in-part-by-SoftBank-and-Congatec.patch \
            file://0002-CGOS-32-bit.patch \
            file://cmdline \
            file://fragment.cfg \
           "

PROVIDES += "cgos-mod"
RPROVIDES:${KERNEL_PACKAGE_NAME} += "cgos-mod"

do_install:append() {
  ln -s bzImage-${KERNEL_VERSION_NAME} ${D}/boot/vmlinuz.efi
  ln -s vmlinuz.efi ${D}/boot/vmlinuz
  install -m 0644 ${WORKDIR}/cmdline ${D}/boot/cmdline
}

FILES:${KERNEL_PACKAGE_NAME} += "\
                                 /boot/vmlinuz.efi \
                                 /boot/vmlinuz \
                                 /boot/cmdline \
                                "
