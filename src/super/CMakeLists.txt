# Add library
add_library(super_library super.cpp)
target_include_directories(super_library PUBLIC
    "${PROJECT_SOURCE_DIR}/src/super"
)
