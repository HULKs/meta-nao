# meta-nao - Yocto layer for Softbank Nao V6

This layer provides support for Softbank Nao V6 robot to construct a custom image as an alternative to the original image in context of RoboCup SPL.

In general this image should be usable at this point, and if it isn't this is considered a bug and we appreciate a report by opening an issue.
As this is a very first attempt with the Yocto project and image construction for the Nao robot, Team HULKs is also very interested in suggestions regarding code quality and style as well as best-practices.


## Getting Started

1. Create a directory for the upcoming setup and build phases e.g. `worktree/`. Make sure you have at least 100GB empty disk space available!

2. For project setup the [siemens/kas](https://github.com/siemens/kas) framework is used. To setup *kas* use the containerized (podman/docker) version via the `kas-container` script provided [here](https://github.com/siemens/kas/blob/master/kas-container) and store it inside the `worktree` directory. Alternatively setup *kas* via a *python-pip* installation, follow the installation steps in the [user guide](https://kas.readthedocs.io/en/latest/userguide.html).

3. *meta-nao* ships a `kas-project.yml` project description file. This file defines the project structure *kas* has to setup for the Yocto build phase.
Clone the *meta-nao* repository into some directory used for the Yocto build e.g. `worktree/meta-nao`.

```
git clone git@github.com:hulks/meta-nao worktree/meta-nao
```

4. The Nao V6 uses *LoLA* and *HAL* for the communication with the chestboard. All these binaries and libraries necessary to operate the Nao properly are shipped with the `.opn` robocupper image and **not** included in this repository. To acquire the necessary binaries the `meta-nao/recipes-aldebaran/aldebaran/extract_binaries.sh` script is used. This script fetches all binaries from inside the robocupper image and collects them in an archive for the upcoming build phase. To generate the archive containing the aldebaran binaries run:

```
cd meta-nao/recipes-aldebaran/aldebaran/
mkdir -p aldebaran-binaries
./extract_binaries.sh -o aldebaran-binaries/aldebaran_binaries.tar.gz nao-x86-firmware-249_20190503_203829_robocupper.opn
```

The script references the original robocupper image shipped by softbank. Contact the RoboCup SPL TC to get this image.

5. Execute *kas* from inside the `worktree` directory referencing the `kas-project.yml` to enter the build environment

```
./kas-container -d shell meta-nao/kas-project.yml
```

*kas* fetches all necessary build sources and sets them up in the respective `worktree` directory. After *kas* has setup the working directory, your directory structure should look like this:

```
worktree/
├── build
├── meta-clang
├── meta-congatec-x86
├── meta-intel
├── meta-nao
├── meta-openembedded
└── poky
```

If your container shell does not work as expected, you might have to set your `TERM` environment variable properly (e.g. `TERM=xterm`).

6. Build a nao image. The Yocto project uses *BitBake* for task execution. Call the following build command from inside the *kas* container shell:

```
bitbake nao-opn
```

This generates and executes all necessary tasks and targets to construct a proper `.opn` file. This build phase might take several hours depending on the performance of your build machine and your internet connection. *BitBake* uses a very elaborated caching strategy to speed up following builds of targets. Thus small changes afterwards can only take a few minutes.

7. Fetch and deploy the image. After *BitBake* ran all tasks up to `nao-opn` a new `.opn` file is generated in `worktree/build/tmp/deploy/images/congatec-qa3-64/nao-image-congatec-qa3-64-[...].opn`. To setup a flash stick run:

```
dd if=image_path.opn of=/dev/sdb bs=4M status=progress oflag=sync
```

## Questions and answers

### How can I log into the robot?

The login credentials for user *root* and *nao* are defined in `meta-nao/recipes-core/images/nao-image.bb`. Per default the password is the same as the respective username (*root:root*, *nao:nao*).

### How can I configure IP addresses?

Currently there is no proper network manager installed. This means, networking is controlled via *systemd-networkd* and respective `.network` units. This might change in the future. Team HULKs did not yet decide on the best way to go. Up until now you can configure the network via `wpa_supplicant.conf` and proper `.network` files. Have a look at `meta-nao/recipes-conf/nao-wifi-conf/nao-wifi-conf/80-wlan.network` and `meta-nao/recipes-conf/nao-wifi-conf/nao-wifi-conf/wpa_supplicant-nl80211-wlan0.conf`.
If you have suggestions how to tackle the network configuration problem, please let us know.

### How can I customize the image?

The Yocto Project is organized in layers. You can edit the existing *meta-nao* layer or (better) add an additional layer alongside *meta-nao*, *meta-openembedded*, etc. to overlay configuration in other layers. Have a look at [meta-example](https://github.com/HULKs/meta-example) for an example overlay extending the nao image by the *boost* library.
You can use [https://layers.openembedded.org/layerindex/branch/master/recipes/](https://layers.openembedded.org/layerindex/branch/master/recipes/) to search for existing recipes.

### How do I target the nao architecture during development?

The Yocto project contains tasks to build a proper SDK to use for development. To build the sdk do the following:

1. Enter the build container

```
./kas-container -d shell meta-nao/kas-project.yml
```

2. Build the SDK (from inside the container)

```
bitbake -c populate_sdk nao-image
```

This again takes several hours. On machines at HULKs this can take up to 4 hours.

3. Download and install the SDK

After a successful build, the SDK is located at `worktree/build/tmp/deploy/sdk/Nao-OS-glibc-x86_64-nao-image-corei7-64-congatec-qa3-64-toolchain-0.2.sh`. To install the SDK run the script and follow the instructions. Afterwards you are able to source the build environment and use the respective cross compilers.


## Links and Resources

[Yocto Project Mega-Manual](https://www.yoctoproject.org/docs/current/mega-manual/mega-manual.html)

[kas user guide](https://kas.readthedocs.io/en/latest/userguide.html)

[Open Embedded recipe search](https://layers.openembedded.org/layerindex/branch/master/recipes/)
