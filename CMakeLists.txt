cmake_minimum_required(VERSION 3.11.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        main # release-1.10.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg

project(Parentheses)

set(SRC_LIST
    src/Parentheses.cpp
)

include_directories(inc)
add_library(${PROJECT_NAME}-lib ${SRC_LIST})
add_executable(${PROJECT_NAME} src/main.cpp)
target_compile_options(${PROJECT_NAME} PUBLIC -Wall -Werror -Wpedantic -Wextra)

if (UNIX)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib pthread)
else (UNIX)
    target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}-lib)
endif (UNIX)

set(GTEST_SRC_LIST
    test_gtest/ParenthesesTests.cpp
    test_gtest/test_main.cpp
)

link_libraries(gtest)
add_executable(${PROJECT_NAME}-gtest ${GTEST_SRC_LIST})
target_compile_options(${PROJECT_NAME}-gtest PUBLIC -Wall -Werror -Wpedantic -Wextra)
target_link_libraries(${PROJECT_NAME}-gtest ${PROJECT_NAME}-lib)


set(CATCH_SRC_LIST
    test_catch/ParenthesesTests.cpp
)

add_executable(${PROJECT_NAME}-catch ${CATCH_SRC_LIST})
target_compile_options(${PROJECT_NAME}-catch PUBLIC -Wall -Werror -Wpedantic -Wextra)
target_link_libraries(${PROJECT_NAME}-catch ${PROJECT_NAME}-lib)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME}-ut)
