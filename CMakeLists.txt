cmake_minimum_required(VERSION 3.12)

project(App
    VERSION 1.0 
    DESCRIPTION "Very nice project"
    LANGUAGES C
)

file(GLOB_RECURSE SOURCES ${CMAKE_SOURCE_DIR}/src/*.c)
file(GLOB_RECURSE HEADERS ${CMAKE_SOURCE_DIR}/include/*.h)

#libraries
add_subdirectory(libs)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} MyLib)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND $<TARGET_FILE:${PROJECT_NAME}>
                   COMMENT "Running my_program after build\n")
