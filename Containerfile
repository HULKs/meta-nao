FROM debian

RUN apt-get update && apt-get install --no-install-recommends --yes \
  file \
  python3 \
  xz-utils \
  zstd

ARG version

COPY build/tmp/deploy/sdk/HULKs-OS-*.sh /opt/

RUN /opt/HULKs-OS-$(uname -m)-toolchain-${version}.sh -d /naosdk -y

RUN echo . /naosdk/environment-setup-corei7-64-aldebaran-linux >> /root/.bashrc

RUN rm /opt/HULKs-OS-*.sh
