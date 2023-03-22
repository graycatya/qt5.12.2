#!/bin/sh
QT_VERSION=5.12.2
export QT_VERSION
QT_VER=5.12
export QT_VER
QT_VERSION_TAG=5122
export QT_VERSION_TAG
QT_INSTALL_DOCS=/usr/doc
export QT_INSTALL_DOCS
BUILDDIR=/home/xzysoft1/work/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/build/qt5charts-5.12.2/src/charts
export BUILDDIR
exec /home/xzysoft1/work/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/qdoc "$@"
