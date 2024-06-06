FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SDK_ZSTD_COMPRESSION_LEVEL = "-9"

CORE_IMAGE_EXTRA_INSTALL += "\
                             aliveness \
                             breeze \
                             compilednn \
                             hula \
                             hulk \
                             iproute2 \
                             jq \
                             libxml2-utils \
                             libcap-bin \
                             libogg \
                             libopus \
                             nano \
                             network-config \
                             opusfile \
                             python3 \
                             python3-pip \
                             openvino-inference-engine \
                            "
