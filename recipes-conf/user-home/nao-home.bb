SUMMARY = "Setup the nao home directory"
LICENSE = "CLOSED"

SRC_URI = " \
           file://robocup.conf \
           file://nao.rules \
          "

DEPENDS = "polkit"

do_install() {
  # Enable robocupper mode
  install -o nao -g nao -d ${D}/home/nao/
  install -o nao -g nao -m 0644 ${WORKDIR}/robocup.conf ${D}/home/nao/

  # Install nao rules for polkit
  install -d -m 700 -o polkitd -g root ${D}${datadir}/polkit-1/rules.d/
  install ${WORKDIR}/nao.rules ${D}${datadir}/polkit-1/rules.d
}

inherit useradd

USERADD_PACKAGES = "${PN}"

GROUPADD_PARAM:${PN} = "--system --gid 1001 nao; \
                        --system --gid 99 hal; \
                        --system wheel; \
                        --gid 113 rt;"

USERADD_PARAM:${PN} = "--gid nao --uid 1001 --skel /dev/null --create-home --home-dir /home/nao --groups hal,rt,wheel nao"

FILES:${PN} = " \
               /home/nao/robocup.conf \
               ${datadir}/polkit-1/rules.d/nao.rules \
              "
