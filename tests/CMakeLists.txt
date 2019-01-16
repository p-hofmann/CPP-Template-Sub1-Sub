cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)

###############
# Unittests
###############

# Name the test project
set(TEST_PROJECT_NAME UnitTest_CppTemplateSub1Sub)
project(${TEST_PROJECT_NAME} VERSION 0.0.1 LANGUAGES CXX)

# Find out if the current architecture is 32 or 64 bit and
# This will add the equal of '#define BUILD_ARCH_64BIT' to each file in case of a 64bit architecture
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
    add_definitions(-DBUILD_ARCH_64BIT)
endif ()

# Gather src files that depending on a specific OS
set(SRC_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../src)
if (UNIX)
    if (APPLE AND ${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
        set(PLATFORM_DEPENENT_FILES ${SRC_LOCATION}/cpptemplatesub1sub_DARWIN.cpp)
    else ()
        set(PLATFORM_DEPENENT_FILES ${SRC_LOCATION}/cpptemplatesub1sub_LINUX.cpp)
    endif ()
elseif (WIN32)
    set(PLATFORM_DEPENENT_FILES ${SRC_LOCATION}/cpptemplatesub1sub_WIN32.cpp)
else ()
    message(SEND_ERROR "Unknown OS")
endif ()

# Project will be made into an executable
set(INCLUDE_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../include)
add_executable(${TEST_PROJECT_NAME}
    test_cpptemplatesub1sub.cpp
    ${PLATFORM_DEPENENT_FILES}
    ${INCLUDE_LOCATION}/namedclass.h
    ${INCLUDE_LOCATION}/cpptemplatesub1sub.h
    )

# get src location of catch
ExternalProject_Get_Property(catch2_project SOURCE_DIR)

# This will specify for this project only, /src and /include as the folders to look into for files
target_include_directories(${TEST_PROJECT_NAME}
    PUBLIC
        $<BUILD_INTERFACE:${INCLUDE_LOCATION}>
        $<INSTALL_INTERFACE:include>
        ${INCLUDE_LOCATION}
    PRIVATE
        ${SRC_LOCATION}
        ${SOURCE_DIR}/single_include/catch2
    )
# Note, that the catch2 library lcation was added

# Make sure that Catch2 exists
add_dependencies(${TEST_PROJECT_NAME} catch2_project)

# Adding test for 'ctest'
add_test(
    NAME ${TEST_PROJECT_NAME}
    COMMAND ${TEST_PROJECT_NAME})
