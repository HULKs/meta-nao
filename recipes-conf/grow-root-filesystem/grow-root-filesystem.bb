SUMMARY = "SystemD services to prepare the partitions"
LICENSE = "CLOSED"

ALLOW_EMPTY:${PN} = "1"

RDEPENDS:${PN} = "e2fsprogs-resize2fs"

pkg_postinst_ontarget:${PN}() {
    /sbin/resize2fs /dev/disk/by-partuuid/42424242-1120-1120-1120-424242424242
}
