# Minimum required CMake version
cmake_minimum_required(VERSION 3.10)

# Specify Cpp standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Export compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

# Project name with version
project(min_cmake_proj VERSION 0.0.1)

# Add executable target
add_executable(exec_target src/main.cpp)
target_include_directories(exec_target PUBLIC "src")

# Generate version file
configure_file(version.h.in version.h)
# Version file will be in build directory. We should add it
target_include_directories(exec_target PUBLIC "${PROJECT_BINARY_DIR}")

# Add subdirectory with library
add_subdirectory(src/super)
# Link library to the executable target
target_link_libraries(exec_target PUBLIC super_library)

# Add subdirectory with tests configuration
add_subdirectory(test)

