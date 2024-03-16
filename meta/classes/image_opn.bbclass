CONVERSIONTYPES += "opn"

CONVERSION_CMD:opn = "mkopn ${IMAGE_NAME}.${type} ${IMAGE_NAME}.${type}.opn"
CONVERSION_DEPENDS_opn = "python3-opn-tools-native"
