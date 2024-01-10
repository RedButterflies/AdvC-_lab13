cmake_minimum_required(VERSION 3.23)
project(lab13_testy)

# Add the path to the Google Test source directory
add_subdirectory(googletest)

# Add your project's source files
add_executable(lab13_testy main.cpp functions.h functions.cpp functionsTest.cpp Number.cpp Number.h numberTests.cpp BankAccount.cpp BankAccount.h bankTests.cpp)

# Link Google Test libraries to your executable
target_link_libraries(lab13_testy gtest gtest_main)
target_link_libraries(lab13_testy gtest gtest_main gmock gmock_main)

set(CMAKE_CXX_STANDARD 17)
