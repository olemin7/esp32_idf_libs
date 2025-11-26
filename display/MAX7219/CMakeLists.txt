idf_component_register( 
        SRCS
                font.cpp
                screen.cpp
                transformation.cpp
                layers.cpp
                tests.cpp
        INCLUDE_DIRS
                "." 
        REQUIRES 
                max7219
                freertos
                esp_event
                nvs_flash
                esp_wifi
        )

include(package_manager)
cu_pkg_define_version(${CMAKE_CURRENT_LIST_DIR})

