add_library(MyLib STATIC
    src/MyLibrary.c
)

# Specify include directories for the first library
target_include_directories(MyLib
    PUBLIC ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/libs/MyLib/include
)