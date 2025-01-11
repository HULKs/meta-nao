SRC_URI += "\
            crate://crates.io/addr2line/0.21.0 \
            crate://crates.io/adler/1.0.2 \
            crate://crates.io/aho-corasick/1.1.3 \
            crate://crates.io/async-broadcast/0.5.1 \
            crate://crates.io/async-channel/2.3.1 \
            crate://crates.io/async-executor/1.13.1 \
            crate://crates.io/async-fs/1.6.0 \
            crate://crates.io/async-io/1.13.0 \
            crate://crates.io/async-io/2.3.4 \
            crate://crates.io/async-lock/2.8.0 \
            crate://crates.io/async-lock/3.4.0 \
            crate://crates.io/async-process/1.8.1 \
            crate://crates.io/async-recursion/1.1.1 \
            crate://crates.io/async-signal/0.2.10 \
            crate://crates.io/async-task/4.7.1 \
            crate://crates.io/async-trait/0.1.83 \
            crate://crates.io/atomic-waker/1.1.2 \
            crate://crates.io/autocfg/1.4.0 \
            crate://crates.io/backtrace/0.3.71 \
            crate://crates.io/bitflags/1.3.2 \
            crate://crates.io/bitflags/2.6.0 \
            crate://crates.io/block-buffer/0.10.4 \
            crate://crates.io/blocking/1.6.1 \
            crate://crates.io/byteorder/1.5.0 \
            crate://crates.io/bytes/1.8.0 \
            crate://crates.io/cc/1.1.33 \
            crate://crates.io/cfg-if/1.0.0 \
            crate://crates.io/color-eyre/0.6.3 \
            crate://crates.io/color-spantrace/0.2.1 \
            crate://crates.io/concurrent-queue/2.5.0 \
            crate://crates.io/configparser/3.1.0 \
            crate://crates.io/cpufeatures/0.2.14 \
            crate://crates.io/crossbeam-utils/0.8.20 \
            crate://crates.io/crypto-common/0.1.6 \
            crate://crates.io/derivative/2.2.0 \
            crate://crates.io/digest/0.10.7 \
            crate://crates.io/enumflags2/0.7.10 \
            crate://crates.io/enumflags2_derive/0.7.10 \
            crate://crates.io/env_logger/0.10.2 \
            crate://crates.io/equivalent/1.0.1 \
            crate://crates.io/errno/0.3.9 \
            crate://crates.io/event-listener/2.5.3 \
            crate://crates.io/event-listener/3.1.0 \
            crate://crates.io/event-listener/5.3.1 \
            crate://crates.io/event-listener-strategy/0.5.2 \
            crate://crates.io/eyre/0.6.12 \
            crate://crates.io/fastrand/1.9.0 \
            crate://crates.io/fastrand/2.1.1 \
            crate://crates.io/futures-core/0.3.31 \
            crate://crates.io/futures-io/0.3.31 \
            crate://crates.io/futures-lite/1.13.0 \
            crate://crates.io/futures-lite/2.4.0 \
            crate://crates.io/futures-macro/0.3.31 \
            crate://crates.io/futures-sink/0.3.31 \
            crate://crates.io/futures-task/0.3.31 \
            crate://crates.io/futures-util/0.3.31 \
            crate://crates.io/generic-array/0.14.7 \
            crate://crates.io/getrandom/0.2.15 \
            crate://crates.io/gimli/0.28.1 \
            crate://crates.io/hashbrown/0.15.0 \
            crate://crates.io/hermit-abi/0.3.9 \
            crate://crates.io/hermit-abi/0.4.0 \
            crate://crates.io/hex/0.4.3 \
            crate://crates.io/hostname/0.3.1 \
            crate://crates.io/humantime/2.1.0 \
            crate://crates.io/indenter/0.3.3 \
            crate://crates.io/indexmap/2.6.0 \
            crate://crates.io/instant/0.1.13 \
            crate://crates.io/io-lifetimes/1.0.11 \
            crate://crates.io/is-terminal/0.4.13 \
            crate://crates.io/itoa/1.0.11 \
            crate://crates.io/lazy_static/1.5.0 \
            crate://crates.io/libc/0.2.161 \
            crate://crates.io/linux-raw-sys/0.3.8 \
            crate://crates.io/linux-raw-sys/0.4.14 \
            crate://crates.io/lock_api/0.4.12 \
            crate://crates.io/log/0.4.22 \
            crate://crates.io/match_cfg/0.1.0 \
            crate://crates.io/memchr/2.7.4 \
            crate://crates.io/memoffset/0.7.1 \
            crate://crates.io/memoffset/0.9.1 \
            crate://crates.io/miniz_oxide/0.7.4 \
            crate://crates.io/mio/1.0.2 \
            crate://crates.io/nix/0.26.4 \
            crate://crates.io/object/0.32.2 \
            crate://crates.io/once_cell/1.20.2 \
            crate://crates.io/ordered-stream/0.2.0 \
            crate://crates.io/owo-colors/3.5.0 \
            crate://crates.io/parking/2.2.1 \
            crate://crates.io/parking_lot/0.12.3 \
            crate://crates.io/parking_lot_core/0.9.10 \
            crate://crates.io/pin-project-lite/0.2.15 \
            crate://crates.io/pin-utils/0.1.0 \
            crate://crates.io/piper/0.2.4 \
            crate://crates.io/polling/2.8.0 \
            crate://crates.io/polling/3.7.3 \
            crate://crates.io/ppv-lite86/0.2.20 \
            crate://crates.io/proc-macro-crate/1.3.1 \
            crate://crates.io/proc-macro2/1.0.89 \
            crate://crates.io/quote/1.0.37 \
            crate://crates.io/rand/0.8.5 \
            crate://crates.io/rand_chacha/0.3.1 \
            crate://crates.io/rand_core/0.6.4 \
            crate://crates.io/redox_syscall/0.5.7 \
            crate://crates.io/regex/1.11.1 \
            crate://crates.io/regex-automata/0.4.8 \
            crate://crates.io/regex-syntax/0.8.5 \
            crate://crates.io/rustc-demangle/0.1.24 \
            crate://crates.io/rustix/0.37.27 \
            crate://crates.io/rustix/0.38.38 \
            crate://crates.io/ryu/1.0.18 \
            crate://crates.io/scopeguard/1.2.0 \
            crate://crates.io/serde/1.0.214 \
            crate://crates.io/serde_derive/1.0.214 \
            crate://crates.io/serde_json/1.0.132 \
            crate://crates.io/serde_repr/0.1.19 \
            crate://crates.io/serde_spanned/0.6.8 \
            crate://crates.io/sha1/0.10.6 \
            crate://crates.io/sharded-slab/0.1.7 \
            crate://crates.io/shlex/1.3.0 \
            crate://crates.io/signal-hook-registry/1.4.2 \
            crate://crates.io/slab/0.4.9 \
            crate://crates.io/smallvec/1.13.2 \
            crate://crates.io/socket2/0.4.10 \
            crate://crates.io/socket2/0.5.7 \
            crate://crates.io/static_assertions/1.1.0 \
            crate://crates.io/syn/1.0.109 \
            crate://crates.io/syn/2.0.86 \
            crate://crates.io/tempfile/3.13.0 \
            crate://crates.io/termcolor/1.4.1 \
            crate://crates.io/thiserror/1.0.66 \
            crate://crates.io/thiserror-impl/1.0.66 \
            crate://crates.io/thread_local/1.1.8 \
            crate://crates.io/tokio/1.41.0 \
            crate://crates.io/tokio-macros/2.4.0 \
            crate://crates.io/tokio-util/0.7.12 \
            crate://crates.io/toml/0.8.19 \
            crate://crates.io/toml_datetime/0.6.8 \
            crate://crates.io/toml_edit/0.19.15 \
            crate://crates.io/toml_edit/0.22.22 \
            crate://crates.io/tracing/0.1.40 \
            crate://crates.io/tracing-attributes/0.1.27 \
            crate://crates.io/tracing-core/0.1.32 \
            crate://crates.io/tracing-error/0.2.0 \
            crate://crates.io/tracing-subscriber/0.3.18 \
            crate://crates.io/typenum/1.17.0 \
            crate://crates.io/uds_windows/1.1.0 \
            crate://crates.io/unicode-ident/1.0.13 \
            crate://crates.io/valuable/0.1.0 \
            crate://crates.io/version_check/0.9.5 \
            crate://crates.io/waker-fn/1.2.0 \
            crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
            crate://crates.io/winapi/0.3.9 \
            crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
            crate://crates.io/winapi-util/0.1.9 \
            crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
            crate://crates.io/windows-sys/0.48.0 \
            crate://crates.io/windows-sys/0.52.0 \
            crate://crates.io/windows-sys/0.59.0 \
            crate://crates.io/windows-targets/0.48.5 \
            crate://crates.io/windows-targets/0.52.6 \
            crate://crates.io/windows_aarch64_gnullvm/0.48.5 \
            crate://crates.io/windows_aarch64_gnullvm/0.52.6 \
            crate://crates.io/windows_aarch64_msvc/0.48.5 \
            crate://crates.io/windows_aarch64_msvc/0.52.6 \
            crate://crates.io/windows_i686_gnu/0.48.5 \
            crate://crates.io/windows_i686_gnu/0.52.6 \
            crate://crates.io/windows_i686_gnullvm/0.52.6 \
            crate://crates.io/windows_i686_msvc/0.48.5 \
            crate://crates.io/windows_i686_msvc/0.52.6 \
            crate://crates.io/windows_x86_64_gnu/0.48.5 \
            crate://crates.io/windows_x86_64_gnu/0.52.6 \
            crate://crates.io/windows_x86_64_gnullvm/0.48.5 \
            crate://crates.io/windows_x86_64_gnullvm/0.52.6 \
            crate://crates.io/windows_x86_64_msvc/0.48.5 \
            crate://crates.io/windows_x86_64_msvc/0.52.6 \
            crate://crates.io/winnow/0.5.40 \
            crate://crates.io/winnow/0.6.20 \
            crate://crates.io/xdg-home/1.3.0 \
            crate://crates.io/zbus/3.15.2 \
            crate://crates.io/zbus_macros/3.15.2 \
            crate://crates.io/zbus_names/2.6.1 \
            crate://crates.io/zerocopy/0.7.35 \
            crate://crates.io/zerocopy-derive/0.7.35 \
            crate://crates.io/zvariant/3.15.2 \
            crate://crates.io/zvariant_derive/3.15.2 \
            crate://crates.io/zvariant_utils/1.0.1 \
           "

SRC_URI[addr2line-0.21.0.sha256sum] = "8a30b2e23b9e17a9f90641c7ab1549cd9b44f296d3ccbf309d2863cfe398a0cb"
SRC_URI[adler-1.0.2.sha256sum] = "f26201604c87b1e01bd3d98f8d5d9a8fcbb815e8cedb41ffccbeb4bf593a35fe"
SRC_URI[aho-corasick-1.1.3.sha256sum] = "8e60d3430d3a69478ad0993f19238d2df97c507009a52b3c10addcd7f6bcb916"
SRC_URI[async-broadcast-0.5.1.sha256sum] = "7c48ccdbf6ca6b121e0f586cbc0e73ae440e56c67c30fa0873b4e110d9c26d2b"
SRC_URI[async-channel-2.3.1.sha256sum] = "89b47800b0be77592da0afd425cc03468052844aff33b84e33cc696f64e77b6a"
SRC_URI[async-executor-1.13.1.sha256sum] = "30ca9a001c1e8ba5149f91a74362376cc6bc5b919d92d988668657bd570bdcec"
SRC_URI[async-fs-1.6.0.sha256sum] = "279cf904654eeebfa37ac9bb1598880884924aab82e290aa65c9e77a0e142e06"
SRC_URI[async-io-1.13.0.sha256sum] = "0fc5b45d93ef0529756f812ca52e44c221b35341892d3dcc34132ac02f3dd2af"
SRC_URI[async-io-2.3.4.sha256sum] = "444b0228950ee6501b3568d3c93bf1176a1fdbc3b758dcd9475046d30f4dc7e8"
SRC_URI[async-lock-2.8.0.sha256sum] = "287272293e9d8c41773cec55e365490fe034813a2f172f502d6ddcf75b2f582b"
SRC_URI[async-lock-3.4.0.sha256sum] = "ff6e472cdea888a4bd64f342f09b3f50e1886d32afe8df3d663c01140b811b18"
SRC_URI[async-process-1.8.1.sha256sum] = "ea6438ba0a08d81529c69b36700fa2f95837bfe3e776ab39cde9c14d9149da88"
SRC_URI[async-recursion-1.1.1.sha256sum] = "3b43422f69d8ff38f95f1b2bb76517c91589a924d1559a0e935d7c8ce0274c11"
SRC_URI[async-signal-0.2.10.sha256sum] = "637e00349800c0bdf8bfc21ebbc0b6524abea702b0da4168ac00d070d0c0b9f3"
SRC_URI[async-task-4.7.1.sha256sum] = "8b75356056920673b02621b35afd0f7dda9306d03c79a30f5c56c44cf256e3de"
SRC_URI[async-trait-0.1.83.sha256sum] = "721cae7de5c34fbb2acd27e21e6d2cf7b886dce0c27388d46c4e6c47ea4318dd"
SRC_URI[atomic-waker-1.1.2.sha256sum] = "1505bd5d3d116872e7271a6d4e16d81d0c8570876c8de68093a09ac269d8aac0"
SRC_URI[autocfg-1.4.0.sha256sum] = "ace50bade8e6234aa140d9a2f552bbee1db4d353f69b8217bc503490fc1a9f26"
SRC_URI[backtrace-0.3.71.sha256sum] = "26b05800d2e817c8b3b4b54abd461726265fa9789ae34330622f2db9ee696f9d"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[bitflags-2.6.0.sha256sum] = "b048fb63fd8b5923fc5aa7b340d8e156aec7ec02f0c78fa8a6ddc2613f6f71de"
SRC_URI[block-buffer-0.10.4.sha256sum] = "3078c7629b62d3f0439517fa394996acacc5cbc91c5a20d8c658e77abd503a71"
SRC_URI[blocking-1.6.1.sha256sum] = "703f41c54fc768e63e091340b424302bb1c29ef4aa0c7f10fe849dfb114d29ea"
SRC_URI[byteorder-1.5.0.sha256sum] = "1fd0f2584146f6f2ef48085050886acf353beff7305ebd1ae69500e27c67f64b"
SRC_URI[bytes-1.8.0.sha256sum] = "9ac0150caa2ae65ca5bd83f25c7de183dea78d4d366469f148435e2acfbad0da"
SRC_URI[cc-1.1.33.sha256sum] = "e3788d6ac30243803df38a3e9991cf37e41210232916d41a8222ae378f912624"
SRC_URI[cfg-if-1.0.0.sha256sum] = "baf1de4339761588bc0619e3cbc0120ee582ebb74b53b4efbf79117bd2da40fd"
SRC_URI[color-eyre-0.6.3.sha256sum] = "55146f5e46f237f7423d74111267d4597b59b0dad0ffaf7303bce9945d843ad5"
SRC_URI[color-spantrace-0.2.1.sha256sum] = "cd6be1b2a7e382e2b98b43b2adcca6bb0e465af0bdd38123873ae61eb17a72c2"
SRC_URI[concurrent-queue-2.5.0.sha256sum] = "4ca0197aee26d1ae37445ee532fefce43251d24cc7c166799f4d46817f1d3973"
SRC_URI[configparser-3.1.0.sha256sum] = "e57e3272f0190c3f1584272d613719ba5fc7df7f4942fe542e63d949cf3a649b"
SRC_URI[cpufeatures-0.2.14.sha256sum] = "608697df725056feaccfa42cffdaeeec3fccc4ffc38358ecd19b243e716a78e0"
SRC_URI[crossbeam-utils-0.8.20.sha256sum] = "22ec99545bb0ed0ea7bb9b8e1e9122ea386ff8a48c0922e43f36d45ab09e0e80"
SRC_URI[crypto-common-0.1.6.sha256sum] = "1bfb12502f3fc46cca1bb51ac28df9d618d813cdc3d2f25b9fe775a34af26bb3"
SRC_URI[derivative-2.2.0.sha256sum] = "fcc3dd5e9e9c0b295d6e1e4d811fb6f157d5ffd784b8d202fc62eac8035a770b"
SRC_URI[digest-0.10.7.sha256sum] = "9ed9a281f7bc9b7576e61468ba615a66a5c8cfdff42420a70aa82701a3b1e292"
SRC_URI[enumflags2-0.7.10.sha256sum] = "d232db7f5956f3f14313dc2f87985c58bd2c695ce124c8cdd984e08e15ac133d"
SRC_URI[enumflags2_derive-0.7.10.sha256sum] = "de0d48a183585823424a4ce1aa132d174a6a81bd540895822eb4c8373a8e49e8"
SRC_URI[env_logger-0.10.2.sha256sum] = "4cd405aab171cb85d6735e5c8d9db038c17d3ca007a4d2c25f337935c3d90580"
SRC_URI[equivalent-1.0.1.sha256sum] = "5443807d6dff69373d433ab9ef5378ad8df50ca6298caf15de6e52e24aaf54d5"
SRC_URI[errno-0.3.9.sha256sum] = "534c5cf6194dfab3db3242765c03bbe257cf92f22b38f6bc0c58d59108a820ba"
SRC_URI[event-listener-2.5.3.sha256sum] = "0206175f82b8d6bf6652ff7d71a1e27fd2e4efde587fd368662814d6ec1d9ce0"
SRC_URI[event-listener-3.1.0.sha256sum] = "d93877bcde0eb80ca09131a08d23f0a5c18a620b01db137dba666d18cd9b30c2"
SRC_URI[event-listener-5.3.1.sha256sum] = "6032be9bd27023a771701cc49f9f053c751055f71efb2e0ae5c15809093675ba"
SRC_URI[event-listener-strategy-0.5.2.sha256sum] = "0f214dc438f977e6d4e3500aaa277f5ad94ca83fbbd9b1a15713ce2344ccc5a1"
SRC_URI[eyre-0.6.12.sha256sum] = "7cd915d99f24784cdc19fd37ef22b97e3ff0ae756c7e492e9fbfe897d61e2aec"
SRC_URI[fastrand-1.9.0.sha256sum] = "e51093e27b0797c359783294ca4f0a911c270184cb10f85783b118614a1501be"
SRC_URI[fastrand-2.1.1.sha256sum] = "e8c02a5121d4ea3eb16a80748c74f5549a5665e4c21333c6098f283870fbdea6"
SRC_URI[futures-core-0.3.31.sha256sum] = "05f29059c0c2090612e8d742178b0580d2dc940c837851ad723096f87af6663e"
SRC_URI[futures-io-0.3.31.sha256sum] = "9e5c1b78ca4aae1ac06c48a526a655760685149f0d465d21f37abfe57ce075c6"
SRC_URI[futures-lite-1.13.0.sha256sum] = "49a9d51ce47660b1e808d3c990b4709f2f415d928835a17dfd16991515c46bce"
SRC_URI[futures-lite-2.4.0.sha256sum] = "3f1fa2f9765705486b33fd2acf1577f8ec449c2ba1f318ae5447697b7c08d210"
SRC_URI[futures-macro-0.3.31.sha256sum] = "162ee34ebcb7c64a8abebc059ce0fee27c2262618d7b60ed8faf72fef13c3650"
SRC_URI[futures-sink-0.3.31.sha256sum] = "e575fab7d1e0dcb8d0c7bcf9a63ee213816ab51902e6d244a95819acacf1d4f7"
SRC_URI[futures-task-0.3.31.sha256sum] = "f90f7dce0722e95104fcb095585910c0977252f286e354b5e3bd38902cd99988"
SRC_URI[futures-util-0.3.31.sha256sum] = "9fa08315bb612088cc391249efdc3bc77536f16c91f6cf495e6fbe85b20a4a81"
SRC_URI[generic-array-0.14.7.sha256sum] = "85649ca51fd72272d7821adaf274ad91c288277713d9c18820d8499a7ff69e9a"
SRC_URI[getrandom-0.2.15.sha256sum] = "c4567c8db10ae91089c99af84c68c38da3ec2f087c3f82960bcdbf3656b6f4d7"
SRC_URI[gimli-0.28.1.sha256sum] = "4271d37baee1b8c7e4b708028c57d816cf9d2434acb33a549475f78c181f6253"
SRC_URI[hashbrown-0.15.0.sha256sum] = "1e087f84d4f86bf4b218b927129862374b72199ae7d8657835f1e89000eea4fb"
SRC_URI[hermit-abi-0.3.9.sha256sum] = "d231dfb89cfffdbc30e7fc41579ed6066ad03abda9e567ccafae602b97ec5024"
SRC_URI[hermit-abi-0.4.0.sha256sum] = "fbf6a919d6cf397374f7dfeeea91d974c7c0a7221d0d0f4f20d859d329e53fcc"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[hostname-0.3.1.sha256sum] = "3c731c3e10504cc8ed35cfe2f1db4c9274c3d35fa486e3b31df46f068ef3e867"
SRC_URI[humantime-2.1.0.sha256sum] = "9a3a5bfb195931eeb336b2a7b4d761daec841b97f947d34394601737a7bba5e4"
SRC_URI[indenter-0.3.3.sha256sum] = "ce23b50ad8242c51a442f3ff322d56b02f08852c77e4c0b4d3fd684abc89c683"
SRC_URI[indexmap-2.6.0.sha256sum] = "707907fe3c25f5424cce2cb7e1cbcafee6bdbe735ca90ef77c29e84591e5b9da"
SRC_URI[instant-0.1.13.sha256sum] = "e0242819d153cba4b4b05a5a8f2a7e9bbf97b6055b2a002b395c96b5ff3c0222"
SRC_URI[io-lifetimes-1.0.11.sha256sum] = "eae7b9aee968036d54dce06cebaefd919e4472e753296daccd6d344e3e2df0c2"
SRC_URI[is-terminal-0.4.13.sha256sum] = "261f68e344040fbd0edea105bef17c66edf46f984ddb1115b775ce31be948f4b"
SRC_URI[itoa-1.0.11.sha256sum] = "49f1f14873335454500d59611f1cf4a4b0f786f9ac11f4312a78e4cf2566695b"
SRC_URI[lazy_static-1.5.0.sha256sum] = "bbd2bcb4c963f2ddae06a2efc7e9f3591312473c50c6685e1f298068316e66fe"
SRC_URI[libc-0.2.161.sha256sum] = "8e9489c2807c139ffd9c1794f4af0ebe86a828db53ecdc7fea2111d0fed085d1"
SRC_URI[linux-raw-sys-0.3.8.sha256sum] = "ef53942eb7bf7ff43a617b3e2c1c4a5ecf5944a7c1bc12d7ee39bbb15e5c1519"
SRC_URI[linux-raw-sys-0.4.14.sha256sum] = "78b3ae25bc7c8c38cec158d1f2757ee79e9b3740fbc7ccf0e59e4b08d793fa89"
SRC_URI[lock_api-0.4.12.sha256sum] = "07af8b9cdd281b7915f413fa73f29ebd5d55d0d3f0155584dade1ff18cea1b17"
SRC_URI[log-0.4.22.sha256sum] = "a7a70ba024b9dc04c27ea2f0c0548feb474ec5c54bba33a7f72f873a39d07b24"
SRC_URI[match_cfg-0.1.0.sha256sum] = "ffbee8634e0d45d258acb448e7eaab3fce7a0a467395d4d9f228e3c1f01fb2e4"
SRC_URI[memchr-2.7.4.sha256sum] = "78ca9ab1a0babb1e7d5695e3530886289c18cf2f87ec19a575a0abdce112e3a3"
SRC_URI[memoffset-0.7.1.sha256sum] = "5de893c32cde5f383baa4c04c5d6dbdd735cfd4a794b0debdb2bb1b421da5ff4"
SRC_URI[memoffset-0.9.1.sha256sum] = "488016bfae457b036d996092f6cb448677611ce4449e970ceaf42695203f218a"
SRC_URI[miniz_oxide-0.7.4.sha256sum] = "b8a240ddb74feaf34a79a7add65a741f3167852fba007066dcac1ca548d89c08"
SRC_URI[mio-1.0.2.sha256sum] = "80e04d1dcff3aae0704555fe5fee3bcfaf3d1fdf8a7e521d5b9d2b42acb52cec"
SRC_URI[nix-0.26.4.sha256sum] = "598beaf3cc6fdd9a5dfb1630c2800c7acd31df7aaf0f565796fba2b53ca1af1b"
SRC_URI[object-0.32.2.sha256sum] = "a6a622008b6e321afc04970976f62ee297fdbaa6f95318ca343e3eebb9648441"
SRC_URI[once_cell-1.20.2.sha256sum] = "1261fe7e33c73b354eab43b1273a57c8f967d0391e80353e51f764ac02cf6775"
SRC_URI[ordered-stream-0.2.0.sha256sum] = "9aa2b01e1d916879f73a53d01d1d6cee68adbb31d6d9177a8cfce093cced1d50"
SRC_URI[owo-colors-3.5.0.sha256sum] = "c1b04fb49957986fdce4d6ee7a65027d55d4b6d2265e5848bbb507b58ccfdb6f"
SRC_URI[parking-2.2.1.sha256sum] = "f38d5652c16fde515bb1ecef450ab0f6a219d619a7274976324d5e377f7dceba"
SRC_URI[parking_lot-0.12.3.sha256sum] = "f1bf18183cf54e8d6059647fc3063646a1801cf30896933ec2311622cc4b9a27"
SRC_URI[parking_lot_core-0.9.10.sha256sum] = "1e401f977ab385c9e4e3ab30627d6f26d00e2c73eef317493c4ec6d468726cf8"
SRC_URI[pin-project-lite-0.2.15.sha256sum] = "915a1e146535de9163f3987b8944ed8cf49a18bb0056bcebcdcece385cece4ff"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[piper-0.2.4.sha256sum] = "96c8c490f422ef9a4efd2cb5b42b76c8613d7e7dfc1caf667b8a3350a5acc066"
SRC_URI[polling-2.8.0.sha256sum] = "4b2d323e8ca7996b3e23126511a523f7e62924d93ecd5ae73b333815b0eb3dce"
SRC_URI[polling-3.7.3.sha256sum] = "cc2790cd301dec6cd3b7a025e4815cf825724a51c98dccfe6a3e55f05ffb6511"
SRC_URI[ppv-lite86-0.2.20.sha256sum] = "77957b295656769bb8ad2b6a6b09d897d94f05c41b069aede1fcdaa675eaea04"
SRC_URI[proc-macro-crate-1.3.1.sha256sum] = "7f4c021e1093a56626774e81216a4ce732a735e5bad4868a03f3ed65ca0c3919"
SRC_URI[proc-macro2-1.0.89.sha256sum] = "f139b0662de085916d1fb67d2b4169d1addddda1919e696f3252b740b629986e"
SRC_URI[quote-1.0.37.sha256sum] = "b5b9d34b8991d19d98081b46eacdd8eb58c6f2b201139f7c5f643cc155a633af"
SRC_URI[rand-0.8.5.sha256sum] = "34af8d1a0e25924bc5b7c43c079c942339d8f0a8b57c39049bef581b46327404"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[redox_syscall-0.5.7.sha256sum] = "9b6dfecf2c74bce2466cabf93f6664d6998a69eb21e39f4207930065b27b771f"
SRC_URI[regex-1.11.1.sha256sum] = "b544ef1b4eac5dc2db33ea63606ae9ffcfac26c1416a2806ae0bf5f56b201191"
SRC_URI[regex-automata-0.4.8.sha256sum] = "368758f23274712b504848e9d5a6f010445cc8b87a7cdb4d7cbee666c1288da3"
SRC_URI[regex-syntax-0.8.5.sha256sum] = "2b15c43186be67a4fd63bee50d0303afffcef381492ebe2c5d87f324e1b8815c"
SRC_URI[rustc-demangle-0.1.24.sha256sum] = "719b953e2095829ee67db738b3bfa9fa368c94900df327b3f07fe6e794d2fe1f"
SRC_URI[rustix-0.37.27.sha256sum] = "fea8ca367a3a01fe35e6943c400addf443c0f57670e6ec51196f71a4b8762dd2"
SRC_URI[rustix-0.38.38.sha256sum] = "aa260229e6538e52293eeb577aabd09945a09d6d9cc0fc550ed7529056c2e32a"
SRC_URI[ryu-1.0.18.sha256sum] = "f3cb5ba0dc43242ce17de99c180e96db90b235b8a9fdc9543c96d2209116bd9f"
SRC_URI[scopeguard-1.2.0.sha256sum] = "94143f37725109f92c262ed2cf5e59bce7498c01bcc1502d7b9afe439a4e9f49"
SRC_URI[serde-1.0.214.sha256sum] = "f55c3193aca71c12ad7890f1785d2b73e1b9f63a0bbc353c08ef26fe03fc56b5"
SRC_URI[serde_derive-1.0.214.sha256sum] = "de523f781f095e28fa605cdce0f8307e451cc0fd14e2eb4cd2e98a355b147766"
SRC_URI[serde_json-1.0.132.sha256sum] = "d726bfaff4b320266d395898905d0eba0345aae23b54aee3a737e260fd46db03"
SRC_URI[serde_repr-0.1.19.sha256sum] = "6c64451ba24fc7a6a2d60fc75dd9c83c90903b19028d4eff35e88fc1e86564e9"
SRC_URI[serde_spanned-0.6.8.sha256sum] = "87607cb1398ed59d48732e575a4c28a7a8ebf2454b964fe3f224f2afc07909e1"
SRC_URI[sha1-0.10.6.sha256sum] = "e3bf829a2d51ab4a5ddf1352d8470c140cadc8301b2ae1789db023f01cedd6ba"
SRC_URI[sharded-slab-0.1.7.sha256sum] = "f40ca3c46823713e0d4209592e8d6e826aa57e928f09752619fc696c499637f6"
SRC_URI[shlex-1.3.0.sha256sum] = "0fda2ff0d084019ba4d7c6f371c95d8fd75ce3524c3cb8fb653a3023f6323e64"
SRC_URI[signal-hook-registry-1.4.2.sha256sum] = "a9e9e0b4211b72e7b8b6e85c807d36c212bdb33ea8587f7569562a84df5465b1"
SRC_URI[slab-0.4.9.sha256sum] = "8f92a496fb766b417c996b9c5e57daf2f7ad3b0bebe1ccfca4856390e3d3bb67"
SRC_URI[smallvec-1.13.2.sha256sum] = "3c5e1a9a646d36c3599cd173a41282daf47c44583ad367b8e6837255952e5c67"
SRC_URI[socket2-0.4.10.sha256sum] = "9f7916fc008ca5542385b89a3d3ce689953c143e9304a9bf8beec1de48994c0d"
SRC_URI[socket2-0.5.7.sha256sum] = "ce305eb0b4296696835b71df73eb912e0f1ffd2556a501fcede6e0c50349191c"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[syn-1.0.109.sha256sum] = "72b64191b275b66ffe2469e8af2c1cfe3bafa67b529ead792a6d0160888b4237"
SRC_URI[syn-2.0.86.sha256sum] = "e89275301d38033efb81a6e60e3497e734dfcc62571f2854bf4b16690398824c"
SRC_URI[tempfile-3.13.0.sha256sum] = "f0f2c9fc62d0beef6951ccffd757e241266a2c833136efbe35af6cd2567dca5b"
SRC_URI[termcolor-1.4.1.sha256sum] = "06794f8f6c5c898b3275aebefa6b8a1cb24cd2c6c79397ab15774837a0bc5755"
SRC_URI[thiserror-1.0.66.sha256sum] = "5d171f59dbaa811dbbb1aee1e73db92ec2b122911a48e1390dfe327a821ddede"
SRC_URI[thiserror-impl-1.0.66.sha256sum] = "b08be0f17bd307950653ce45db00cd31200d82b624b36e181337d9c7d92765b5"
SRC_URI[thread_local-1.1.8.sha256sum] = "8b9ef9bad013ada3808854ceac7b46812a6465ba368859a37e2100283d2d719c"
SRC_URI[tokio-1.41.0.sha256sum] = "145f3413504347a2be84393cc8a7d2fb4d863b375909ea59f2158261aa258bbb"
SRC_URI[tokio-macros-2.4.0.sha256sum] = "693d596312e88961bc67d7f1f97af8a70227d9f90c31bba5806eec004978d752"
SRC_URI[tokio-util-0.7.12.sha256sum] = "61e7c3654c13bcd040d4a03abee2c75b1d14a37b423cf5a813ceae1cc903ec6a"
SRC_URI[toml-0.8.19.sha256sum] = "a1ed1f98e3fdc28d6d910e6737ae6ab1a93bf1985935a1193e68f93eeb68d24e"
SRC_URI[toml_datetime-0.6.8.sha256sum] = "0dd7358ecb8fc2f8d014bf86f6f638ce72ba252a2c3a2572f2a795f1d23efb41"
SRC_URI[toml_edit-0.19.15.sha256sum] = "1b5bb770da30e5cbfde35a2d7b9b8a2c4b8ef89548a7a6aeab5c9a576e3e7421"
SRC_URI[toml_edit-0.22.22.sha256sum] = "4ae48d6208a266e853d946088ed816055e556cc6028c5e8e2b84d9fa5dd7c7f5"
SRC_URI[tracing-0.1.40.sha256sum] = "c3523ab5a71916ccf420eebdf5521fcef02141234bbc0b8a49f2fdc4544364ef"
SRC_URI[tracing-attributes-0.1.27.sha256sum] = "34704c8d6ebcbc939824180af020566b01a7c01f80641264eba0999f6c2b6be7"
SRC_URI[tracing-core-0.1.32.sha256sum] = "c06d3da6113f116aaee68e4d601191614c9053067f9ab7f6edbcb161237daa54"
SRC_URI[tracing-error-0.2.0.sha256sum] = "d686ec1c0f384b1277f097b2f279a2ecc11afe8c133c1aabf036a27cb4cd206e"
SRC_URI[tracing-subscriber-0.3.18.sha256sum] = "ad0f048c97dbd9faa9b7df56362b8ebcaa52adb06b498c050d2f4e32f90a7a8b"
SRC_URI[typenum-1.17.0.sha256sum] = "42ff0bf0c66b8238c6f3b578df37d0b7848e55df8577b3f74f92a69acceeb825"
SRC_URI[uds_windows-1.1.0.sha256sum] = "89daebc3e6fd160ac4aa9fc8b3bf71e1f74fbf92367ae71fb83a037e8bf164b9"
SRC_URI[unicode-ident-1.0.13.sha256sum] = "e91b56cd4cadaeb79bbf1a5645f6b4f8dc5bde8834ad5894a8db35fda9efa1fe"
SRC_URI[valuable-0.1.0.sha256sum] = "830b7e5d4d90034032940e4ace0d9a9a057e7a45cd94e6c007832e39edb82f6d"
SRC_URI[version_check-0.9.5.sha256sum] = "0b928f33d975fc6ad9f86c8f283853ad26bdd5b10b7f1542aa2fa15e2289105a"
SRC_URI[waker-fn-1.2.0.sha256sum] = "317211a0dc0ceedd78fb2ca9a44aed3d7b9b26f81870d485c07122b4350673b7"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[winapi-0.3.9.sha256sum] = "5c839a674fcd7a98952e593242ea400abe93992746761e38641405d28b00f419"
SRC_URI[winapi-i686-pc-windows-gnu-0.4.0.sha256sum] = "ac3b87c63620426dd9b991e5ce0329eff545bccbbb34f3be09ff6fb6ab51b7b6"
SRC_URI[winapi-util-0.1.9.sha256sum] = "cf221c93e13a30d793f7645a0e7762c55d169dbb0a49671918a2319d289b10bb"
SRC_URI[winapi-x86_64-pc-windows-gnu-0.4.0.sha256sum] = "712e227841d057c1ee1cd2fb22fa7e5a5461ae8e48fa2ca79ec42cfc1931183f"
SRC_URI[windows-sys-0.48.0.sha256sum] = "677d2418bec65e3338edb076e806bc1ec15693c5d0104683f2efe857f61056a9"
SRC_URI[windows-sys-0.52.0.sha256sum] = "282be5f36a8ce781fad8c8ae18fa3f9beff57ec1b52cb3de0789201425d9a33d"
SRC_URI[windows-sys-0.59.0.sha256sum] = "1e38bc4d79ed67fd075bcc251a1c39b32a1776bbe92e5bef1f0bf1f8c531853b"
SRC_URI[windows-targets-0.48.5.sha256sum] = "9a2fa6e2155d7247be68c096456083145c183cbbbc2764150dda45a87197940c"
SRC_URI[windows-targets-0.52.6.sha256sum] = "9b724f72796e036ab90c1021d4780d4d3d648aca59e491e6b98e725b84e99973"
SRC_URI[windows_aarch64_gnullvm-0.48.5.sha256sum] = "2b38e32f0abccf9987a4e3079dfb67dcd799fb61361e53e2882c3cbaf0d905d8"
SRC_URI[windows_aarch64_gnullvm-0.52.6.sha256sum] = "32a4622180e7a0ec044bb555404c800bc9fd9ec262ec147edd5989ccd0c02cd3"
SRC_URI[windows_aarch64_msvc-0.48.5.sha256sum] = "dc35310971f3b2dbbf3f0690a219f40e2d9afcf64f9ab7cc1be722937c26b4bc"
SRC_URI[windows_aarch64_msvc-0.52.6.sha256sum] = "09ec2a7bb152e2252b53fa7803150007879548bc709c039df7627cabbd05d469"
SRC_URI[windows_i686_gnu-0.48.5.sha256sum] = "a75915e7def60c94dcef72200b9a8e58e5091744960da64ec734a6c6e9b3743e"
SRC_URI[windows_i686_gnu-0.52.6.sha256sum] = "8e9b5ad5ab802e97eb8e295ac6720e509ee4c243f69d781394014ebfe8bbfa0b"
SRC_URI[windows_i686_gnullvm-0.52.6.sha256sum] = "0eee52d38c090b3caa76c563b86c3a4bd71ef1a819287c19d586d7334ae8ed66"
SRC_URI[windows_i686_msvc-0.48.5.sha256sum] = "8f55c233f70c4b27f66c523580f78f1004e8b5a8b659e05a4eb49d4166cca406"
SRC_URI[windows_i686_msvc-0.52.6.sha256sum] = "240948bc05c5e7c6dabba28bf89d89ffce3e303022809e73deaefe4f6ec56c66"
SRC_URI[windows_x86_64_gnu-0.48.5.sha256sum] = "53d40abd2583d23e4718fddf1ebec84dbff8381c07cae67ff7768bbf19c6718e"
SRC_URI[windows_x86_64_gnu-0.52.6.sha256sum] = "147a5c80aabfbf0c7d901cb5895d1de30ef2907eb21fbbab29ca94c5b08b1a78"
SRC_URI[windows_x86_64_gnullvm-0.48.5.sha256sum] = "0b7b52767868a23d5bab768e390dc5f5c55825b6d30b86c844ff2dc7414044cc"
SRC_URI[windows_x86_64_gnullvm-0.52.6.sha256sum] = "24d5b23dc417412679681396f2b49f3de8c1473deb516bd34410872eff51ed0d"
SRC_URI[windows_x86_64_msvc-0.48.5.sha256sum] = "ed94fce61571a4006852b7389a063ab983c02eb1bb37b47f8272ce92d06d9538"
SRC_URI[windows_x86_64_msvc-0.52.6.sha256sum] = "589f6da84c646204747d1270a2a5661ea66ed1cced2631d546fdfb155959f9ec"
SRC_URI[winnow-0.5.40.sha256sum] = "f593a95398737aeed53e489c785df13f3618e41dbcd6718c6addbf1395aa6876"
SRC_URI[winnow-0.6.20.sha256sum] = "36c1fec1a2bb5866f07c25f68c26e565c4c200aebb96d7e55710c19d3e8ac49b"
SRC_URI[xdg-home-1.3.0.sha256sum] = "ec1cdab258fb55c0da61328dc52c8764709b249011b2cad0454c72f0bf10a1f6"
SRC_URI[zbus-3.15.2.sha256sum] = "675d170b632a6ad49804c8cf2105d7c31eddd3312555cffd4b740e08e97c25e6"
SRC_URI[zbus_macros-3.15.2.sha256sum] = "7131497b0f887e8061b430c530240063d33bf9455fa34438f388a245da69e0a5"
SRC_URI[zbus_names-2.6.1.sha256sum] = "437d738d3750bed6ca9b8d423ccc7a8eb284f6b1d6d4e225a0e4e6258d864c8d"
SRC_URI[zerocopy-0.7.35.sha256sum] = "1b9b4fd18abc82b8136838da5d50bae7bdea537c574d8dc1a34ed098d6c166f0"
SRC_URI[zerocopy-derive-0.7.35.sha256sum] = "fa4f8080344d4671fb4e831a13ad1e68092748387dfc4f55e356242fae12ce3e"
SRC_URI[zvariant-3.15.2.sha256sum] = "4eef2be88ba09b358d3b58aca6e41cd853631d44787f319a1383ca83424fb2db"
SRC_URI[zvariant_derive-3.15.2.sha256sum] = "37c24dc0bed72f5f90d1f8bb5b07228cbf63b3c6e9f82d82559d4bae666e7ed9"
SRC_URI[zvariant_utils-1.0.1.sha256sum] = "7234f0d811589db492d16893e3f21e8e2fd282e6d01b0cddee310322062cc200"
