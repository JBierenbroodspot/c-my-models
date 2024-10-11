set(SOURCES perceptron.c)

add_library(src STATIC ${SOURCES})

add_executable(main main.c)
target_link_libraries(main src)