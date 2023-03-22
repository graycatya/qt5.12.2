#!/bin/sh
QT_VERSION=5.12.2
export QT_VERSION
QT_VER=5.12
export QT_VER
QT_VERSION_TAG=5122
export QT_VERSION_TAG
QT_INSTALL_DOCS=/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/build/qt5base-5.12.2/doc
export QT_INSTALL_DOCS
BUILDDIR=/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/build/qt5base-5.12.2/qmake
export BUILDDIR
exec /home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/qdoc "$@"
