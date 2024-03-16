SRC_URI += "\
            crate://crates.io/addr2line/0.17.0 \
            crate://crates.io/adler/1.0.2 \
            crate://crates.io/aho-corasick/0.7.20 \
            crate://crates.io/android_system_properties/0.1.5 \
            crate://crates.io/async-broadcast/0.5.0 \
            crate://crates.io/async-executor/1.5.0 \
            crate://crates.io/async-io/1.12.0 \
            crate://crates.io/async-lock/2.6.0 \
            crate://crates.io/async-recursion/1.0.2 \
            crate://crates.io/async-task/4.3.0 \
            crate://crates.io/async-trait/0.1.64 \
            crate://crates.io/autocfg/1.1.0 \
            crate://crates.io/backtrace/0.3.66 \
            crate://crates.io/bitflags/1.3.2 \
            crate://crates.io/block-buffer/0.10.3 \
            crate://crates.io/build-env/0.3.1 \
            crate://crates.io/bumpalo/3.11.1 \
            crate://crates.io/byteorder/1.4.3 \
            crate://crates.io/cc/1.0.77 \
            crate://crates.io/cfg-if/1.0.0 \
            crate://crates.io/chrono/0.4.23 \
            crate://crates.io/clap/4.0.29 \
            crate://crates.io/clap_derive/4.0.21 \
            crate://crates.io/clap_lex/0.3.0 \
            crate://crates.io/codespan-reporting/0.11.1 \
            crate://crates.io/color-eyre/0.6.2 \
            crate://crates.io/color-spantrace/0.2.0 \
            crate://crates.io/concurrent-queue/2.1.0 \
            crate://crates.io/core-foundation-sys/0.8.3 \
            crate://crates.io/cpufeatures/0.2.5 \
            crate://crates.io/crossbeam-utils/0.8.14 \
            crate://crates.io/crypto-common/0.1.6 \
            crate://crates.io/cstr-argument/0.1.2 \
            crate://crates.io/cxx-build/1.0.83 \
            crate://crates.io/cxx/1.0.83 \
            crate://crates.io/cxxbridge-flags/1.0.83 \
            crate://crates.io/cxxbridge-macro/1.0.83 \
            crate://crates.io/derivative/2.2.0 \
            crate://crates.io/digest/0.10.6 \
            crate://crates.io/dirs-sys/0.3.7 \
            crate://crates.io/dirs/4.0.0 \
            crate://crates.io/enumflags2/0.7.5 \
            crate://crates.io/enumflags2_derive/0.7.4 \
            crate://crates.io/env_logger/0.10.0 \
            crate://crates.io/epoll/4.3.1 \
            crate://crates.io/errno-dragonfly/0.1.2 \
            crate://crates.io/errno/0.2.8 \
            crate://crates.io/event-listener/2.5.3 \
            crate://crates.io/eyre/0.6.8 \
            crate://crates.io/fastrand/1.8.0 \
            crate://crates.io/foreign-types-macros/0.2.2 \
            crate://crates.io/foreign-types-shared/0.3.1 \
            crate://crates.io/foreign-types/0.5.0 \
            crate://crates.io/futures-core/0.3.26 \
            crate://crates.io/futures-io/0.3.26 \
            crate://crates.io/futures-lite/1.12.0 \
            crate://crates.io/futures-sink/0.3.26 \
            crate://crates.io/futures-task/0.3.26 \
            crate://crates.io/futures-util/0.3.26 \
            crate://crates.io/generic-array/0.14.6 \
            crate://crates.io/getrandom/0.2.8 \
            crate://crates.io/gimli/0.26.2 \
            crate://crates.io/hashbrown/0.12.3 \
            crate://crates.io/heck/0.4.0 \
            crate://crates.io/hermit-abi/0.2.6 \
            crate://crates.io/hex/0.4.3 \
            crate://crates.io/humantime/2.1.0 \
            crate://crates.io/iana-time-zone-haiku/0.1.1 \
            crate://crates.io/iana-time-zone/0.1.53 \
            crate://crates.io/indenter/0.3.3 \
            crate://crates.io/indexmap/1.9.2 \
            crate://crates.io/instant/0.1.12 \
            crate://crates.io/io-lifetimes/1.0.3 \
            crate://crates.io/is-terminal/0.4.1 \
            crate://crates.io/js-sys/0.3.60 \
            crate://crates.io/lazy_static/1.4.0 \
            crate://crates.io/libc/0.2.138 \
            crate://crates.io/libsystemd-sys/0.9.3 \
            crate://crates.io/link-cplusplus/1.0.7 \
            crate://crates.io/linux-raw-sys/0.1.3 \
            crate://crates.io/lock_api/0.4.9 \
            crate://crates.io/log/0.4.17 \
            crate://crates.io/memchr/2.5.0 \
            crate://crates.io/memoffset/0.6.5 \
            crate://crates.io/miniz_oxide/0.5.4 \
            crate://crates.io/nix/0.25.1 \
            crate://crates.io/nom8/0.2.0 \
            crate://crates.io/num-integer/0.1.45 \
            crate://crates.io/num-traits/0.2.15 \
            crate://crates.io/object/0.29.0 \
            crate://crates.io/once_cell/1.16.0 \
            crate://crates.io/ordered-stream/0.1.4 \
            crate://crates.io/os_str_bytes/6.4.1 \
            crate://crates.io/owo-colors/3.5.0 \
            crate://crates.io/parking/2.0.0 \
            crate://crates.io/parking_lot/0.12.1 \
            crate://crates.io/parking_lot_core/0.9.6 \
            crate://crates.io/paste/1.0.9 \
            crate://crates.io/pin-project-lite/0.2.9 \
            crate://crates.io/pin-utils/0.1.0 \
            crate://crates.io/pkg-config/0.3.26 \
            crate://crates.io/polling/2.5.2 \
            crate://crates.io/ppv-lite86/0.2.17 \
            crate://crates.io/proc-macro-crate/1.3.0 \
            crate://crates.io/proc-macro-error-attr/1.0.4 \
            crate://crates.io/proc-macro-error/1.0.4 \
            crate://crates.io/proc-macro2/1.0.47 \
            crate://crates.io/quote/1.0.21 \
            crate://crates.io/rand/0.8.5 \
            crate://crates.io/rand_chacha/0.3.1 \
            crate://crates.io/rand_core/0.6.4 \
            crate://crates.io/redox_syscall/0.2.16 \
            crate://crates.io/redox_users/0.4.3 \
            crate://crates.io/regex-syntax/0.6.28 \
            crate://crates.io/regex/1.7.0 \
            crate://crates.io/remove_dir_all/0.5.3 \
            crate://crates.io/rmp-serde/1.1.1 \
            crate://crates.io/rmp/0.8.11 \
            crate://crates.io/rustc-demangle/0.1.21 \
            crate://crates.io/rustix/0.36.4 \
            crate://crates.io/scopeguard/1.1.0 \
            crate://crates.io/scratch/1.0.2 \
            crate://crates.io/serde/1.0.149 \
            crate://crates.io/serde_derive/1.0.149 \
            crate://crates.io/serde_repr/0.1.10 \
            crate://crates.io/sha1/0.10.5 \
            crate://crates.io/sharded-slab/0.1.4 \
            crate://crates.io/slab/0.4.7 \
            crate://crates.io/smallvec/1.10.0 \
            crate://crates.io/socket2/0.4.7 \
            crate://crates.io/static_assertions/1.1.0 \
            crate://crates.io/strsim/0.10.0 \
            crate://crates.io/syn/1.0.105 \
            crate://crates.io/systemd/0.10.0 \
            crate://crates.io/tempfile/3.3.0 \
            crate://crates.io/termcolor/1.1.3 \
            crate://crates.io/thiserror-impl/1.0.38 \
            crate://crates.io/thiserror/1.0.38 \
            crate://crates.io/thread_local/1.1.4 \
            crate://crates.io/time/0.1.45 \
            crate://crates.io/toml_datetime/0.5.1 \
            crate://crates.io/toml_edit/0.18.1 \
            crate://crates.io/tracing-attributes/0.1.23 \
            crate://crates.io/tracing-core/0.1.30 \
            crate://crates.io/tracing-error/0.2.0 \
            crate://crates.io/tracing-subscriber/0.3.16 \
            crate://crates.io/tracing/0.1.37 \
            crate://crates.io/typenum/1.16.0 \
            crate://crates.io/uds_windows/1.0.2 \
            crate://crates.io/unicode-ident/1.0.5 \
            crate://crates.io/unicode-width/0.1.10 \
            crate://crates.io/utf8-cstr/0.1.6 \
            crate://crates.io/valuable/0.1.0 \
            crate://crates.io/version_check/0.9.4 \
            crate://crates.io/waker-fn/1.1.0 \
            crate://crates.io/wasi/0.10.0+wasi-snapshot-preview1 \
            crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
            crate://crates.io/wasm-bindgen-backend/0.2.83 \
            crate://crates.io/wasm-bindgen-macro-support/0.2.83 \
            crate://crates.io/wasm-bindgen-macro/0.2.83 \
            crate://crates.io/wasm-bindgen-shared/0.2.83 \
            crate://crates.io/wasm-bindgen/0.2.83 \
            crate://crates.io/wepoll-ffi/0.1.2 \
            crate://crates.io/winapi-i686-pc-windows-gnu/0.4.0 \
            crate://crates.io/winapi-util/0.1.5 \
            crate://crates.io/winapi-x86_64-pc-windows-gnu/0.4.0 \
            crate://crates.io/winapi/0.3.9 \
            crate://crates.io/windows-sys/0.42.0 \
            crate://crates.io/windows_aarch64_gnullvm/0.42.0 \
            crate://crates.io/windows_aarch64_msvc/0.42.0 \
            crate://crates.io/windows_i686_gnu/0.42.0 \
            crate://crates.io/windows_i686_msvc/0.42.0 \
            crate://crates.io/windows_x86_64_gnu/0.42.0 \
            crate://crates.io/windows_x86_64_gnullvm/0.42.0 \
            crate://crates.io/windows_x86_64_msvc/0.42.0 \
            crate://crates.io/zbus/3.9.0 \
            crate://crates.io/zbus_macros/3.9.0 \
            crate://crates.io/zbus_names/2.5.0 \
            crate://crates.io/zvariant/3.10.0 \
            crate://crates.io/zvariant_derive/3.10.0 \
           "

SRC_URI[addr2line-0.17.0.sha256sum] = "b9ecd88a8c8378ca913a680cd98f0f13ac67383d35993f86c90a70e3f137816b"
SRC_URI[adler-1.0.2.sha256sum] = "f26201604c87b1e01bd3d98f8d5d9a8fcbb815e8cedb41ffccbeb4bf593a35fe"
SRC_URI[aho-corasick-0.7.20.sha256sum] = "cc936419f96fa211c1b9166887b38e5e40b19958e5b895be7c1f93adec7071ac"
SRC_URI[android_system_properties-0.1.5.sha256sum] = "819e7219dbd41043ac279b19830f2efc897156490d7fd6ea916720117ee66311"
SRC_URI[async-broadcast-0.5.0.sha256sum] = "1b19760fa2b7301cf235360ffd6d3558b1ed4249edd16d6cca8d690cee265b95"
SRC_URI[async-executor-1.5.0.sha256sum] = "17adb73da160dfb475c183343c8cccd80721ea5a605d3eb57125f0a7b7a92d0b"
SRC_URI[async-io-1.12.0.sha256sum] = "8c374dda1ed3e7d8f0d9ba58715f924862c63eae6849c92d3a18e7fbde9e2794"
SRC_URI[async-lock-2.6.0.sha256sum] = "c8101efe8695a6c17e02911402145357e718ac92d3ff88ae8419e84b1707b685"
SRC_URI[async-recursion-1.0.2.sha256sum] = "3b015a331cc64ebd1774ba119538573603427eaace0a1950c423ab971f903796"
SRC_URI[async-task-4.3.0.sha256sum] = "7a40729d2133846d9ed0ea60a8b9541bccddab49cd30f0715a1da672fe9a2524"
SRC_URI[async-trait-0.1.64.sha256sum] = "1cd7fce9ba8c3c042128ce72d8b2ddbf3a05747efb67ea0313c635e10bda47a2"
SRC_URI[autocfg-1.1.0.sha256sum] = "d468802bab17cbc0cc575e9b053f41e72aa36bfa6b7f55e3529ffa43161b97fa"
SRC_URI[backtrace-0.3.66.sha256sum] = "cab84319d616cfb654d03394f38ab7e6f0919e181b1b57e1fd15e7fb4077d9a7"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[block-buffer-0.10.3.sha256sum] = "69cce20737498f97b993470a6e536b8523f0af7892a4f928cceb1ac5e52ebe7e"
SRC_URI[build-env-0.3.1.sha256sum] = "1522ac6ee801a11bf9ef3f80403f4ede6eb41291fac3dde3de09989679305f25"
SRC_URI[bumpalo-3.11.1.sha256sum] = "572f695136211188308f16ad2ca5c851a712c464060ae6974944458eb83880ba"
SRC_URI[byteorder-1.4.3.sha256sum] = "14c189c53d098945499cdfa7ecc63567cf3886b3332b312a5b4585d8d3a6a610"
SRC_URI[cc-1.0.77.sha256sum] = "e9f73505338f7d905b19d18738976aae232eb46b8efc15554ffc56deb5d9ebe4"
SRC_URI[cfg-if-1.0.0.sha256sum] = "baf1de4339761588bc0619e3cbc0120ee582ebb74b53b4efbf79117bd2da40fd"
SRC_URI[chrono-0.4.23.sha256sum] = "16b0a3d9ed01224b22057780a37bb8c5dbfe1be8ba48678e7bf57ec4b385411f"
SRC_URI[clap-4.0.29.sha256sum] = "4d63b9e9c07271b9957ad22c173bae2a4d9a81127680962039296abcd2f8251d"
SRC_URI[clap_derive-4.0.21.sha256sum] = "0177313f9f02afc995627906bbd8967e2be069f5261954222dac78290c2b9014"
SRC_URI[clap_lex-0.3.0.sha256sum] = "0d4198f73e42b4936b35b5bb248d81d2b595ecb170da0bac7655c54eedfa8da8"
SRC_URI[codespan-reporting-0.11.1.sha256sum] = "3538270d33cc669650c4b093848450d380def10c331d38c768e34cac80576e6e"
SRC_URI[color-eyre-0.6.2.sha256sum] = "5a667583cca8c4f8436db8de46ea8233c42a7d9ae424a82d338f2e4675229204"
SRC_URI[color-spantrace-0.2.0.sha256sum] = "1ba75b3d9449ecdccb27ecbc479fdc0b87fa2dd43d2f8298f9bf0e59aacc8dce"
SRC_URI[concurrent-queue-2.1.0.sha256sum] = "c278839b831783b70278b14df4d45e1beb1aad306c07bb796637de9a0e323e8e"
SRC_URI[core-foundation-sys-0.8.3.sha256sum] = "5827cebf4670468b8772dd191856768aedcb1b0278a04f989f7766351917b9dc"
SRC_URI[cpufeatures-0.2.5.sha256sum] = "28d997bd5e24a5928dd43e46dc529867e207907fe0b239c3477d924f7f2ca320"
SRC_URI[crossbeam-utils-0.8.14.sha256sum] = "4fb766fa798726286dbbb842f174001dab8abc7b627a1dd86e0b7222a95d929f"
SRC_URI[crypto-common-0.1.6.sha256sum] = "1bfb12502f3fc46cca1bb51ac28df9d618d813cdc3d2f25b9fe775a34af26bb3"
SRC_URI[cstr-argument-0.1.2.sha256sum] = "b6bd9c8e659a473bce955ae5c35b116af38af11a7acb0b480e01f3ed348aeb40"
SRC_URI[cxx-build-1.0.83.sha256sum] = "d2eb5b96ecdc99f72657332953d4d9c50135af1bac34277801cc3937906ebd39"
SRC_URI[cxx-1.0.83.sha256sum] = "bdf07d07d6531bfcdbe9b8b739b104610c6508dcc4d63b410585faf338241daf"
SRC_URI[cxxbridge-flags-1.0.83.sha256sum] = "ac040a39517fd1674e0f32177648334b0f4074625b5588a64519804ba0553b12"
SRC_URI[cxxbridge-macro-1.0.83.sha256sum] = "1362b0ddcfc4eb0a1f57b68bd77dd99f0e826958a96abd0ae9bd092e114ffed6"
SRC_URI[derivative-2.2.0.sha256sum] = "fcc3dd5e9e9c0b295d6e1e4d811fb6f157d5ffd784b8d202fc62eac8035a770b"
SRC_URI[digest-0.10.6.sha256sum] = "8168378f4e5023e7218c89c891c0fd8ecdb5e5e4f18cb78f38cf245dd021e76f"
SRC_URI[dirs-sys-0.3.7.sha256sum] = "1b1d1d91c932ef41c0f2663aa8b0ca0342d444d842c06914aa0a7e352d0bada6"
SRC_URI[dirs-4.0.0.sha256sum] = "ca3aa72a6f96ea37bbc5aa912f6788242832f75369bdfdadcb0e38423f100059"
SRC_URI[enumflags2-0.7.5.sha256sum] = "e75d4cd21b95383444831539909fbb14b9dc3fdceb2a6f5d36577329a1f55ccb"
SRC_URI[enumflags2_derive-0.7.4.sha256sum] = "f58dc3c5e468259f19f2d46304a6b28f1c3d034442e14b322d2b850e36f6d5ae"
SRC_URI[env_logger-0.10.0.sha256sum] = "85cdab6a89accf66733ad5a1693a4dcced6aeff64602b634530dd73c1f3ee9f0"
SRC_URI[epoll-4.3.1.sha256sum] = "20df693c700404f7e19d4d6fae6b15215d2913c27955d2b9d6f2c0f537511cd0"
SRC_URI[errno-dragonfly-0.1.2.sha256sum] = "aa68f1b12764fab894d2755d2518754e71b4fd80ecfb822714a1206c2aab39bf"
SRC_URI[errno-0.2.8.sha256sum] = "f639046355ee4f37944e44f60642c6f3a7efa3cf6b78c78a0d989a8ce6c396a1"
SRC_URI[event-listener-2.5.3.sha256sum] = "0206175f82b8d6bf6652ff7d71a1e27fd2e4efde587fd368662814d6ec1d9ce0"
SRC_URI[eyre-0.6.8.sha256sum] = "4c2b6b5a29c02cdc822728b7d7b8ae1bab3e3b05d44522770ddd49722eeac7eb"
SRC_URI[fastrand-1.8.0.sha256sum] = "a7a407cfaa3385c4ae6b23e84623d48c2798d06e3e6a1878f7f59f17b3f86499"
SRC_URI[foreign-types-macros-0.2.2.sha256sum] = "c8469d0d40519bc608ec6863f1cc88f3f1deee15913f2f3b3e573d81ed38cccc"
SRC_URI[foreign-types-shared-0.3.1.sha256sum] = "aa9a19cbb55df58761df49b23516a86d432839add4af60fc256da840f66ed35b"
SRC_URI[foreign-types-0.5.0.sha256sum] = "d737d9aa519fb7b749cbc3b962edcf310a8dd1f4b67c91c4f83975dbdd17d965"
SRC_URI[futures-core-0.3.26.sha256sum] = "ec90ff4d0fe1f57d600049061dc6bb68ed03c7d2fbd697274c41805dcb3f8608"
SRC_URI[futures-io-0.3.26.sha256sum] = "bfb8371b6fb2aeb2d280374607aeabfc99d95c72edfe51692e42d3d7f0d08531"
SRC_URI[futures-lite-1.12.0.sha256sum] = "7694489acd39452c77daa48516b894c153f192c3578d5a839b62c58099fcbf48"
SRC_URI[futures-sink-0.3.26.sha256sum] = "f310820bb3e8cfd46c80db4d7fb8353e15dfff853a127158425f31e0be6c8364"
SRC_URI[futures-task-0.3.26.sha256sum] = "dcf79a1bf610b10f42aea489289c5a2c478a786509693b80cd39c44ccd936366"
SRC_URI[futures-util-0.3.26.sha256sum] = "9c1d6de3acfef38d2be4b1f543f553131788603495be83da675e180c8d6b7bd1"
SRC_URI[generic-array-0.14.6.sha256sum] = "bff49e947297f3312447abdca79f45f4738097cc82b06e72054d2223f601f1b9"
SRC_URI[getrandom-0.2.8.sha256sum] = "c05aeb6a22b8f62540c194aac980f2115af067bfe15a0734d7277a768d396b31"
SRC_URI[gimli-0.26.2.sha256sum] = "22030e2c5a68ec659fde1e949a745124b48e6fa8b045b7ed5bd1fe4ccc5c4e5d"
SRC_URI[hashbrown-0.12.3.sha256sum] = "8a9ee70c43aaf417c914396645a0fa852624801b24ebb7ae78fe8272889ac888"
SRC_URI[heck-0.4.0.sha256sum] = "2540771e65fc8cb83cd6e8a237f70c319bd5c29f78ed1084ba5d50eeac86f7f9"
SRC_URI[hermit-abi-0.2.6.sha256sum] = "ee512640fe35acbfb4bb779db6f0d80704c2cacfa2e39b601ef3e3f47d1ae4c7"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[humantime-2.1.0.sha256sum] = "9a3a5bfb195931eeb336b2a7b4d761daec841b97f947d34394601737a7bba5e4"
SRC_URI[iana-time-zone-haiku-0.1.1.sha256sum] = "0703ae284fc167426161c2e3f1da3ea71d94b21bedbcc9494e92b28e334e3dca"
SRC_URI[iana-time-zone-0.1.53.sha256sum] = "64c122667b287044802d6ce17ee2ddf13207ed924c712de9a66a5814d5b64765"
SRC_URI[indenter-0.3.3.sha256sum] = "ce23b50ad8242c51a442f3ff322d56b02f08852c77e4c0b4d3fd684abc89c683"
SRC_URI[indexmap-1.9.2.sha256sum] = "1885e79c1fc4b10f0e172c475f458b7f7b93061064d98c3293e98c5ba0c8b399"
SRC_URI[instant-0.1.12.sha256sum] = "7a5bbe824c507c5da5956355e86a746d82e0e1464f65d862cc5e71da70e94b2c"
SRC_URI[io-lifetimes-1.0.3.sha256sum] = "46112a93252b123d31a119a8d1a1ac19deac4fac6e0e8b0df58f0d4e5870e63c"
SRC_URI[is-terminal-0.4.1.sha256sum] = "927609f78c2913a6f6ac3c27a4fe87f43e2a35367c0c4b0f8265e8f49a104330"
SRC_URI[js-sys-0.3.60.sha256sum] = "49409df3e3bf0856b916e2ceaca09ee28e6871cf7d9ce97a692cacfdb2a25a47"
SRC_URI[lazy_static-1.4.0.sha256sum] = "e2abad23fbc42b3700f2f279844dc832adb2b2eb069b2df918f455c4e18cc646"
SRC_URI[libc-0.2.138.sha256sum] = "db6d7e329c562c5dfab7a46a2afabc8b987ab9a4834c9d1ca04dc54c1546cef8"
SRC_URI[libsystemd-sys-0.9.3.sha256sum] = "ed080163caa59cc29b34bce2209b737149a4bac148cd9a8b04e4c12822798119"
SRC_URI[link-cplusplus-1.0.7.sha256sum] = "9272ab7b96c9046fbc5bc56c06c117cb639fe2d509df0c421cad82d2915cf369"
SRC_URI[linux-raw-sys-0.1.3.sha256sum] = "8f9f08d8963a6c613f4b1a78f4f4a4dbfadf8e6545b2d72861731e4858b8b47f"
SRC_URI[lock_api-0.4.9.sha256sum] = "435011366fe56583b16cf956f9df0095b405b82d76425bc8981c0e22e60ec4df"
SRC_URI[log-0.4.17.sha256sum] = "abb12e687cfb44aa40f41fc3978ef76448f9b6038cad6aef4259d3c095a2382e"
SRC_URI[memchr-2.5.0.sha256sum] = "2dffe52ecf27772e601905b7522cb4ef790d2cc203488bbd0e2fe85fcb74566d"
SRC_URI[memoffset-0.6.5.sha256sum] = "5aa361d4faea93603064a027415f07bd8e1d5c88c9fbf68bf56a285428fd79ce"
SRC_URI[miniz_oxide-0.5.4.sha256sum] = "96590ba8f175222643a85693f33d26e9c8a015f599c216509b1a6894af675d34"
SRC_URI[nix-0.25.1.sha256sum] = "f346ff70e7dbfd675fe90590b92d59ef2de15a8779ae305ebcbfd3f0caf59be4"
SRC_URI[nom8-0.2.0.sha256sum] = "ae01545c9c7fc4486ab7debaf2aad7003ac19431791868fb2e8066df97fad2f8"
SRC_URI[num-integer-0.1.45.sha256sum] = "225d3389fb3509a24c93f5c29eb6bde2586b98d9f016636dff58d7c6f7569cd9"
SRC_URI[num-traits-0.2.15.sha256sum] = "578ede34cf02f8924ab9447f50c28075b4d3e5b269972345e7e0372b38c6cdcd"
SRC_URI[object-0.29.0.sha256sum] = "21158b2c33aa6d4561f1c0a6ea283ca92bc54802a93b263e910746d679a7eb53"
SRC_URI[once_cell-1.16.0.sha256sum] = "86f0b0d4bf799edbc74508c1e8bf170ff5f41238e5f8225603ca7caaae2b7860"
SRC_URI[ordered-stream-0.1.4.sha256sum] = "360a24bdacdb7801a1a6af8500392864791c130ebe8bd9a063158cab00040c90"
SRC_URI[os_str_bytes-6.4.1.sha256sum] = "9b7820b9daea5457c9f21c69448905d723fbd21136ccf521748f23fd49e723ee"
SRC_URI[owo-colors-3.5.0.sha256sum] = "c1b04fb49957986fdce4d6ee7a65027d55d4b6d2265e5848bbb507b58ccfdb6f"
SRC_URI[parking-2.0.0.sha256sum] = "427c3892f9e783d91cc128285287e70a59e206ca452770ece88a76f7a3eddd72"
SRC_URI[parking_lot-0.12.1.sha256sum] = "3742b2c103b9f06bc9fff0a37ff4912935851bee6d36f3c02bcc755bcfec228f"
SRC_URI[parking_lot_core-0.9.6.sha256sum] = "ba1ef8814b5c993410bb3adfad7a5ed269563e4a2f90c41f5d85be7fb47133bf"
SRC_URI[paste-1.0.9.sha256sum] = "b1de2e551fb905ac83f73f7aedf2f0cb4a0da7e35efa24a202a936269f1f18e1"
SRC_URI[pin-project-lite-0.2.9.sha256sum] = "e0a7ae3ac2f1173085d398531c705756c94a4c56843785df85a60c1a0afac116"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[pkg-config-0.3.26.sha256sum] = "6ac9a59f73473f1b8d852421e59e64809f025994837ef743615c6d0c5b305160"
SRC_URI[polling-2.5.2.sha256sum] = "22122d5ec4f9fe1b3916419b76be1e80bcb93f618d071d2edf841b137b2a2bd6"
SRC_URI[ppv-lite86-0.2.17.sha256sum] = "5b40af805b3121feab8a3c29f04d8ad262fa8e0561883e7653e024ae4479e6de"
SRC_URI[proc-macro-crate-1.3.0.sha256sum] = "66618389e4ec1c7afe67d51a9bf34ff9236480f8d51e7489b7d5ab0303c13f34"
SRC_URI[proc-macro-error-attr-1.0.4.sha256sum] = "a1be40180e52ecc98ad80b184934baf3d0d29f979574e439af5a55274b35f869"
SRC_URI[proc-macro-error-1.0.4.sha256sum] = "da25490ff9892aab3fcf7c36f08cfb902dd3e71ca0f9f9517bea02a73a5ce38c"
SRC_URI[proc-macro2-1.0.47.sha256sum] = "5ea3d908b0e36316caf9e9e2c4625cdde190a7e6f440d794667ed17a1855e725"
SRC_URI[quote-1.0.21.sha256sum] = "bbe448f377a7d6961e30f5955f9b8d106c3f5e449d493ee1b125c1d43c2b5179"
SRC_URI[rand-0.8.5.sha256sum] = "34af8d1a0e25924bc5b7c43c079c942339d8f0a8b57c39049bef581b46327404"
SRC_URI[rand_chacha-0.3.1.sha256sum] = "e6c10a63a0fa32252be49d21e7709d4d4baf8d231c2dbce1eaa8141b9b127d88"
SRC_URI[rand_core-0.6.4.sha256sum] = "ec0be4795e2f6a28069bec0b5ff3e2ac9bafc99e6a9a7dc3547996c5c816922c"
SRC_URI[redox_syscall-0.2.16.sha256sum] = "fb5a58c1855b4b6819d59012155603f0b22ad30cad752600aadfcb695265519a"
SRC_URI[redox_users-0.4.3.sha256sum] = "b033d837a7cf162d7993aded9304e30a83213c648b6e389db233191f891e5c2b"
SRC_URI[regex-syntax-0.6.28.sha256sum] = "456c603be3e8d448b072f410900c09faf164fbce2d480456f50eea6e25f9c848"
SRC_URI[regex-1.7.0.sha256sum] = "e076559ef8e241f2ae3479e36f97bd5741c0330689e217ad51ce2c76808b868a"
SRC_URI[remove_dir_all-0.5.3.sha256sum] = "3acd125665422973a33ac9d3dd2df85edad0f4ae9b00dafb1a05e43a9f5ef8e7"
SRC_URI[rmp-serde-1.1.1.sha256sum] = "c5b13be192e0220b8afb7222aa5813cb62cc269ebb5cac346ca6487681d2913e"
SRC_URI[rmp-0.8.11.sha256sum] = "44519172358fd6d58656c86ab8e7fbc9e1490c3e8f14d35ed78ca0dd07403c9f"
SRC_URI[rustc-demangle-0.1.21.sha256sum] = "7ef03e0a2b150c7a90d01faf6254c9c48a41e95fb2a8c2ac1c6f0d2b9aefc342"
SRC_URI[rustix-0.36.4.sha256sum] = "cb93e85278e08bb5788653183213d3a60fc242b10cb9be96586f5a73dcb67c23"
SRC_URI[scopeguard-1.1.0.sha256sum] = "d29ab0c6d3fc0ee92fe66e2d99f700eab17a8d57d1c1d3b748380fb20baa78cd"
SRC_URI[scratch-1.0.2.sha256sum] = "9c8132065adcfd6e02db789d9285a0deb2f3fcb04002865ab67d5fb103533898"
SRC_URI[serde-1.0.149.sha256sum] = "256b9932320c590e707b94576e3cc1f7c9024d0ee6612dfbcf1cb106cbe8e055"
SRC_URI[serde_derive-1.0.149.sha256sum] = "b4eae9b04cbffdfd550eb462ed33bc6a1b68c935127d008b27444d08380f94e4"
SRC_URI[serde_repr-0.1.10.sha256sum] = "9a5ec9fa74a20ebbe5d9ac23dac1fc96ba0ecfe9f50f2843b52e537b10fbcb4e"
SRC_URI[sha1-0.10.5.sha256sum] = "f04293dc80c3993519f2d7f6f511707ee7094fe0c6d3406feb330cdb3540eba3"
SRC_URI[sharded-slab-0.1.4.sha256sum] = "900fba806f70c630b0a382d0d825e17a0f19fcd059a2ade1ff237bcddf446b31"
SRC_URI[slab-0.4.7.sha256sum] = "4614a76b2a8be0058caa9dbbaf66d988527d86d003c11a94fbd335d7661edcef"
SRC_URI[smallvec-1.10.0.sha256sum] = "a507befe795404456341dfab10cef66ead4c041f62b8b11bbb92bffe5d0953e0"
SRC_URI[socket2-0.4.7.sha256sum] = "02e2d2db9033d13a1567121ddd7a095ee144db4e1ca1b1bda3419bc0da294ebd"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[strsim-0.10.0.sha256sum] = "73473c0e59e6d5812c5dfe2a064a6444949f089e20eec9a2e5506596494e4623"
SRC_URI[syn-1.0.105.sha256sum] = "60b9b43d45702de4c839cb9b51d9f529c5dd26a4aff255b42b1ebc03e88ee908"
SRC_URI[systemd-0.10.0.sha256sum] = "afec0101d9ae8ab26aedf0840109df689938ea7e538aa03df4369f1854f11562"
SRC_URI[tempfile-3.3.0.sha256sum] = "5cdb1ef4eaeeaddc8fbd371e5017057064af0911902ef36b39801f67cc6d79e4"
SRC_URI[termcolor-1.1.3.sha256sum] = "bab24d30b911b2376f3a13cc2cd443142f0c81dda04c118693e35b3835757755"
SRC_URI[thiserror-impl-1.0.38.sha256sum] = "1fb327af4685e4d03fa8cbcf1716380da910eeb2bb8be417e7f9fd3fb164f36f"
SRC_URI[thiserror-1.0.38.sha256sum] = "6a9cd18aa97d5c45c6603caea1da6628790b37f7a34b6ca89522331c5180fed0"
SRC_URI[thread_local-1.1.4.sha256sum] = "5516c27b78311c50bf42c071425c560ac799b11c30b31f87e3081965fe5e0180"
SRC_URI[time-0.1.45.sha256sum] = "1b797afad3f312d1c66a56d11d0316f916356d11bd158fbc6ca6389ff6bf805a"
SRC_URI[toml_datetime-0.5.1.sha256sum] = "4553f467ac8e3d374bc9a177a26801e5d0f9b211aa1673fb137a403afd1c9cf5"
SRC_URI[toml_edit-0.18.1.sha256sum] = "56c59d8dd7d0dcbc6428bf7aa2f0e823e26e43b3c9aca15bbc9475d23e5fa12b"
SRC_URI[tracing-attributes-0.1.23.sha256sum] = "4017f8f45139870ca7e672686113917c71c7a6e02d4924eda67186083c03081a"
SRC_URI[tracing-core-0.1.30.sha256sum] = "24eb03ba0eab1fd845050058ce5e616558e8f8d8fca633e6b163fe25c797213a"
SRC_URI[tracing-error-0.2.0.sha256sum] = "d686ec1c0f384b1277f097b2f279a2ecc11afe8c133c1aabf036a27cb4cd206e"
SRC_URI[tracing-subscriber-0.3.16.sha256sum] = "a6176eae26dd70d0c919749377897b54a9276bd7061339665dd68777926b5a70"
SRC_URI[tracing-0.1.37.sha256sum] = "8ce8c33a8d48bd45d624a6e523445fd21ec13d3653cd51f681abf67418f54eb8"
SRC_URI[typenum-1.16.0.sha256sum] = "497961ef93d974e23eb6f433eb5fe1b7930b659f06d12dec6fc44a8f554c0bba"
SRC_URI[uds_windows-1.0.2.sha256sum] = "ce65604324d3cce9b966701489fbd0cf318cb1f7bd9dd07ac9a4ee6fb791930d"
SRC_URI[unicode-ident-1.0.5.sha256sum] = "6ceab39d59e4c9499d4e5a8ee0e2735b891bb7308ac83dfb4e80cad195c9f6f3"
SRC_URI[unicode-width-0.1.10.sha256sum] = "c0edd1e5b14653f783770bce4a4dabb4a5108a5370a5f5d8cfe8710c361f6c8b"
SRC_URI[utf8-cstr-0.1.6.sha256sum] = "55bcbb425141152b10d5693095950b51c3745d019363fc2929ffd8f61449b628"
SRC_URI[valuable-0.1.0.sha256sum] = "830b7e5d4d90034032940e4ace0d9a9a057e7a45cd94e6c007832e39edb82f6d"
SRC_URI[version_check-0.9.4.sha256sum] = "49874b5167b65d7193b8aba1567f5c7d93d001cafc34600cee003eda787e483f"
SRC_URI[waker-fn-1.1.0.sha256sum] = "9d5b2c62b4012a3e1eca5a7e077d13b3bf498c4073e33ccd58626607748ceeca"
SRC_URI[wasi-0.10.0+wasi-snapshot-preview1.sha256sum] = "1a143597ca7c7793eff794def352d41792a93c481eb1042423ff7ff72ba2c31f"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[wasm-bindgen-backend-0.2.83.sha256sum] = "4c8ffb332579b0557b52d268b91feab8df3615f265d5270fec2a8c95b17c1142"
SRC_URI[wasm-bindgen-macro-support-0.2.83.sha256sum] = "07bc0c051dc5f23e307b13285f9d75df86bfdf816c5721e573dec1f9b8aa193c"
SRC_URI[wasm-bindgen-macro-0.2.83.sha256sum] = "052be0f94026e6cbc75cdefc9bae13fd6052cdcaf532fa6c45e7ae33a1e6c810"
SRC_URI[wasm-bindgen-shared-0.2.83.sha256sum] = "1c38c045535d93ec4f0b4defec448e4291638ee608530863b1e2ba115d4fff7f"
SRC_URI[wasm-bindgen-0.2.83.sha256sum] = "eaf9f5aceeec8be17c128b2e93e031fb8a4d469bb9c4ae2d7dc1888b26887268"
SRC_URI[wepoll-ffi-0.1.2.sha256sum] = "d743fdedc5c64377b5fc2bc036b01c7fd642205a0d96356034ae3404d49eb7fb"
SRC_URI[winapi-i686-pc-windows-gnu-0.4.0.sha256sum] = "ac3b87c63620426dd9b991e5ce0329eff545bccbbb34f3be09ff6fb6ab51b7b6"
SRC_URI[winapi-util-0.1.5.sha256sum] = "70ec6ce85bb158151cae5e5c87f95a8e97d2c0c4b001223f33a334e3ce5de178"
SRC_URI[winapi-x86_64-pc-windows-gnu-0.4.0.sha256sum] = "712e227841d057c1ee1cd2fb22fa7e5a5461ae8e48fa2ca79ec42cfc1931183f"
SRC_URI[winapi-0.3.9.sha256sum] = "5c839a674fcd7a98952e593242ea400abe93992746761e38641405d28b00f419"
SRC_URI[windows-sys-0.42.0.sha256sum] = "5a3e1820f08b8513f676f7ab6c1f99ff312fb97b553d30ff4dd86f9f15728aa7"
SRC_URI[windows_aarch64_gnullvm-0.42.0.sha256sum] = "41d2aa71f6f0cbe00ae5167d90ef3cfe66527d6f613ca78ac8024c3ccab9a19e"
SRC_URI[windows_aarch64_msvc-0.42.0.sha256sum] = "dd0f252f5a35cac83d6311b2e795981f5ee6e67eb1f9a7f64eb4500fbc4dcdb4"
SRC_URI[windows_i686_gnu-0.42.0.sha256sum] = "fbeae19f6716841636c28d695375df17562ca208b2b7d0dc47635a50ae6c5de7"
SRC_URI[windows_i686_msvc-0.42.0.sha256sum] = "84c12f65daa39dd2babe6e442988fc329d6243fdce47d7d2d155b8d874862246"
SRC_URI[windows_x86_64_gnu-0.42.0.sha256sum] = "bf7b1b21b5362cbc318f686150e5bcea75ecedc74dd157d874d754a2ca44b0ed"
SRC_URI[windows_x86_64_gnullvm-0.42.0.sha256sum] = "09d525d2ba30eeb3297665bd434a54297e4170c7f1a44cad4ef58095b4cd2028"
SRC_URI[windows_x86_64_msvc-0.42.0.sha256sum] = "f40009d85759725a34da6d89a94e63d7bdc50a862acf0dbc7c8e488f1edcb6f5"
SRC_URI[zbus-3.9.0.sha256sum] = "76f1a9e02a5659c712de386c2af5156c51a530fac0668d3ff85fa26a2bc006ba"
SRC_URI[zbus_macros-3.9.0.sha256sum] = "414cd9f07964695e00bfef8e589d1752ea0480b8a619f2064cbaccb8a6c2ed59"
SRC_URI[zbus_names-2.5.0.sha256sum] = "f34f314916bd89bdb9934154627fab152f4f28acdda03e7c4c68181b214fe7e3"
SRC_URI[zvariant-3.10.0.sha256sum] = "576cc41e65c7f283e5460f5818073e68fb1f1631502b969ef228c2e03c862efb"
SRC_URI[zvariant_derive-3.10.0.sha256sum] = "0fd4aafc0dee96ae7242a24249ce9babf21e1562822f03df650d4e68c20e41ed"
