SET(TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/BigMessageTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BigBinTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/DiffTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitTestsCore.h
    ${CMAKE_CURRENT_SOURCE_DIR}/UnitTestsCore.cpp)

source_group("tests" FILES ${TEST_SOURCES})
target_sources(conf_protobuf PUBLIC ${TEST_SOURCES})