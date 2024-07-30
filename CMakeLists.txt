cmake_minimum_required(VERSION 3.12)

project(CmakeTutorial
    VERSION 1.0 
    DESCRIPTION "Very nice project"
    LANGUAGES C
    )

    
add_library(MyLib STATIC 
    MyLibrary.h 
    MyLibrary.c
)

# Find all .c files in multiple directories
file(GLOB_RECURSE SOURCES "src/*.c" "other_src/*.c")

# Find all .h files in multiple directories
file(GLOB_RECURSE HEADERS "include/*.h" "other_include/*.h")

add_executable(${PROJECT_NAME}  ${SOURCES})

target_link_libraries(${PROJECT_NAME} MyLib)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND $<TARGET_FILE:${PROJECT_NAME}>
                   COMMENT "Running my_program after build\n")
