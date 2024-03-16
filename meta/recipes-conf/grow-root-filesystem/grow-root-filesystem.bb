SUMMARY = "Grows the root filesystem on first boot"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

ALLOW_EMPTY:${PN} = "1"

RDEPENDS:${PN} = "e2fsprogs-resize2fs"

pkg_postinst_ontarget:${PN}() {
    /sbin/resize2fs /dev/disk/by-partuuid/42424242-1120-1120-1120-424242424242
}
