FROM ubuntu:rolling

LABEL org.opencontainers.image.source https://github.com/HULKs/meta-hulks

ENV LANG en_US.UTF-8
ENV LC_ALL=en_US.UTF-8

# https://docs.yoctoproject.org/3.2.3/ref-manual/ref-system-requirements.html#ubuntu-and-debian (without some packages, with NodeJS)
RUN apt-get update && \
    DEBIAN_FRONTEND=noninteractive TZ=Europe/Berlin apt-get install --no-install-recommends --yes \
        locales \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8 && \
    DEBIAN_FRONTEND=noninteractive TZ=Europe/Berlin apt-get install --no-install-recommends --yes \
        build-essential \
        chrpath \
        cpio \
        debianutils \
        diffstat \
        file \
        gawk \
        gcc-multilib \
        git \
        git-lfs \
        iputils-ping \
        locales \
        lz4 \
        nodejs \
        npm \
        python3 \
        python3-git \
        python3-jinja2 \
        python3-pexpect \
        python3-pip \
        python3-subunit \
        unzip \
        wget \
        xz-utils \
        zstd \
        pipx \
    && apt-get clean && \
    rm --recursive --force /var/lib/apt/lists/*

RUN pipx install git+https://github.com/siemens/kas.git

COPY aldebaran_binaries.tar.gz /
