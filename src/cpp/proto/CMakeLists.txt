include(proto_sources.cmake)
source_group("tests" FILES ${PROTO_SOURCES})
target_sources(conf_protobuf PUBLIC ${PROTO_SOURCES})