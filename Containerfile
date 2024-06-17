FROM debian

RUN apt-get update && apt-get install --no-install-recommends --yes \
  file \
  python3 \
  xz-utils \
  zstd

ARG version
ARG arch

ADD --chmod=744 https://github.com/HULKs/meta-nao/releases/download/${version}/HULKs-OS-${arch}-toolchain-${version}.sh /opt/toolchain.sh

RUN /opt/toolchain.sh -d /naosdk -y && rm /opt/toolchain.sh
RUN echo . /naosdk/environment-setup-corei7-64-aldebaran-linux >> /root/.bashrc
