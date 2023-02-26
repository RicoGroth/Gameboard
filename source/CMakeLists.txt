set(TARGET_NAME Gameboard2D)
add_library(${TARGET_NAME}
    cpp/Gameboard2D.cpp
)
target_include_directories(${TARGET_NAME}
    PUBLIC include
)