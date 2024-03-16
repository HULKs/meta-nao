FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

do_install:append () {
    echo "nao ALL=(ALL) ALL" > ${D}${sysconfdir}/sudoers.d/001_nao
}
