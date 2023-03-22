
if (NOT TARGET Qt5::qdbuscpp2xml)
    add_executable(Qt5::qdbuscpp2xml IMPORTED)

    set(imported_location "/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/qdbuscpp2xml")
    _qt5_DBus_check_file_exists(${imported_location})

    set_target_properties(Qt5::qdbuscpp2xml PROPERTIES
        IMPORTED_LOCATION ${imported_location}
    )
endif()

if (NOT TARGET Qt5::qdbusxml2cpp)
    add_executable(Qt5::qdbusxml2cpp IMPORTED)

    set(imported_location "/home/pangxiongfei/work/project/rockchip/dicpen_rk3326_linux/buildroot/output/rockchip_rk3326_64/host/bin/qdbusxml2cpp")
    _qt5_DBus_check_file_exists(${imported_location})

    set_target_properties(Qt5::qdbusxml2cpp PROPERTIES
        IMPORTED_LOCATION ${imported_location}
    )
endif()

set(Qt5DBus_QDBUSCPP2XML_EXECUTABLE Qt5::qdbuscpp2xml)
set(Qt5DBus_QDBUSXML2CPP_EXECUTABLE Qt5::qdbusxml2cpp)
