OKS_FILE ?= "${IMAGE_BASENAME}.${MACHINE}.oks"
OKS_SEARCH_PATH ?= "${THISDIR}:${@':'.join('%s/opn' % p for p in '${BBPATH}'.split(':'))}"
OKS_FULL_PATH = "${@oks_search(d.getVar('OKS_FILE'), d.getVar('OKS_SEARCH_PATH')) or ''}"

CONVERSIONTYPES += "opn"

def oks_search(file, search_path):
      if os.path.isabs(file):
          if os.path.exists(file):
              return file
      else:
          searched = bb.utils.which(search_path, file)
          if searched:
              return searched

CONVERSION_CMD_opn() {
  in="${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type}"
  out="${IMAGE_NAME}${IMAGE_NAME_SUFFIX}.${type}.opn"
	oks="${OKS_FULL_PATH}"

  truncate -s %1024 "${in}"
  mkopn $in $oks $out
}

CONVERSION_DEPENDS_opn = "coreutils-native python3-opn-tools-native"
