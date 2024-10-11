if(BUILD_TESTING)
    add_library(Unity STATIC
        Unity/src/unity.c
    )

    target_include_directories(Unity PUBLIC
        Unity/src
    )
endif()