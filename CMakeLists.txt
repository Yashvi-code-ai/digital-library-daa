cmake_minimum_required(VERSION 3.16)
project(DigitalLibraryDAA VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
add_library(dlaa
  src/algorithms/strings.cpp src/algorithms/graphs.cpp src/algorithms/optimization.cpp
  src/domain/library.cpp src/search/search_engine.cpp src/recommendation/recommender.cpp
  src/persistence/csv.cpp src/benchmark/benchmark.cpp)
target_include_directories(dlaa PUBLIC include)
target_compile_options(dlaa PRIVATE $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>)
add_executable(digital-library src/main.cpp)
target_link_libraries(digital-library PRIVATE dlaa)
add_executable(dlaa_tests tests/test_main.cpp)
target_link_libraries(dlaa_tests PRIVATE dlaa)
enable_testing()
add_test(NAME dlaa_unit_tests COMMAND dlaa_tests)
