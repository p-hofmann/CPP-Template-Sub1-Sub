cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

#####
# Main Project
#####

# Have all executables in the bin folder, so continuous integratian can easily call them
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

# Name the project and add a version number
project(CppTemplateSub1Sub VERSION 0.0.2 LANGUAGES CXX)

# Find out if the current architecture is 32 or 64 bit and
# This will add the equal of '#define BUILD_ARCH_64BIT' to each file in case of a 64bit architecture
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    add_definitions(-DBUILD_ARCH_64BIT)
endif ()

# Gather src files that depending on a specific OS
if (UNIX)
    if (APPLE AND ${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
        set(PLATFORM_DEPENEND src/cpptemplatesub1sub_DARWIN.cpp)
    else ()
        set(PLATFORM_DEPENEND src/cpptemplatesub1sub_LINUX.cpp)
    endif ()
elseif (WIN32)
    set(PLATFORM_DEPENEND src/cpptemplatesub1sub_WIN32.cpp)
else ()
    message(SEND_ERROR "Unknown OS")
endif ()

# Make a static library
add_library(CppTemplateSub1Sub
    ${PLATFORM_DEPENEND}
    include/namedclass.h
    include/cpptemplatesub1sub.h
    )

# This will specify for this project only, /src and /include as the folders to look into for files
target_include_directories(CppTemplateSub1Sub
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    )

#####
# Add Unittest
#####
# clone catch2 from github
add_subdirectory(external)

# build unittests
enable_testing()
add_subdirectory(tests)
