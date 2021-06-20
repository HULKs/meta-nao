SUMMARY = "A small image just capable of allowing a device to boot."

LICENSE = "MIT"

IMAGE_INSTALL = "packagegroup-core-boot kernel-modules ${CORE_IMAGE_EXTRA_INSTALL}"

IMAGE_LINGUAS = " "

inherit core-image

IMAGE_ROOTFS_SIZE ?= "8192"
IMAGE_ROOTFS_EXTRA_SPACE_append = "${@bb.utils.contains("DISTRO_FEATURES", "systemd", " + 4096", "" ,d)}"

DESCRIPTION = "A small image just capable of allowing a device to boot plus a \
real-time test suite and tools appropriate for real-time use."
DEPENDS += "linux-nao"

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
                             "

# enable ssh
IMAGE_FEATURES += "ssh-server-openssh"
# enable package management
IMAGE_FEATURES += "package-management"

# prepare the data skeleton and nao user
IMAGE_INSTALL += "data-partition nao-home"

# configure wifi
IMAGE_INSTALL += "nao-wifi-conf"

# install aldebaran stuff
IMAGE_INSTALL += "lib32-aldebaran"

# add cmake to the native sdk
TOOLCHAIN_HOST_TASK += "nativesdk-cmake"

inherit extrausers

EXTRA_USERS_PARAMS = "usermod -s /bin/bash -P root root; \
                      usermod -aG tty,uucp,audio,video,plugdev,systemd-journal nao; \
                      usermod -P nao nao; \
                      usermod -s /bin/bash nao; \
                     "
