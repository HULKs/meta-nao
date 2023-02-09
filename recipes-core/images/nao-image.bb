SUMMARY = "A small image just capable of allowing a device to boot."

LICENSE = "MIT"

IMAGE_INSTALL = "packagegroup-core-boot kernel-modules ${CORE_IMAGE_EXTRA_INSTALL}"

IMAGE_LINGUAS = " "

inherit core-image

IMAGE_OVERHEAD_FACTOR = "1.1"
IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE:append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

DESCRIPTION = "A small image just capable of allowing a device to boot plus a \
real-time test suite and tools appropriate for real-time use."

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
TOOLCHAIN_HOST_TASK += " \
    nativesdk-libclang \
    nativesdk-cmake \
    "

inherit extrausers

EXTRA_USERS_PARAMS = "usermod -s /bin/bash -p '\$6\$qK8Ij5Gvqbh.I4Zj\$URC76o65il5XzPodMBfz83RBpcnbFJ0dsWqdeaiayhoNnB.PEpSxFlupSv24iXkHlRhZk7auLAT7X0wS04mxh1' root; \
                      usermod -aG tty,uucp,audio,video,plugdev,systemd-journal nao; \
                     "

ROOTFS_POSTPROCESS_COMMAND += "set_empty_nao_password;"

set_empty_nao_password () {
  if [ -e ${IMAGE_ROOTFS}/etc/shadow ]; then
    sed -i 's%^nao:!:%nao::%' ${IMAGE_ROOTFS}/etc/shadow
  fi
}
