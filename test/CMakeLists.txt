include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)
set(TEST_NAME GameBoard_Test)
add_executable(${TEST_NAME}
    GameBoard2D_Test.cpp
)

target_link_libraries(${TEST_NAME}
    PRIVATE GTest::GTest
    PRIVATE GameBoard2D
)
 add_test(GameBoard_GTest ${TEST_NAME})