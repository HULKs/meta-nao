CONVERSIONTYPES += "opn"

CONVERSION_CMD:opn = "mkopn ${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type} ${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type}.opn"
CONVERSION_DEPENDS_opn = "coreutils-native python3-opn-tools-native"
