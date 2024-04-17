include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

target_include_directories(super_library PUBLIC
    "${PROJECT_SOURCE_DIR}/test"
)

# Enable testing in the project (add "test" target)
enable_testing()

add_executable(test_run test_run.cpp)
target_link_libraries(
  test_run
  GTest::gtest_main
  super_library
)

include(GoogleTest)
gtest_discover_tests(test_run)
