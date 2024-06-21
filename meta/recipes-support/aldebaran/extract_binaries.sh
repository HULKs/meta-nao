#!/bin/bash

# Abort script at first error, when a command exits with non-zero status
set -e
# Causes a pipeline to return the exit status of the last command in the pipe that returned a non-zero return value
set -o pipefail

OUTPUT_FILE="aldebaran_binaries.tar.gz"
OPN_FILE=""
FORCE=0
KEEP_TREE=0
# .opn image offsets
HEADER_SIZE=4096
INSTALLER_OFFSET=$HEADER_SIZE
INSTALLER_SIZE=1048576
IMAGE_OFFSET=$(($INSTALLER_SIZE+$INSTALLER_OFFSET))
BLOCK_SIZE=4096

help()
{
    # Display Help
    echo "extract_binaries mounts the opn file system and extracts all aldebaran libraries and binaries"
    echo
    echo "Syntax: extract_binaries [-f,-k,-o name] opn_file"
    echo "options:"
    echo "o     specify output file [default: $OUTPUT_FILE]"
    echo "f     force overwriting of existing files"
    echo "k     keep aldebaran files tree after composing"
    echo "h     print this help message"
    echo
}

while getopts hfko: option
do	case "$option" in
    o) # set output file
        OUTPUT_FILE="$OPTARG";;
    f) # override existing files
        FORCE=1;;
    k) # keep files tree
        KEEP_TREE=1;;
    h) # print help message
        help
        exit 0;;
    [?])
        help
        exit 1;;
    esac
done
shift $((OPTIND - 1))

if [ $# -lt 1 ]; then
    help
    exit 1
fi

for TOOL in "pigz" "guestmount" "patchelf"; do
    hash "${TOOL}" 2>/dev/null || { echo >&2 "${TOOL} is not installed!"; exit 1; }
done

OPN_FILE=$1

if [ ! -f $"./${OPN_FILE}.ext3" -o $FORCE -eq 1 ]; then
    echo "Copy filesystem..."
    dd if="$OPN_FILE" of="./${OPN_FILE}.ext3.gz" skip=$(($IMAGE_OFFSET/$BLOCK_SIZE)) bs=$BLOCK_SIZE
    sed -i '$ s/\x00*$//' ./${OPN_FILE}.ext3.gz # remove zeros
    echo "Done!"
    echo "Decompress filesystem..."
    pigz -df "./${OPN_FILE}.ext3.gz"
    echo "Done!"
else
    echo "Filesystem file already exists, skipping..."
fi

echo "Mounting filesystem..."
FILESYSTEM_DIR="opn_filesystem"
if [ -d $FILESYSTEM_DIR -a ! -z "$(ls -A $FILESYSTEM_DIR 2> /dev/null)" ]; then
    echo "Mount target directory is non empty! Aborting..."
    read -p "Continue nonetheless? And skip mounting? (y/N) " yn
    case $yn in
        [Yy]* )
            echo "Skipping mount, assuming the directory already contains the filesystem..."
            ;;
        [Nn]* ) exit;;
        * ) exit;;
    esac
else
    mkdir -p $FILESYSTEM_DIR
    guestmount -a ./${OPN_FILE}.ext3 -m /dev/sda --ro $FILESYSTEM_DIR
fi
echo "Done!"

echo "Composing files..."
FILES_DIR="aldebaran_files"
mkdir -p $FILES_DIR

ALDEBARAN_DIR="${FILES_DIR}/opt/aldebaran"
ALDEBARAN_BIN_DIR="${ALDEBARAN_DIR}/bin"
ALDEBARAN_LIB_DIR="${ALDEBARAN_DIR}/lib"

# Extracting necessary files
# camera driver
mkdir -p $ALDEBARAN_DIR/share/firmware/
cp $FILESYSTEM_DIR/usr/share/firmware/CX3RDK_OV5640_USB2.img $ALDEBARAN_DIR/share/firmware/
cp $FILESYSTEM_DIR/usr/share/firmware/CX3RDK_OV5640_USB3.img $ALDEBARAN_DIR/share/firmware/

# dfuse firmware
mkdir -p $FILES_DIR/lib/firmware/
cp $FILESYSTEM_DIR/lib/firmware/sbre-usb-i2c.dfuse $FILES_DIR/lib/firmware/

# aldebaran config
mkdir -p $ALDEBARAN_DIR/etc/
cp $FILESYSTEM_DIR/opt/aldebaran/etc/alfand.conf $ALDEBARAN_DIR/etc
mkdir -p $ALDEBARAN_DIR/etc/hal
cp $FILESYSTEM_DIR/opt/aldebaran/etc/hal/hal.xml $ALDEBARAN_DIR/etc/hal
mkdir -p $ALDEBARAN_DIR/share/lola/
cp $FILESYSTEM_DIR/opt/aldebaran/share/lola/nao_v6.xml $ALDEBARAN_DIR/share/lola

# aldebaran scripts
mkdir -p $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/usr/libexec/reset-cameras.sh $ALDEBARAN_BIN_DIR/reset-cameras

# binaries
mkdir -p $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/libexec/chest-harakiri $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/hal $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/lola $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/fanspeed $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/alfand $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/chest-mode $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/chest-version $ALDEBARAN_BIN_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/bin/head_id $ALDEBARAN_BIN_DIR

mkdir -p $ALDEBARAN_LIB_DIR
# aldebaran libraries
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libbn-usb.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libbn-common.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libbn-rt.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libhal_common.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libhal_core.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libhalsync.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libio_headi2c.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libio_headusb.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnao-modules.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnao_devices.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnao_running.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnaospecialsimulation_running.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_actuatorifnostiffness.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_addnaodevicesspecialsimulation.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_calibration.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_clientsync.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_dcmlost.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_diagnosis.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_fsrtotalcenterofpression.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_grideye.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_initdevices.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_initmotorboard.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_initnaodevices.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_iocommunication.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_ledifnodcm.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_maxcurrent.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_memberidentification.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_motortemperature.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_naoavailabledevice.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_preferences.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_simulation_fill_attributes.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_simulation.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libplugin_testrobotversion.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libqi.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/librobot_devices.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libposture.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libposturemanager.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalvalue.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalvalueutils.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalproxies.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalmath.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libtouchdefinitions.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libtouchservice.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalcommon.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalerror.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libtouch.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnavigation.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmotionservices.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/liblola_qi_api.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libqpOASESfloat.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libpeople.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libtopological.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libnavcommon.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/librealmover.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmatchwifisignature.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libactuationdefinitions.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libactuationdetail.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libactuationservice.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalvision.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/liblabeling.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalmathinternal.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmpc-walkgen.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmpc-walkgen_qpsolver_qpoases_float.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmpc-walkgen_qpsolver_qpoases_double.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalmodelutils.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libanimation.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalthread.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalserial.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/librobotposture.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/librealodometer.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libvisiongetter.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalextractor.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libexplorer.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libappearance.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libmetrical.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libwifilocalization.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libposturegraph.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/librobot.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libgroundcollision.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libcartesianposture.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/libalfan.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/aldebaran/lib/naoqi/librobotmodel.so $ALDEBARAN_LIB_DIR

# ros libraries
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/librostime.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/libcpp_common.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/librosbag_storage.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/libroscpp_serialization.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/libroslz4.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/opt/ros/indigo/lib/libtf2.so $ALDEBARAN_LIB_DIR

# user libraries
cp $FILESYSTEM_DIR/usr/lib/libboost_chrono.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_filesystem.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_locale.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_program_options.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_regex.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_system.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_thread.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libboost_serialization.so.1.59.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libcrypto.so.1.0.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libicudata.so.56 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libicui18n.so.56 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libicuuc.so.56 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libssl.so.1.0.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libconsole_bridge.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libg2o_core.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libg2o_stuff.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libg2o_csparse_extension.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libg2o_ext_csparse.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libwebsockets.so.10 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libsqlite3.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_calib3d.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_features2d.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_highgui.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_imgproc.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_imgcodecs.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_core.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libopencv_flann.so.3.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libtbbmalloc_proxy.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libtbbmalloc.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libtbb.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libbz2.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libjpeg.so.62 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libpng16.so.16 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libwebp.so.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libtiff.so.5 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/liboctomath.so.1.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/liboctomap.so.1.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/liborocos-bfl.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libgio-2.0.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libgobject-2.0.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libglib-2.0.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/liblz4.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libgmodule-2.0.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libffi.so.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libpcre.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/liblzma.so.5 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libmsgpackc.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libtinyxml.so.2.6.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libxml2.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libcgos.so $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/usr/lib/libstdc++.so.6 $ALDEBARAN_LIB_DIR

# system libraries
cp $FILESYSTEM_DIR/lib/ld-linux.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libc.so.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libcap.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libdl.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libgcc_s.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libm.so.6 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libpthread.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libresolv.so.2 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/librt.so.1 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libsystemd.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libusb-1.0.so.0 $ALDEBARAN_LIB_DIR
cp $FILESYSTEM_DIR/lib/libz.so.1 $ALDEBARAN_LIB_DIR

patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/hal
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/lola
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/alfand
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/chest-harakiri
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/chest-mode
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/chest-version
patchelf --set-interpreter /opt/aldebaran/lib/ld-linux.so.2 $ALDEBARAN_BIN_DIR/fanspeed

echo "Done!"

echo "Unmounting filesystem..."
umount $FILESYSTEM_DIR
echo "Done!"

if [ -z "$(ls -A $FILESYSTEM_DIR)" ]; then
    echo "Clearing up filesystem directory..."
    rm -r $FILESYSTEM_DIR
    echo "Done!"
else
    echo "Filesystem ( $FILESYSTEM_DIR ) dir is not empty!! skipping removal..."
fi

echo "Compressing $FILES_DIR..."
tar --use-compress-program="pigz -9k " -cf $OUTPUT_FILE $FILES_DIR
echo "Done!"

if [ $KEEP_TREE -eq 0 ]; then
    echo "Clearing up $FILES_DIR directory..."
    rm -r $FILES_DIR
    echo "Done!"
else
    echo "Keeping $FILES_DIR directory..."
fi

