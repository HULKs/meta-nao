###############################################################################
# Taken from meta-intel@5a30dcefa54040dd05099549a56156a83263554c

require recipes-kernel/linux/linux-intel.inc

# Skip processing of this recipe if it is not explicitly specified as the
# PREFERRED_PROVIDER for virtual/kernel. This avoids errors when trying
# to build multiple virtual/kernel providers, e.g. as dependency of
# core-image-rt-sdk, core-image-rt.
python () {
    if d.getVar("KERNEL_PACKAGE_NAME", True) == "kernel" and d.getVar("PREFERRED_PROVIDER_virtual/kernel") != "linux-intel-rt":
        raise bb.parse.SkipPackage("Set PREFERRED_PROVIDER_virtual/kernel to linux-intel-rt to enable it")
}

LIC_FILES_CHKSUM = "file://COPYING;md5=bbea815ee2795b2f4230826c0c6b8814"
SRC_URI:append = " file://0001-menuconfig-mconf-cfg-Allow-specification-of-ncurses-.patch \
"

KBRANCH = "5.4/preempt-rt"
KMETA_BRANCH = "yocto-5.4"

DEPENDS += "elfutils-native openssl-native util-linux-native"

LINUX_VERSION ?= "5.4.170"
SRCREV_machine ?= "196e38246d15096460031f4a17913922c006b12d"
SRCREV_meta ?= "98cce1c95fcc9a26965cbc5f038fd71d53c387c8"

LINUX_KERNEL_TYPE = "preempt-rt"

# Kernel config 'CONFIG_GPIO_LYNXPOINT' goes by a different name 'CONFIG_PINCTRL_LYNXPOINT' in
# linux-intel 5.4 specifically. This cause annoying warning during kernel config audit. So suppress the
# harmless warning for now.
KCONF_BSP_AUDIT_LEVEL = "0"

###############################################################################
# Modifications

SRC_URI += "\
            file://0001-NAO-patches-softbank-congatec.patch \
            file://0002-cgos-32-bit-softbank.patch \
            file://cmdline \
            file://fragment.cfg \
           "

PROVIDES += "cgos-mod"
RPROVIDES:${KERNEL_PACKAGE_NAME} += "cgos-mod"

do_install:append() {
  ln -s bzImage-${KERNEL_VERSION_NAME} ${D}/boot/vmlinuz.efi
  install -m 0644 ${WORKDIR}/cmdline ${D}/boot/cmdline
}

FILES:${KERNEL_PACKAGE_NAME} += "\
                                 /boot/vmlinuz.efi \
                                 /boot/cmdline \
                                "
