file (GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
#file (GLOB_RECURSE INCLUDE_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*.hpp")

cmake_print_variables(SOURCE_FILES)
#cmake_print_variables(INCLUDE_FILES)

add_executable(Service ${SOURCE_FILES})
target_include_directories(Service PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
