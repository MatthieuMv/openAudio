cmake_minimum_required(VERSION 3.0.0)
project(openAudio)

set(oALibraryDir $ENV{OPENAPP_ROOT})
set(SourcesDir Sources)

if (UNIX)
    set(CMAKE_CXX_FLAGS "-Wall -Werror -Wextra")
endif ()

set(CMAKE_CXX_STANDARD 17)

set(oASources
    ${SourcesDir}/Audio.hpp
    ${SourcesDir}/Audio.cpp
    ${SourcesDir}/Voice.hpp
    ${SourcesDir}/Voice.cpp
)

#add_executable(openAudio ${oASources} Main.cpp)
add_library(openAudio SHARED ${oASources})

target_include_directories(openAudio
    PRIVATE ${oALibraryDir}
    PRIVATE ${SourcesDir}
)

target_link_directories(openAudio
    PRIVATE ${oALibraryDir}
)

target_link_libraries(openAudio
    openApp
    SDL2
)
