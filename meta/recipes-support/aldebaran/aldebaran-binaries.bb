SUMMARY = "Installs all binaries shipped by aldebaran"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "file://aldebaran_binaries.tar.gz;sha256sum=02848f1b604c3afc7d52b4f01bc83434250709c720f86619eeb39d0bf6701c27"

S = "${WORKDIR}/sources"
UNPACKDIR = "${S}"

RDEPENDS:${PN} += "bash"

INHIBIT_PACKAGE_STRIP = "1"
INHIBIT_SYSROOT_STRIP = "1"
INHIBIT_PACKAGE_DEBUG_SPLIT  = "1"

ALDEBARAN_BIN_DIR = "/opt/aldebaran/bin"
ALDEBARAN_LIB_DIR = "/opt/aldebaran/lib"

do_install() {
  install -d ${D}/opt/aldebaran/share/firmware/
  install -m 0644 ${S}/aldebaran_files/opt/aldebaran/share/firmware/CX3RDK_OV5640_USB2.img ${D}/opt/aldebaran/share/firmware/
  install -m 0644 ${S}/aldebaran_files/opt/aldebaran/share/firmware/CX3RDK_OV5640_USB3.img ${D}/opt/aldebaran/share/firmware/

  install -d ${D}/${nonarch_base_libdir}/firmware
  install ${S}/aldebaran_files/lib/firmware/sbre-usb-i2c.dfuse ${D}/${nonarch_base_libdir}/firmware

  install -d ${D}/opt/aldebaran/etc/
  install -D ${S}/aldebaran_files/opt/aldebaran/etc/alfand.conf ${D}/opt/aldebaran/etc/
  install -d ${D}/opt/aldebaran/etc/hal
  install -D ${S}/aldebaran_files/opt/aldebaran/etc/hal/hal.xml ${D}/opt/aldebaran/etc/hal/
  install -d ${D}/opt/aldebaran/share/lola
  install -D ${S}/aldebaran_files/opt/aldebaran/share/lola/nao_v6.xml ${D}/opt/aldebaran/share/lola/

  install -d ${D}/${ALDEBARAN_BIN_DIR}
  install -D ${S}/aldebaran_files/opt/aldebaran/bin/* ${D}/${ALDEBARAN_BIN_DIR}

  install -d ${D}/${ALDEBARAN_LIB_DIR}
  install -D ${S}/aldebaran_files/opt/aldebaran/lib/* ${D}/${ALDEBARAN_LIB_DIR}
}

do_package_qa[noexec] = "1"
EXCLUDE_FROM_SHLIBS = "1"

FILES:${PN} += "\
                /opt/aldebaran/share/firmware/ \
                ${nonarch_base_libdir}/firmware/ \
                /opt/aldebaran/etc/ \
                /opt/aldebaran/etc/hal/ \
                /opt/aldebaran/share/lola/ \
                ${ALDEBARAN_BIN_DIR}/ \
                ${ALDEBARAN_LIB_DIR}/ \
               "
