include_directories(../)

add_executable(adderTest adderTest.c)

add_test(NAME adderTest COMMAND adderTest)

target_link_libraries(adderTest adder)