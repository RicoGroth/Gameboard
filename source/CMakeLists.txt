set(TARGET_NAME GameBoard2D)
add_library(${TARGET_NAME}
    cpp/GameBoard2D.cpp
)
target_include_directories(${TARGET_NAME}
    PUBLIC include
)