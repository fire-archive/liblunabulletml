cmake_minimum_required(VERSION 3.5)

project(libbulletmlluna VERSION 0.0.1 LANGUAGES C CXX)
set(CMAKE_CXX_STANDARD 11)
set(DEBUG_ENABLED DEBUG_ENABLED DEBUG_MEMORY_ENABLED)
set(TOOLS_ENABLED TOOLS_ENABLED)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/sample/addons/libluna.bulletml/bin/windows.64)

add_library(libluna.bulletml
            SHARED
        "sample/addons/libluna.bulletml/src/Godot.cpp"
        "sample/addons/libluna.bulletml/src/libluna.bulletml.cpp"
        "thirdparty/libbulletml/src/bulletmlparser.cpp"
        "thirdparty/libbulletml/src/bulletmlparser-tinyxml.cpp"
        "thirdparty/libbulletml/src/bulletmlrunner.cpp"
        "thirdparty/libbulletml/src/bulletmlrunnerimpl.cpp"
        "thirdparty/libbulletml/src/bulletmltree.cpp"
        "thirdparty/libbulletml/src/calc.cpp"
        "thirdparty/libbulletml/src/formula-variables.cpp"
        "thirdparty/libbulletml/src/tinyxml/tinyxml.cpp"
        "thirdparty/libbulletml/src/tinyxml/tinyxmlerror.cpp"
        "thirdparty/libbulletml/src/tinyxml/tinyxmlparser.cpp")

target_include_directories(libluna.bulletml
                            PUBLIC
                            "thirdparty/godot-cpp/include"
                            "thirdparty/libbulletml/include"                            
                            "thirdparty/godot/modules/gdnative/include"
                            "thirdparty/godot-cpp/include"
                            "thirdparty/godot-cpp/include/gen"
                            "thirdparty/draco_features"
                            "thirdparty/godot-cpp/godot_headers"
                            "thirdparty/godot-cpp/include/core")

if(UNIX AND APPLE)
target_link_libraries(libluna.bulletml 
${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/godot-cpp/bin/libgodot-cpp.osx.release.64.a
"-framework Cocoa")
elseif(MSVC)
target_link_libraries(libluna.bulletml
${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/godot-cpp/bin/libgodot-cpp.windows.release.64.lib)
elseif(UNIX)
target_link_libraries(libluna.bulletml
${CMAKE_CURRENT_SOURCE_DIR}/thirdparty/godot-cpp/bin/libgodot-cpp.linux.release.64.a)
endif(UNIX AND APPLE)

file(COPY sample DESTINATION .)