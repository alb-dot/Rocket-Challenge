cmake_minimum_required(VERSION "3.19.3")

project("rocket")

add_executable("${PROJECT_NAME}" "main.cpp" "RocketFunctions.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #${CMAKE_INSTALL_PREFIX}/bin
install(FILES "main.cpp" "RocketFunctions.cpp" DESTINATION arc) #${CMAKE_INSTALL_PREFIX}/arc

set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")
set_property(TARGET rocket PROPERTY CXX_STANDARD 17)