AUX_SOURCE_DIRECTORY(./ DIR_SRCS)

ADD_LIBRARY(MathFunctions SHARED ${DIR_SRCS})
set_target_properties(MathFunctions PROPERTIES VERSION 1.2 SOVERSION 1)
ADD_LIBRARY(MathFunctions_static ${DIR_SRCS})
set_target_properties(MathFunctions_static PROPERTIES OUTPUT_NAME MathFunctions)
install(TARGETS MathFunctions MathFunctions_static
	RUNTIME DESTINATION bin
	LIBRARY DESTINATION lib
	ARCHIVE DESTINATION lib
)
