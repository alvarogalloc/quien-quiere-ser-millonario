cmake_minimum_required(VERSION 3.30)
if(APP_USE_MODULES)
  set(CMAKE_EXPERIMENTAL_CXX_IMPORT_STD "0e5b6991-d74f-4b3d-a41c-cf096e0b2508")
  set(CMAKE_CXX_MODULE_STD ON)
endif()
project(
  quien-quiere-ser-millonario
  LANGUAGES CXX
  VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED YES)
set(CMAKE_CXX_EXTENSIONS ON)

set(HELLOIMGUI_MACOS_NO_BUNDLE OFF)

find_package(hello-imgui QUIET)
option (APP_BUILD_BUNDLE "Build bundle for macOS" OFF)
option (APP_USE_MODULES "Build with c++20 modules" OFF)

if (NOT hello-imgui_FOUND)
  message(STATUS "Fetching hello_imgui")
  include(FetchContent)
  FetchContent_Declare(hello_imgui GIT_REPOSITORY https://github.com/pthom/hello_imgui.git GIT_TAG master)
  FetchContent_MakeAvailable(hello_imgui)
endif()


if (APPLE AND APP_BUILD_BUNDLE)
  set(APP_NAME "Quién quiere ser millonario?")
  set(APP_EXECUTABLE "${PROJECT_NAME}")
  set(APP_ICON_FILE "Icon.icns")
  set(APP_AUTHOR "alvarogalloc")
else()
  set(APP_NAME "Millonario")
  set(APP_EXECUTABLE "${PROJECT_NAME}")
endif()


set(APP_RESOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/assets")

if(hello-imgui_FOUND)
  add_executable(${APP_EXECUTABLE} main.cpp)
else()
  hello_imgui_add_app(${APP_EXECUTABLE} main.cpp)
endif()
target_compile_features(${APP_EXECUTABLE} PUBLIC cxx_std_23)
if(NOT APP_USE_MODULES)
  target_compile_definitions(${APP_EXECUTABLE} PRIVATE DISABLE_MODULES)
else()
  target_sources(${APP_EXECUTABLE} PUBLIC FILE_SET cxx_modules TYPE CXX_MODULES
                                        FILES external.cppm)
endif()
target_link_libraries(${APP_EXECUTABLE} PRIVATE hello-imgui::hello_imgui)
set_target_properties(${APP_EXECUTABLE} PROPERTIES OUTPUT_NAME ${APP_NAME})


# remove emscripten
if(APPLE AND APP_BUILD_BUNDLE AND NOT EMSCRIPTEN)
  message(STATUS "Building bundle '.app' for macOS")

  file(GLOB_RECURSE APP_RESOURCES ${APP_RESOURCE_DIR}/*.*)
  # important the order of these lines, we want to track all resources but
  # exclude the some from copying to assets location
  target_sources(${APP_EXECUTABLE} PRIVATE ${APP_RESOURCES})
  list(FILTER APP_RESOURCES EXCLUDE REGEX ".*\\.in$")
  list(FILTER APP_RESOURCES EXCLUDE REGEX ".*\\.icns$")
  foreach(resource ${APP_RESOURCES})
    file(RELATIVE_PATH resource_relative ${APP_RESOURCE_DIR} ${resource})
    get_filename_component(resource_dir ${resource_relative} DIRECTORY)
    set_source_files_properties(
      ${resource} PROPERTIES MACOSX_PACKAGE_LOCATION
                             Resources/assets/${resource_dir})
  endforeach()
  # set icon
  message(STATUS "Setting icon file to ${APP_RESOURCE_DIR}/${APP_ICON_FILE}")
  set_source_files_properties(
    ${APP_RESOURCE_DIR}/${APP_ICON_FILE}
    PROPERTIES MACOSX_PACKAGE_LOCATION Resources/)

  set(plist_configured ${CMAKE_CURRENT_BINARY_DIR}/Info${app_name}.plist)
  configure_file(${CMAKE_SOURCE_DIR}/assets/Info.plist.in ${plist_configured}
                 @ONLY)
  set_target_properties(
    ${APP_EXECUTABLE} PROPERTIES MACOSX_BUNDLE TRUE MACOSX_BUNDLE_INFO_PLIST
                                                    ${plist_configured})
endif()
