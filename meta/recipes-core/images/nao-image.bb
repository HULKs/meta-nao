SUMMARY = "An image that fully supports the NAOv6 robot"

LICENSE = "GPL-3.0-only"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/GPL-3.0-only;md5=c79ff39f19dfec6d293b95dea7b07891"

IMAGE_INSTALL = "packagegroup-core-boot kernel-modules ${CORE_IMAGE_EXTRA_INSTALL}"

IMAGE_LINGUAS = " "

inherit core-image

IMAGE_OVERHEAD_FACTOR = "1.1"
IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

DESCRIPTION = "An image with several tools and drivers to support the NAOv6 robot"

# for realtime tests, hardware latency detector
IMAGE_INSTALL += "rt-tests hwlatdetect"

# Tools, features and utils
CORE_IMAGE_EXTRA_INSTALL += "\
                             packagegroup-core-tools-debug \
                             packagegroup-core-tools-profile \
                             packagegroup-base-wifi \
                             vim \
                             usbutils \
                             util-linux \
                             file tree \
                             v4l-utils \
                             yavta \
                             e2fsprogs \
                             binutils \
                             ldd \
                             pciutils \
                             sudo \
                             bash \
                             i2c-tools \
                             htop \
                             ncurses-tools \
                             ncurses-terminfo \
                             alsa-utils \
                             rsync \
                             polkit \
                             less \
                             iwd \
                             procps \
                             alsa-lib \
                             alsa-state \
                            "

# enable ssh
IMAGE_FEATURES += "ssh-server-openssh"
# enable package management
IMAGE_FEATURES += "package-management"

# grow root filesystem and prepare the nao user directory
IMAGE_INSTALL += "grow-root-filesystem nao-home"

# configure wifi
IMAGE_INSTALL += "nao-wifi-conf"

# install aldebaran stuff
IMAGE_INSTALL += "aldebaran"

# add cmake to the native sdk
TOOLCHAIN_HOST_TASK += "\
                        nativesdk-libclang \
                        nativesdk-cmake \
                        nativesdk-file \
                       "

inherit extrausers

EXTRA_USERS_PARAMS = "\
                      usermod -s /bin/bash -p '\$6\$qK8Ij5Gvqbh.I4Zj\$URC76o65il5XzPodMBfz83RBpcnbFJ0dsWqdeaiayhoNnB.PEpSxFlupSv24iXkHlRhZk7auLAT7X0wS04mxh1' root; \
                      usermod -aG tty,uucp,audio,video,plugdev,systemd-journal nao; \
                     "

ROOTFS_POSTPROCESS_COMMAND += "set_empty_nao_password;"

set_empty_nao_password () {
  if [ -e ${IMAGE_ROOTFS}/etc/shadow ]; then
    sed -i 's%^nao:!:%nao::%' ${IMAGE_ROOTFS}/etc/shadow
  fi
}
