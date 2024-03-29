cmake_minimum_required(VERSION 3.10.2)
project(poo2_unit_1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${OUTPUT_DEBUG})
if(UNIX AND NOT APPLE)
    set(CMAKE_CXX_FLAGS -pthread)
    set(CMAKE_CXX_FLAGS "-m64 -Wa,-mbig-obj")
endif()

add_executable(poo2_unit_1
  main.cpp 
  p1.h p1.cpp
  p2.h p2.cpp
  p3.h p3.cpp
  p4.h p4.cpp
  number.h number.cpp
  search_odds.h search_odds.cpp
  calculate_pentagon.h calculate_pentagon.cpp
  quick_sort.h quick_sort.cpp
  test_1_1.cpp
  test_1_2.cpp
  test_1_3.cpp
  test_1_4.cpp
  test_2_1.cpp
  test_2_2.cpp
  test_2_3.cpp
  test_2_4.cpp
  test_3_1.cpp
  test_3_2.cpp
  test_3_3.cpp
  test_3_4.cpp
  test_4_1.cpp
  test_4_2.cpp
  test_4_3.cpp
  test_4_4.cpp
  )

configure_file(test_1_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_1_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_2_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_3_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_1.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_2.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_3.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(test_4_4.in ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)

# sort files
configure_file(in_4_1.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(in_4_2.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)
configure_file(in_4_4.txt ${CMAKE_RUNTIME_OUTPUT_DIRECTORY} COPYONLY)