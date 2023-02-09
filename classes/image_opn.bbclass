CONVERSIONTYPES += "opn"

CONVERSION_CMD:opn = "mkopn ${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type} ${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type}.opn"
CONVERSION_DEPENDS_opn = "python3-opn-tools-native"
