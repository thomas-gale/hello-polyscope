cmake_minimum_required(VERSION 3.17.2)
project(hellopolyscope
	VERSION 0.1.0
	DESCRIPTION "Experimenting with Polyscope"
	LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)

# Eigen
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

# Polyscope
add_subdirectory(lib/polyscope)

# Main executable
add_executable(main
	src/main.cpp)

target_include_directories(main PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/lib/libigl/include")

target_link_libraries(main PUBLIC polyscope Eigen3::Eigen)

# Resources
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
