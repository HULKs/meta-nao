# Copyright (C) 2021 Maximilian Schmidt <maximilian.schmidt@tuhh.de>
# Released under the MIT license (see COPYING.MIT for the terms)

SUMMARY = "A JIT Compiler for Neural Network Inference"
HOMEPAGE = "https://github.com/bhuman/CompiledNN"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=dd060c7f02aa543f003b330f7a52e930"
S = "${WORKDIR}/git"

DEPENDS = "hdf5"

SRC_URI = "git://github.com/bhuman/CompiledNN.git;protocol=https \
           file://0001-Pass-project-version-to-CompiledNN-library-target.patch \
           file://remove-asserts.patch \
           file://tensorflow-keras-compatibility.patch \
           "

SRCREV = "8ed33a8d976367bfe7a62f506ba6215256a5b26c"

inherit cmake

EXTRA_OECMAKE = "-DBUILD_SHARED_LIBS=ON"
