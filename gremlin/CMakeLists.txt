cmake_minimum_required(VERSION 3.16)
project(LLP2_Gremlin C)

set(CMAKE_C_STANDARD 11)

include_directories(include)
include_directories(include/stools)
include_directories(include/view_tools)

set(CMAKE_CURRENT_SOURCE_DIR .)
set(SOURCES work/stools/string_tools.c work/stools/printer.c work/view_tools/parser_pieces.c work/view_tools/alloc_view.c)
set(HEADERS include/stools/printer.h include/stools/string_tools.h include/view_tools/alloc_view.h include/view_tools/parser_pieces.h include/structure.h)

add_library(gremlin_lib SHARED ${SOURCES} ${HEADERS})
target_include_directories(gremlin_lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})