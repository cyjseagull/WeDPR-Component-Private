file(GLOB_RECURSE SRCS *.cpp)
add_library(${RA2018_PSI_TARGET} ${SRCS})
target_link_libraries(${RA2018_PSI_TARGET} PUBLIC ${PSI_FRAMEWORK_TARGET} ${TARS_PROTOCOL_TARGET} ${TOOLS_TARGET})