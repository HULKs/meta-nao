inherit kernel
require recipes-kernel/linux/linux-yocto.inc

LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"

KBRANCH = "v5.4.70-rt40"
SRC_URI = " \
           git://git@github.com/HULKs/NaoKernel-private.git;protocol=ssh;nocheckout=1;name=machine;branch=${KBRANCH}; \
           file://defconfig \
           file://cmdline \
	  "

# Skip processing of this recipe if linux-yocto-rt is not explicitly specified as the
# PREFERRED_PROVIDER for virtual/kernel. This avoids errors when trying
# to build multiple virtual/kernel providers.
python () {
    if d.getVar("KERNEL_PACKAGE_NAME") == "kernel" and d.getVar("PREFERRED_PROVIDER_virtual/kernel") != "linux-nao":
        raise bb.parse.SkipRecipe("Set PREFERRED_PROVIDER_virtual/kernel to linux-nao to enable it")
}

PROVIDES += "cgos-mod"
RPROVIDES_${KERNEL_PACKAGE_NAME} += "cgos-mod"

DEPENDS += "${@bb.utils.contains('ARCH', 'x86', 'elfutils-native', '', d)}"
DEPENDS += "openssl-native util-linux-native"

LINUX_VERSION ?= "5.4.70"
LINUX_VERSION_EXTENSION_append = "-nao"
LINUX_KERNEL_TYPE = "preempt-rt"

SRCREV_machine = "2f8f53592324a23901b85ec426f5864babadc8af"

PV = "${LINUX_VERSION}"

COMPATIBLE_MACHINE = "(intel-corei7-64|intel-core2-32|congatec-qa3-64)"

do_install_append() {
  ln -s bzImage-${KERNEL_VERSION_NAME} ${D}/boot/vmlinuz.efi
  install -m 0644 ${WORKDIR}/cmdline ${D}/boot/cmdline
}

FILES_${KERNEL_PACKAGE_NAME} += "/boot/vmlinuz.efi \
                                 /boot/cmdline \
                                "
