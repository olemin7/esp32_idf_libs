idf_component_register( 
        SRCS
                mqtt_wrapper.cpp
        INCLUDE_DIRS
                "." 
        REQUIRES 
                nvs_flash
                esp_wifi
                mqtt
        )
        

include(package_manager)
cu_pkg_define_version(${CMAKE_CURRENT_LIST_DIR})

