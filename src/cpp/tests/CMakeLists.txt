SET(TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/BigBinTests.h
    ${CMAKE_CURRENT_SOURCE_DIR}/BigBinTests.cpp)

source_group("tests" FILES ${TEST_SOURCES})
target_sources(conf_protobuf PUBLIC ${TEST_SOURCES})