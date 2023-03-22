host_build {
    QT_CPU_FEATURES.x86_64 = mmx sse sse2
} else {
    QT_CPU_FEATURES.arm64 = neon crc32
}
QT.global_private.enabled_features = alloca_h alloca dbus dbus-linked gui libudev network posix_fallocate reduce_exports release_tools sql system-zlib testlib widgets xml
QT.global_private.disabled_features = sse2 alloca_malloc_h android-style-assets avx2 private_tests gc_binaries reduce_relocations stack-protector-strong
PKG_CONFIG_EXECUTABLE = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/pkg-config
QMAKE_LIBS_DBUS = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/libdbus-1.so
QMAKE_INCDIR_DBUS = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/include/dbus-1.0 /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/dbus-1.0/include
QMAKE_LIBS_LIBUDEV = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/libudev.so
QT_COORD_TYPE = double
QMAKE_LIBS_ZLIB = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib64/libz.so
CONFIG -= precompile_header
CONFIG += cross_compile compile_examples enable_new_dtags largefile neon
QT_BUILD_PARTS += libs
QT_HOST_CFLAGS_DBUS += -I/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/../aarch64-buildroot-linux-gnu/sysroot/usr/include/dbus-1.0 -I/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/../aarch64-buildroot-linux-gnu/sysroot/usr/lib/dbus-1.0/include
