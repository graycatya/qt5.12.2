#!/bin/sh
PKG_CONFIG_SYSROOT_DIR=/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot
export PKG_CONFIG_SYSROOT_DIR
PKG_CONFIG_LIBDIR=/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/pkgconfig:/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/share/pkgconfig:/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/aarch64-buildroot-linux-gnu/sysroot/usr/lib/aarch64-buildroot-linux-gnu/pkgconfig
export PKG_CONFIG_LIBDIR
exec pkg-config "$@"
