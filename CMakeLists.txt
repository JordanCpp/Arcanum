cmake_minimum_required(VERSION 2.9)

project(Arcanum)

if (WIN32)
    set(SDL2_INCLUDE_DIRS "../SDL2-2.28.1/include")

    if(CMAKE_SIZEOF_VOID_P EQUAL 8)
        link_directories("../SDL2-2.28.1/lib/x64/")
    elseif(CMAKE_SIZEOF_VOID_P EQUAL 4)
        link_directories("../SDL2-2.28.1/lib/x86/")
    endif()
else()
    find_package(SDL2 REQUIRED)
endif()

include_directories(${SDL2_INCLUDE_DIRS})

include_directories("source/")

file(GLOB_RECURSE SOURCE_FILES "source/*.cpp")

if (APPLE)
  add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${SOURCE_FILES})
else()
  add_executable(${PROJECT_NAME} ${SOURCE_FILES})
endif()

if (APPLE)
  target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
else()
  target_link_libraries(${PROJECT_NAME} SDL2main SDL2)
endif()
