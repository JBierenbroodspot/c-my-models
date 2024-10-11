enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)
# include_directories(${CMAKE_SOURCE_DIR}/lib/Unity/src)

# set(UNITY_SOURCES ${CMAKE_SOURCE_DIR}/lib/Unity/src/unity.c)

set(TEST_SOURCES test_perceptron.c)

add_executable(perc ${TEST_SOURCES})

target_link_libraries(perc src Unity)

add_test(NAME lol_test COMMAND perc)