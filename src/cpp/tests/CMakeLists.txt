SET(TEST_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/TrashTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BigMessageTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/BigBinTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/UniversalDiffTests.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/core/UnitTestsCore.h
    ${CMAKE_CURRENT_SOURCE_DIR}/core/UnitTestsCore.cpp)

source_group("tests" FILES ${TEST_SOURCES})
target_sources(conf_protobuf PUBLIC ${TEST_SOURCES})