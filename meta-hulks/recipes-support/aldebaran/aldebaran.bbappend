# We are only removing the alfand.service.
# The executable is still on the nao

do_install:append(){
  rm ${D}${systemd_unitdir}/system/alfand.service
}

SYSTEMD_SERVICE:${PN}:remove = "alfand.service"
