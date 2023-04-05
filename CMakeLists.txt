cmake_minimum_required(VERSION 3.16)
project(LLP_lab3 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(gremlin)
add_subdirectory(server)

add_subdirectory(protobuffer/nanopb)

include_directories(gremlin/include)
include_directories(protobuffer/nanopb)
include_directories(protobuffer)

add_executable(LLP3_server server.c
        protobuffer/nanopb/pb_encode.c
        protobuffer/nanopb/pb_decode.c
        protobuffer/nanopb/pb_common.c
        protobuffer/message.pb.c
        protobuffer/message.pb.h
        protobuffer/common.c
        protobuffer/nanopb/pb.h)

add_executable(LLP3_client client.c
        protobuffer/nanopb/pb_encode.c
        protobuffer/nanopb/pb_decode.c
        protobuffer/nanopb/pb_common.c
        protobuffer/message.pb.c
        protobuffer/common.c
        protobuffer/nanopb/pb.h)

target_link_libraries(LLP3_server gremlin_lib)
target_link_libraries(LLP3_server graph_lib)
target_link_libraries(LLP3_client gremlin_lib)