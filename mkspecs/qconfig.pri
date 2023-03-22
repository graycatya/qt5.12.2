!host_build {
    QMAKE_CFLAGS    += --sysroot=$$[QT_SYSROOT]
    QMAKE_CXXFLAGS  += --sysroot=$$[QT_SYSROOT]
    QMAKE_LFLAGS    += --sysroot=$$[QT_SYSROOT]
}
host_build {
    QT_ARCH = x86_64
    QT_BUILDABI = x86_64-little_endian-lp64
    QT_TARGET_ARCH = arm64
    QT_TARGET_BUILDABI = arm64-little_endian-lp64
} else {
    QT_ARCH = arm64
    QT_BUILDABI = arm64-little_endian-lp64
}
QT.global.enabled_features = cross_compile shared c++11 c++14 c99 c11 thread future concurrent pkg-config
QT.global.disabled_features = framework rpath appstore-compliant debug_and_release simulator_and_device build_all c++1z force_asserts separate_debug_info static
PKG_CONFIG_SYSROOT_DIR = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot
PKG_CONFIG_LIBDIR = /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/pkgconfig:/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/share/pkgconfig:/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/aarch64-buildroot-linux-gnu/pkgconfig
CONFIG += cross_compile shared release
QT_CONFIG += shared release c++11 c++14 concurrent dbus reduce_exports release_tools stl
QT_VERSION = 5.12.2
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 12
QT_PATCH_VERSION = 2
QT_GCC_MAJOR_VERSION = 6
QT_GCC_MINOR_VERSION = 5
QT_GCC_PATCH_VERSION = 0
QT_EDITION = OpenSource
