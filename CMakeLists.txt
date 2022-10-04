cmake_minimum_required(VERSION 3.16)
project(CentreMark)

# find_package(Vulkan REQUIRED)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_library(centremark SHARED source/lib.c)
target_include_directories(centremark PUBLIC include)
# target_include_directories(centremark PUBLIC ${Vulkan_INCLUDE_DIRS})
# target_link_libraries(centremark ${Vulkan_LIBRARIES})
