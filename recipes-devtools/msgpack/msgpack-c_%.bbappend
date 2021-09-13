FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI += "file://0001-Add-msgpack-namespace.patch"

EXTRA_OECMAKE += "-DBUILD_SHARED_LIBS=ON"
