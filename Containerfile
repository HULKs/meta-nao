FROM debian

RUN apt-get update && apt-get install --no-install-recommends --yes \
  ca-certificates \
  curl \
  file \
  python3 \
  xz-utils \
  zstd

ARG version

RUN curl --fail --location --progress-bar --output /opt/toolchain.sh \
  https://github.com/HULKs/meta-nao/releases/download/${version}/HULKs-OS-$(uname -m)-toolchain-${version}.sh

RUN chmod +x /opt/toolchain.sh && /opt/toolchain.sh -d /naosdk -y && rm /opt/toolchain.sh
RUN echo . /naosdk/environment-setup-corei7-64-aldebaran-linux >> /root/.bashrc
