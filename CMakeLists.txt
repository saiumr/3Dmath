cmake_minimum_required(VERSION 3.20)

project(
  Vector3D
  VERSION 0.1.0
  LANGUAGES CXX C
)

set(LOWLEVEL_NAME lowlevel)
aux_source_directory(src SRC)

add_library(${LOWLEVEL_NAME} STATIC ${SRC})
target_include_directories(${LOWLEVEL_NAME} PUBLIC include)
target_compile_features(${LOWLEVEL_NAME} PUBLIC cxx_std_17)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE ${SRC})
target_link_libraries(${PROJECT_NAME} PRIVATE ${LOWLEVEL_NAME})

# unittest
option(ENABLE_TEST "enable build unit test" ON)
if (ENABLE_TEST)
  enable_testing()
  add_subdirectory(test)
endif()
