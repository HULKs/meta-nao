# Copyright (C) 2021 Maximilian Schmidt <maximilian.schmidt@tuhh.de>
# Released under the MIT license (see COPYING.MIT for the terms)

SUMMARY = "LI-OV5640 2D Camera flasher"
HOMEPAGE = "https://gitlab.com/clemolgat-SBR/leopard-imaging"
LICENSE = "MPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=9741c346eef56131163e13b9db1241b3"
S = "${WORKDIR}/git/flash-cx3"

SRC_URI = "git://gitlab.com/clemolgat-SBR/leopard-imaging.git;protocol=https"

DEPENDS = "libusb1"
RDEPENDS:${PN} = "libusb1"

SRCREV = "fef1666d76eedf3c51c0a6b8a4d2e7b9088324c7"

inherit cmake
