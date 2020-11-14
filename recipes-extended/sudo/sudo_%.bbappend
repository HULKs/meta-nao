FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

do_install_append () {
    echo "nao ALL=(ALL) ALL" > ${D}${sysconfdir}/sudoers.d/001_nao
}
