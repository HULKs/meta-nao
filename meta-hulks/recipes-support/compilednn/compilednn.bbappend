FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI = "git://github.com/HULKs/CompiledNN.git;branch=thinterface;protocol=https"

SRCREV = "3ef07bc23f0224c01883e7cfe3f03c5b5cc64455"

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS=ON -DWITH_ONNX=OFF"
