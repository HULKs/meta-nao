SRC_URI += "\
            crate://crates.io/addr2line/0.17.0 \
            crate://crates.io/adler/1.0.2 \
            crate://crates.io/aho-corasick/0.7.20 \
            crate://crates.io/async-broadcast/0.5.0 \
            crate://crates.io/async-channel/1.8.0 \
            crate://crates.io/async-executor/1.5.0 \
            crate://crates.io/async-global-executor/2.3.1 \
            crate://crates.io/async-io/1.12.0 \
            crate://crates.io/async-lock/2.6.0 \
            crate://crates.io/async-recursion/1.0.2 \
            crate://crates.io/async-std/1.12.0 \
            crate://crates.io/async-task/4.3.0 \
            crate://crates.io/async-trait/0.1.61 \
            crate://crates.io/atomic-waker/1.0.0 \
            crate://crates.io/autocfg/1.1.0 \
            crate://crates.io/backtrace/0.3.66 \
            crate://crates.io/bitflags/1.3.2 \
            crate://crates.io/block-buffer/0.10.3 \
            crate://crates.io/blocking/1.3.0 \
            crate://crates.io/bumpalo/3.11.1 \
            crate://crates.io/byteorder/1.4.3 \
            crate://crates.io/bytes/1.3.0 \
            crate://crates.io/cc/1.0.77 \
            crate://crates.io/cfg-if/1.0.0 \
            crate://crates.io/color-eyre/0.6.2 \
            crate://crates.io/color-spantrace/0.2.0 \
            crate://crates.io/concurrent-queue/2.0.0 \
            crate://crates.io/configparser/3.0.2 \
            crate://crates.io/cpufeatures/0.2.5 \
            crate://crates.io/crossbeam-utils/0.8.14 \
            crate://crates.io/crypto-common/0.1.6 \
            crate://crates.io/ctor/0.1.26 \
            crate://crates.io/derivative/2.2.0 \
            crate://crates.io/digest/0.10.6 \
            crate://crates.io/dirs-sys/0.3.7 \
            crate://crates.io/dirs/4.0.0 \
            crate://crates.io/enumflags2/0.7.5 \
            crate://crates.io/enumflags2_derive/0.7.4 \
            crate://crates.io/env_logger/0.10.0 \
            crate://crates.io/errno-dragonfly/0.1.2 \
            crate://crates.io/errno/0.2.8 \
            crate://crates.io/event-listener/2.5.3 \
            crate://crates.io/eyre/0.6.8 \
            crate://crates.io/fastrand/1.8.0 \
            crate://crates.io/futures-channel/0.3.25 \
            crate://crates.io/futures-core/0.3.25 \
            crate://crates.io/futures-io/0.3.25 \
            crate://crates.io/futures-lite/1.12.0 \
            crate://crates.io/futures-macro/0.3.25 \
            crate://crates.io/futures-sink/0.3.25 \
            crate://crates.io/futures-task/0.3.25 \
            crate://crates.io/futures-util/0.3.25 \
            crate://crates.io/generic-array/0.14.6 \
            crate://crates.io/getrandom/0.2.8 \
            crate://crates.io/gimli/0.26.2 \
            crate://crates.io/gloo-timers/0.2.5 \
            crate://crates.io/hermit-abi/0.1.19 \
            crate://crates.io/hermit-abi/0.2.6 \
            crate://crates.io/hex/0.4.3 \
            crate://crates.io/hostname/0.3.1 \
            crate://crates.io/humantime/2.1.0 \
            crate://crates.io/indenter/0.3.3 \
            crate://crates.io/instant/0.1.12 \
            crate://crates.io/io-lifetimes/1.0.4 \
            crate://crates.io/is-terminal/0.4.2 \
            crate://crates.io/itoa/1.0.4 \
            crate://crates.io/js-sys/0.3.60 \
            crate://crates.io/kv-log-macro/1.0.7 \
            crate://crates.io/lazy_static/1.4.0 \
            crate://crates.io/libc/0.2.138 \
            crate://crates.io/linux-raw-sys/0.1.4 \
            crate://crates.io/lock_api/0.4.9 \
            crate://crates.io/log/0.4.17 \
            crate://crates.io/match_cfg/0.1.0 \
            crate://crates.io/memchr/2.5.0 \
            crate://crates.io/memoffset/0.6.5 \
            crate://crates.io/miniz_oxide/0.5.4 \
            crate://crates.io/mio/0.8.5 \
            crate://crates.io/network-interface/0.1.5 \
            crate://crates.io/nix/0.25.1 \
            crate://crates.io/num_cpus/1.14.0 \
            crate://crates.io/object/0.29.0 \
            crate://crates.io/once_cell/1.16.0 \
            crate://crates.io/ordered-stream/0.1.3 \
            crate://crates.io/owo-colors/3.5.0 \
            crate://crates.io/parking/2.0.0 \
            crate://crates.io/parking_lot/0.12.1 \
            crate://crates.io/parking_lot_core/0.9.5 \
            crate://crates.io/pin-project-lite/0.2.9 \
            crate://crates.io/pin-utils/0.1.0 \
            crate://crates.io/polling/2.5.1 \
            crate://crates.io/ppv-lite86/0.2.17 \
            crate://crates.io/proc-macro-crate/1.2.1 \
            crate://crates.io/proc-macro2/1.0.79 \
            crate://crates.io/quote/1.0.35 \
            crate://crates.io/rand/0.8.5 \
            crate://crates.io/rand_chacha/0.3.1 \
            crate://crates.io/rand_core/0.6.4 \
            crate://crates.io/redox_syscall/0.2.16 \
            crate://crates.io/redox_users/0.4.3 \
            crate://crates.io/regex-syntax/0.6.28 \
            crate://crates.io/regex/1.7.0 \
            crate://crates.io/remove_dir_all/0.5.3 \
            crate://crates.io/rustc-demangle/0.1.21 \
            crate://crates.io/rustix/0.36.7 \
            crate://crates.io/ryu/1.0.11 \
            crate://crates.io/scopeguard/1.1.0 \
            crate://crates.io/serde/1.0.197 \
            crate://crates.io/serde_derive/1.0.197 \
            crate://crates.io/serde_json/1.0.114 \
            crate://crates.io/serde_repr/0.1.10 \
            crate://crates.io/sha1/0.10.5 \
            crate://crates.io/sharded-slab/0.1.4 \
            crate://crates.io/signal-hook-registry/1.4.0 \
            crate://crates.io/slab/0.4.7 \
            crate://crates.io/smallvec/1.10.0 \
            crate://crates.io/socket2/0.4.7 \
            crate://crates.io/static_assertions/1.1.0 \
            crate://crates.io/syn/1.0.105 \
            crate://crates.io/syn/2.0.53 \
            crate://crates.io/tempfile/3.3.0 \
            crate://crates.io/termcolor/1.2.0 \
            crate://crates.io/thiserror-impl/1.0.37 \
            crate://crates.io/thiserror/1.0.37 \
            crate://crates.io/thread_local/1.1.4 \
            crate://crates.io/tokio-macros/1.8.2 \
            crate://crates.io/tokio-util/0.7.4 \
            crate://crates.io/tokio/1.23.0 \
            crate://crates.io/toml/0.5.10 \
            crate://crates.io/tracing-attributes/0.1.23 \
            crate://crates.io/tracing-core/0.1.30 \
            crate://crates.io/tracing-error/0.2.0 \
            crate://crates.io/tracing-subscriber/0.3.16 \
            crate://crates.io/tracing/0.1.37 \
            crate://crates.io/typenum/1.16.0 \
            crate://crates.io/uds_windows/1.0.2 \
            crate://crates.io/unicode-ident/1.0.5 \
            crate://crates.io/valuable/0.1.0 \
            crate://crates.io/value-bag/1.0.0-alpha.9 \
            crate://crates.io/version_check/0.9.4 \
            crate://crates.io/waker-fn/1.1.0 \
            crate://crates.io/wasi/0.11.0+wasi-snapshot-preview1 \
            crate://crates.io/wasm-bindgen-backend/0.2.83 \
            crate://crates.io/wasm-bindgen-futures/0.4.33 \
            crate://crates.io/wasm-bindgen-macro-support/0.2.83 \
            crate://crates.io/wasm-bindgen-macro/0.2.83 \
            crate://crates.io/wasm-bindgen-shared/0.2.83 \
            crate://crates.io/wasm-bindgen/0.2.83 \
            crate://crates.io/web-sys/0.3.60 \
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
            crate://crates.io/zbus/3.7.0 \
            crate://crates.io/zbus_macros/3.7.0 \
            crate://crates.io/zbus_names/2.5.0 \
            crate://crates.io/zvariant/3.10.0 \
            crate://crates.io/zvariant_derive/3.10.0 \
           "

SRC_URI[addr2line-0.17.0.sha256sum] = "b9ecd88a8c8378ca913a680cd98f0f13ac67383d35993f86c90a70e3f137816b"
SRC_URI[adler-1.0.2.sha256sum] = "f26201604c87b1e01bd3d98f8d5d9a8fcbb815e8cedb41ffccbeb4bf593a35fe"
SRC_URI[aho-corasick-0.7.20.sha256sum] = "cc936419f96fa211c1b9166887b38e5e40b19958e5b895be7c1f93adec7071ac"
SRC_URI[async-broadcast-0.5.0.sha256sum] = "1b19760fa2b7301cf235360ffd6d3558b1ed4249edd16d6cca8d690cee265b95"
SRC_URI[async-channel-1.8.0.sha256sum] = "cf46fee83e5ccffc220104713af3292ff9bc7c64c7de289f66dae8e38d826833"
SRC_URI[async-executor-1.5.0.sha256sum] = "17adb73da160dfb475c183343c8cccd80721ea5a605d3eb57125f0a7b7a92d0b"
SRC_URI[async-global-executor-2.3.1.sha256sum] = "f1b6f5d7df27bd294849f8eec66ecfc63d11814df7a4f5d74168a2394467b776"
SRC_URI[async-io-1.12.0.sha256sum] = "8c374dda1ed3e7d8f0d9ba58715f924862c63eae6849c92d3a18e7fbde9e2794"
SRC_URI[async-lock-2.6.0.sha256sum] = "c8101efe8695a6c17e02911402145357e718ac92d3ff88ae8419e84b1707b685"
SRC_URI[async-recursion-1.0.2.sha256sum] = "3b015a331cc64ebd1774ba119538573603427eaace0a1950c423ab971f903796"
SRC_URI[async-std-1.12.0.sha256sum] = "62565bb4402e926b29953c785397c6dc0391b7b446e45008b0049eb43cec6f5d"
SRC_URI[async-task-4.3.0.sha256sum] = "7a40729d2133846d9ed0ea60a8b9541bccddab49cd30f0715a1da672fe9a2524"
SRC_URI[async-trait-0.1.61.sha256sum] = "705339e0e4a9690e2908d2b3d049d85682cf19fbd5782494498fbf7003a6a282"
SRC_URI[atomic-waker-1.0.0.sha256sum] = "065374052e7df7ee4047b1160cca5e1467a12351a40b3da123c870ba0b8eda2a"
SRC_URI[autocfg-1.1.0.sha256sum] = "d468802bab17cbc0cc575e9b053f41e72aa36bfa6b7f55e3529ffa43161b97fa"
SRC_URI[backtrace-0.3.66.sha256sum] = "cab84319d616cfb654d03394f38ab7e6f0919e181b1b57e1fd15e7fb4077d9a7"
SRC_URI[bitflags-1.3.2.sha256sum] = "bef38d45163c2f1dde094a7dfd33ccf595c92905c8f8f4fdc18d06fb1037718a"
SRC_URI[block-buffer-0.10.3.sha256sum] = "69cce20737498f97b993470a6e536b8523f0af7892a4f928cceb1ac5e52ebe7e"
SRC_URI[blocking-1.3.0.sha256sum] = "3c67b173a56acffd6d2326fb7ab938ba0b00a71480e14902b2591c87bc5741e8"
SRC_URI[bumpalo-3.11.1.sha256sum] = "572f695136211188308f16ad2ca5c851a712c464060ae6974944458eb83880ba"
SRC_URI[byteorder-1.4.3.sha256sum] = "14c189c53d098945499cdfa7ecc63567cf3886b3332b312a5b4585d8d3a6a610"
SRC_URI[bytes-1.3.0.sha256sum] = "dfb24e866b15a1af2a1b663f10c6b6b8f397a84aadb828f12e5b289ec23a3a3c"
SRC_URI[cc-1.0.77.sha256sum] = "e9f73505338f7d905b19d18738976aae232eb46b8efc15554ffc56deb5d9ebe4"
SRC_URI[cfg-if-1.0.0.sha256sum] = "baf1de4339761588bc0619e3cbc0120ee582ebb74b53b4efbf79117bd2da40fd"
SRC_URI[color-eyre-0.6.2.sha256sum] = "5a667583cca8c4f8436db8de46ea8233c42a7d9ae424a82d338f2e4675229204"
SRC_URI[color-spantrace-0.2.0.sha256sum] = "1ba75b3d9449ecdccb27ecbc479fdc0b87fa2dd43d2f8298f9bf0e59aacc8dce"
SRC_URI[concurrent-queue-2.0.0.sha256sum] = "bd7bef69dc86e3c610e4e7aed41035e2a7ed12e72dd7530f61327a6579a4390b"
SRC_URI[configparser-3.0.2.sha256sum] = "5458d9d1a587efaf5091602c59d299696a3877a439c8f6d461a2d3cce11df87a"
SRC_URI[cpufeatures-0.2.5.sha256sum] = "28d997bd5e24a5928dd43e46dc529867e207907fe0b239c3477d924f7f2ca320"
SRC_URI[crossbeam-utils-0.8.14.sha256sum] = "4fb766fa798726286dbbb842f174001dab8abc7b627a1dd86e0b7222a95d929f"
SRC_URI[crypto-common-0.1.6.sha256sum] = "1bfb12502f3fc46cca1bb51ac28df9d618d813cdc3d2f25b9fe775a34af26bb3"
SRC_URI[ctor-0.1.26.sha256sum] = "6d2301688392eb071b0bf1a37be05c469d3cc4dbbd95df672fe28ab021e6a096"
SRC_URI[derivative-2.2.0.sha256sum] = "fcc3dd5e9e9c0b295d6e1e4d811fb6f157d5ffd784b8d202fc62eac8035a770b"
SRC_URI[digest-0.10.6.sha256sum] = "8168378f4e5023e7218c89c891c0fd8ecdb5e5e4f18cb78f38cf245dd021e76f"
SRC_URI[dirs-sys-0.3.7.sha256sum] = "1b1d1d91c932ef41c0f2663aa8b0ca0342d444d842c06914aa0a7e352d0bada6"
SRC_URI[dirs-4.0.0.sha256sum] = "ca3aa72a6f96ea37bbc5aa912f6788242832f75369bdfdadcb0e38423f100059"
SRC_URI[enumflags2-0.7.5.sha256sum] = "e75d4cd21b95383444831539909fbb14b9dc3fdceb2a6f5d36577329a1f55ccb"
SRC_URI[enumflags2_derive-0.7.4.sha256sum] = "f58dc3c5e468259f19f2d46304a6b28f1c3d034442e14b322d2b850e36f6d5ae"
SRC_URI[env_logger-0.10.0.sha256sum] = "85cdab6a89accf66733ad5a1693a4dcced6aeff64602b634530dd73c1f3ee9f0"
SRC_URI[errno-dragonfly-0.1.2.sha256sum] = "aa68f1b12764fab894d2755d2518754e71b4fd80ecfb822714a1206c2aab39bf"
SRC_URI[errno-0.2.8.sha256sum] = "f639046355ee4f37944e44f60642c6f3a7efa3cf6b78c78a0d989a8ce6c396a1"
SRC_URI[event-listener-2.5.3.sha256sum] = "0206175f82b8d6bf6652ff7d71a1e27fd2e4efde587fd368662814d6ec1d9ce0"
SRC_URI[eyre-0.6.8.sha256sum] = "4c2b6b5a29c02cdc822728b7d7b8ae1bab3e3b05d44522770ddd49722eeac7eb"
SRC_URI[fastrand-1.8.0.sha256sum] = "a7a407cfaa3385c4ae6b23e84623d48c2798d06e3e6a1878f7f59f17b3f86499"
SRC_URI[futures-channel-0.3.25.sha256sum] = "52ba265a92256105f45b719605a571ffe2d1f0fea3807304b522c1d778f79eed"
SRC_URI[futures-core-0.3.25.sha256sum] = "04909a7a7e4633ae6c4a9ab280aeb86da1236243a77b694a49eacd659a4bd3ac"
SRC_URI[futures-io-0.3.25.sha256sum] = "00f5fb52a06bdcadeb54e8d3671f8888a39697dcb0b81b23b55174030427f4eb"
SRC_URI[futures-lite-1.12.0.sha256sum] = "7694489acd39452c77daa48516b894c153f192c3578d5a839b62c58099fcbf48"
SRC_URI[futures-macro-0.3.25.sha256sum] = "bdfb8ce053d86b91919aad980c220b1fb8401a9394410e1c289ed7e66b61835d"
SRC_URI[futures-sink-0.3.25.sha256sum] = "39c15cf1a4aa79df40f1bb462fb39676d0ad9e366c2a33b590d7c66f4f81fcf9"
SRC_URI[futures-task-0.3.25.sha256sum] = "2ffb393ac5d9a6eaa9d3fdf37ae2776656b706e200c8e16b1bdb227f5198e6ea"
SRC_URI[futures-util-0.3.25.sha256sum] = "197676987abd2f9cadff84926f410af1c183608d36641465df73ae8211dc65d6"
SRC_URI[generic-array-0.14.6.sha256sum] = "bff49e947297f3312447abdca79f45f4738097cc82b06e72054d2223f601f1b9"
SRC_URI[getrandom-0.2.8.sha256sum] = "c05aeb6a22b8f62540c194aac980f2115af067bfe15a0734d7277a768d396b31"
SRC_URI[gimli-0.26.2.sha256sum] = "22030e2c5a68ec659fde1e949a745124b48e6fa8b045b7ed5bd1fe4ccc5c4e5d"
SRC_URI[gloo-timers-0.2.5.sha256sum] = "98c4a8d6391675c6b2ee1a6c8d06e8e2d03605c44cec1270675985a4c2a5500b"
SRC_URI[hermit-abi-0.1.19.sha256sum] = "62b467343b94ba476dcb2500d242dadbb39557df889310ac77c5d99100aaac33"
SRC_URI[hermit-abi-0.2.6.sha256sum] = "ee512640fe35acbfb4bb779db6f0d80704c2cacfa2e39b601ef3e3f47d1ae4c7"
SRC_URI[hex-0.4.3.sha256sum] = "7f24254aa9a54b5c858eaee2f5bccdb46aaf0e486a595ed5fd8f86ba55232a70"
SRC_URI[hostname-0.3.1.sha256sum] = "3c731c3e10504cc8ed35cfe2f1db4c9274c3d35fa486e3b31df46f068ef3e867"
SRC_URI[humantime-2.1.0.sha256sum] = "9a3a5bfb195931eeb336b2a7b4d761daec841b97f947d34394601737a7bba5e4"
SRC_URI[indenter-0.3.3.sha256sum] = "ce23b50ad8242c51a442f3ff322d56b02f08852c77e4c0b4d3fd684abc89c683"
SRC_URI[instant-0.1.12.sha256sum] = "7a5bbe824c507c5da5956355e86a746d82e0e1464f65d862cc5e71da70e94b2c"
SRC_URI[io-lifetimes-1.0.4.sha256sum] = "e7d6c6f8c91b4b9ed43484ad1a938e393caf35960fce7f82a040497207bd8e9e"
SRC_URI[is-terminal-0.4.2.sha256sum] = "28dfb6c8100ccc63462345b67d1bbc3679177c75ee4bf59bf29c8b1d110b8189"
SRC_URI[itoa-1.0.4.sha256sum] = "4217ad341ebadf8d8e724e264f13e593e0648f5b3e94b3896a5df283be015ecc"
SRC_URI[js-sys-0.3.60.sha256sum] = "49409df3e3bf0856b916e2ceaca09ee28e6871cf7d9ce97a692cacfdb2a25a47"
SRC_URI[kv-log-macro-1.0.7.sha256sum] = "0de8b303297635ad57c9f5059fd9cee7a47f8e8daa09df0fcd07dd39fb22977f"
SRC_URI[lazy_static-1.4.0.sha256sum] = "e2abad23fbc42b3700f2f279844dc832adb2b2eb069b2df918f455c4e18cc646"
SRC_URI[libc-0.2.138.sha256sum] = "db6d7e329c562c5dfab7a46a2afabc8b987ab9a4834c9d1ca04dc54c1546cef8"
SRC_URI[linux-raw-sys-0.1.4.sha256sum] = "f051f77a7c8e6957c0696eac88f26b0117e54f52d3fc682ab19397a8812846a4"
SRC_URI[lock_api-0.4.9.sha256sum] = "435011366fe56583b16cf956f9df0095b405b82d76425bc8981c0e22e60ec4df"
SRC_URI[log-0.4.17.sha256sum] = "abb12e687cfb44aa40f41fc3978ef76448f9b6038cad6aef4259d3c095a2382e"
SRC_URI[match_cfg-0.1.0.sha256sum] = "ffbee8634e0d45d258acb448e7eaab3fce7a0a467395d4d9f228e3c1f01fb2e4"
SRC_URI[memchr-2.5.0.sha256sum] = "2dffe52ecf27772e601905b7522cb4ef790d2cc203488bbd0e2fe85fcb74566d"
SRC_URI[memoffset-0.6.5.sha256sum] = "5aa361d4faea93603064a027415f07bd8e1d5c88c9fbf68bf56a285428fd79ce"
SRC_URI[miniz_oxide-0.5.4.sha256sum] = "96590ba8f175222643a85693f33d26e9c8a015f599c216509b1a6894af675d34"
SRC_URI[mio-0.8.5.sha256sum] = "e5d732bc30207a6423068df043e3d02e0735b155ad7ce1a6f76fe2baa5b158de"
SRC_URI[network-interface-0.1.5.sha256sum] = "492274b7c5bb3ec77766b9adc9e21c0e58335c38cd376e517a1e8664eb839398"
SRC_URI[nix-0.25.1.sha256sum] = "f346ff70e7dbfd675fe90590b92d59ef2de15a8779ae305ebcbfd3f0caf59be4"
SRC_URI[num_cpus-1.14.0.sha256sum] = "f6058e64324c71e02bc2b150e4f3bc8286db6c83092132ffa3f6b1eab0f9def5"
SRC_URI[object-0.29.0.sha256sum] = "21158b2c33aa6d4561f1c0a6ea283ca92bc54802a93b263e910746d679a7eb53"
SRC_URI[once_cell-1.16.0.sha256sum] = "86f0b0d4bf799edbc74508c1e8bf170ff5f41238e5f8225603ca7caaae2b7860"
SRC_URI[ordered-stream-0.1.3.sha256sum] = "d4eb9ba3f3e42dbdd3b7b122de5ca169c81e93d561eb900da3a8c99bcfcf381a"
SRC_URI[owo-colors-3.5.0.sha256sum] = "c1b04fb49957986fdce4d6ee7a65027d55d4b6d2265e5848bbb507b58ccfdb6f"
SRC_URI[parking-2.0.0.sha256sum] = "427c3892f9e783d91cc128285287e70a59e206ca452770ece88a76f7a3eddd72"
SRC_URI[parking_lot-0.12.1.sha256sum] = "3742b2c103b9f06bc9fff0a37ff4912935851bee6d36f3c02bcc755bcfec228f"
SRC_URI[parking_lot_core-0.9.5.sha256sum] = "7ff9f3fef3968a3ec5945535ed654cb38ff72d7495a25619e2247fb15a2ed9ba"
SRC_URI[pin-project-lite-0.2.9.sha256sum] = "e0a7ae3ac2f1173085d398531c705756c94a4c56843785df85a60c1a0afac116"
SRC_URI[pin-utils-0.1.0.sha256sum] = "8b870d8c151b6f2fb93e84a13146138f05d02ed11c7e7c54f8826aaaf7c9f184"
SRC_URI[polling-2.5.1.sha256sum] = "166ca89eb77fd403230b9c156612965a81e094ec6ec3aa13663d4c8b113fa748"
SRC_URI[ppv-lite86-0.2.17.sha256sum] = "5b40af805b3121feab8a3c29f04d8ad262fa8e0561883e7653e024ae4479e6de"
SRC_URI[proc-macro-crate-1.2.1.sha256sum] = "eda0fc3b0fb7c975631757e14d9049da17374063edb6ebbcbc54d880d4fe94e9"
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
SRC_URI[rustc-demangle-0.1.21.sha256sum] = "7ef03e0a2b150c7a90d01faf6254c9c48a41e95fb2a8c2ac1c6f0d2b9aefc342"
SRC_URI[rustix-0.36.7.sha256sum] = "d4fdebc4b395b7fbb9ab11e462e20ed9051e7b16e42d24042c776eca0ac81b03"
SRC_URI[ryu-1.0.11.sha256sum] = "4501abdff3ae82a1c1b477a17252eb69cee9e66eb915c1abaa4f44d873df9f09"
SRC_URI[scopeguard-1.1.0.sha256sum] = "d29ab0c6d3fc0ee92fe66e2d99f700eab17a8d57d1c1d3b748380fb20baa78cd"
SRC_URI[serde-1.0.149.sha256sum] = "256b9932320c590e707b94576e3cc1f7c9024d0ee6612dfbcf1cb106cbe8e055"
SRC_URI[serde_derive-1.0.149.sha256sum] = "b4eae9b04cbffdfd550eb462ed33bc6a1b68c935127d008b27444d08380f94e4"
SRC_URI[serde_json-1.0.92.sha256sum] = "7434af0dc1cbd59268aa98b4c22c131c0584d2232f6fb166efb993e2832e896a"
SRC_URI[serde_repr-0.1.10.sha256sum] = "9a5ec9fa74a20ebbe5d9ac23dac1fc96ba0ecfe9f50f2843b52e537b10fbcb4e"
SRC_URI[sha1-0.10.5.sha256sum] = "f04293dc80c3993519f2d7f6f511707ee7094fe0c6d3406feb330cdb3540eba3"
SRC_URI[sharded-slab-0.1.4.sha256sum] = "900fba806f70c630b0a382d0d825e17a0f19fcd059a2ade1ff237bcddf446b31"
SRC_URI[signal-hook-registry-1.4.0.sha256sum] = "e51e73328dc4ac0c7ccbda3a494dfa03df1de2f46018127f60c693f2648455b0"
SRC_URI[slab-0.4.7.sha256sum] = "4614a76b2a8be0058caa9dbbaf66d988527d86d003c11a94fbd335d7661edcef"
SRC_URI[smallvec-1.10.0.sha256sum] = "a507befe795404456341dfab10cef66ead4c041f62b8b11bbb92bffe5d0953e0"
SRC_URI[socket2-0.4.7.sha256sum] = "02e2d2db9033d13a1567121ddd7a095ee144db4e1ca1b1bda3419bc0da294ebd"
SRC_URI[static_assertions-1.1.0.sha256sum] = "a2eb9349b6444b326872e140eb1cf5e7c522154d69e7a0ffb0fb81c06b37543f"
SRC_URI[syn-1.0.105.sha256sum] = "60b9b43d45702de4c839cb9b51d9f529c5dd26a4aff255b42b1ebc03e88ee908"
SRC_URI[tempfile-3.3.0.sha256sum] = "5cdb1ef4eaeeaddc8fbd371e5017057064af0911902ef36b39801f67cc6d79e4"
SRC_URI[termcolor-1.2.0.sha256sum] = "be55cf8942feac5c765c2c993422806843c9a9a45d4d5c407ad6dd2ea95eb9b6"
SRC_URI[thiserror-impl-1.0.37.sha256sum] = "982d17546b47146b28f7c22e3d08465f6b8903d0ea13c1660d9d84a6e7adcdbb"
SRC_URI[thiserror-1.0.37.sha256sum] = "10deb33631e3c9018b9baf9dcbbc4f737320d2b576bac10f6aefa048fa407e3e"
SRC_URI[thread_local-1.1.4.sha256sum] = "5516c27b78311c50bf42c071425c560ac799b11c30b31f87e3081965fe5e0180"
SRC_URI[tokio-macros-1.8.2.sha256sum] = "d266c00fde287f55d3f1c3e96c500c362a2b8c695076ec180f27918820bc6df8"
SRC_URI[tokio-util-0.7.4.sha256sum] = "0bb2e075f03b3d66d8d8785356224ba688d2906a371015e225beeb65ca92c740"
SRC_URI[tokio-1.23.0.sha256sum] = "eab6d665857cc6ca78d6e80303a02cea7a7851e85dfbd77cbdc09bd129f1ef46"
SRC_URI[toml-0.5.10.sha256sum] = "1333c76748e868a4d9d1017b5ab53171dfd095f70c712fdb4653a406547f598f"
SRC_URI[tracing-attributes-0.1.23.sha256sum] = "4017f8f45139870ca7e672686113917c71c7a6e02d4924eda67186083c03081a"
SRC_URI[tracing-core-0.1.30.sha256sum] = "24eb03ba0eab1fd845050058ce5e616558e8f8d8fca633e6b163fe25c797213a"
SRC_URI[tracing-error-0.2.0.sha256sum] = "d686ec1c0f384b1277f097b2f279a2ecc11afe8c133c1aabf036a27cb4cd206e"
SRC_URI[tracing-subscriber-0.3.16.sha256sum] = "a6176eae26dd70d0c919749377897b54a9276bd7061339665dd68777926b5a70"
SRC_URI[tracing-0.1.37.sha256sum] = "8ce8c33a8d48bd45d624a6e523445fd21ec13d3653cd51f681abf67418f54eb8"
SRC_URI[typenum-1.16.0.sha256sum] = "497961ef93d974e23eb6f433eb5fe1b7930b659f06d12dec6fc44a8f554c0bba"
SRC_URI[uds_windows-1.0.2.sha256sum] = "ce65604324d3cce9b966701489fbd0cf318cb1f7bd9dd07ac9a4ee6fb791930d"
SRC_URI[unicode-ident-1.0.5.sha256sum] = "6ceab39d59e4c9499d4e5a8ee0e2735b891bb7308ac83dfb4e80cad195c9f6f3"
SRC_URI[valuable-0.1.0.sha256sum] = "830b7e5d4d90034032940e4ace0d9a9a057e7a45cd94e6c007832e39edb82f6d"
SRC_URI[value-bag-1.0.0-alpha.9.sha256sum] = "2209b78d1249f7e6f3293657c9779fe31ced465df091bbd433a1cf88e916ec55"
SRC_URI[version_check-0.9.4.sha256sum] = "49874b5167b65d7193b8aba1567f5c7d93d001cafc34600cee003eda787e483f"
SRC_URI[waker-fn-1.1.0.sha256sum] = "9d5b2c62b4012a3e1eca5a7e077d13b3bf498c4073e33ccd58626607748ceeca"
SRC_URI[wasi-0.11.0+wasi-snapshot-preview1.sha256sum] = "9c8d87e72b64a3b4db28d11ce29237c246188f4f51057d65a7eab63b7987e423"
SRC_URI[wasm-bindgen-backend-0.2.83.sha256sum] = "4c8ffb332579b0557b52d268b91feab8df3615f265d5270fec2a8c95b17c1142"
SRC_URI[wasm-bindgen-futures-0.4.33.sha256sum] = "23639446165ca5a5de86ae1d8896b737ae80319560fbaa4c2887b7da6e7ebd7d"
SRC_URI[wasm-bindgen-macro-support-0.2.83.sha256sum] = "07bc0c051dc5f23e307b13285f9d75df86bfdf816c5721e573dec1f9b8aa193c"
SRC_URI[wasm-bindgen-macro-0.2.83.sha256sum] = "052be0f94026e6cbc75cdefc9bae13fd6052cdcaf532fa6c45e7ae33a1e6c810"
SRC_URI[wasm-bindgen-shared-0.2.83.sha256sum] = "1c38c045535d93ec4f0b4defec448e4291638ee608530863b1e2ba115d4fff7f"
SRC_URI[wasm-bindgen-0.2.83.sha256sum] = "eaf9f5aceeec8be17c128b2e93e031fb8a4d469bb9c4ae2d7dc1888b26887268"
SRC_URI[web-sys-0.3.60.sha256sum] = "bcda906d8be16e728fd5adc5b729afad4e444e106ab28cd1c7256e54fa61510f"
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
SRC_URI[zbus-3.7.0.sha256sum] = "379d587c0ccb632d1179cf44082653f682842f0535f0fdfaefffc34849cc855e"
SRC_URI[zbus_macros-3.7.0.sha256sum] = "66492a2e90c0df7190583eccb8424aa12eb7ff06edea415a4fff6688fae18cf8"
SRC_URI[zbus_names-2.5.0.sha256sum] = "f34f314916bd89bdb9934154627fab152f4f28acdda03e7c4c68181b214fe7e3"
SRC_URI[zvariant-3.10.0.sha256sum] = "576cc41e65c7f283e5460f5818073e68fb1f1631502b969ef228c2e03c862efb"
SRC_URI[zvariant_derive-3.10.0.sha256sum] = "0fd4aafc0dee96ae7242a24249ce9babf21e1562822f03df650d4e68c20e41ed"
