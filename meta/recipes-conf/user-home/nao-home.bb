SUMMARY = "Setup the nao home directory"
LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

SRC_URI = "\
           file://robocup.conf \
           file://nao.rules \
          "

S = "${WORKDIR}/sources"
UNPACKDIR = "${S}"

RDEPENDS:${PN} += "polkit"

inherit useradd

do_install:append() {
  # Enable robocupper mode
  install -o nao -g nao -d ${D}/home/nao/
  install -o nao -g nao -m 0644 ${S}/robocup.conf ${D}/home/nao/

  # Install nao rules for polkit
  install -d ${D}${datadir}/polkit-1/rules.d/
  install ${S}/nao.rules ${D}${datadir}/polkit-1/rules.d
}

USERADD_PACKAGES = "${PN}"

GROUPADD_PARAM:${PN} = "\
                        --system --gid 1001 nao; \
                        --system --gid 99 hal; \
                        --system wheel; \
                        --gid 113 rt; \
                       "

USERADD_PARAM:${PN} = "\
                       --gid nao \
                       --uid 1001 \
                       --skel /dev/null \
                       --create-home \
                       --home-dir /home/nao \
                       --groups hal,rt,wheel \
                       -s /bin/bash \
                       nao \
                      "

FILES:${PN} = "\
               /home/nao/robocup.conf \
               ${datadir}/polkit-1/rules.d/nao.rules \
              "
