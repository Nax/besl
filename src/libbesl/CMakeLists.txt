add_compile_definitions(BESL_BUILD=1)

file(GLOB_RECURSE SOURCES "*.c" "*.h")

add_library(libbesl         SHARED ${SOURCES})
add_library(libbesl_static  STATIC ${SOURCES})

target_compile_definitions(libbesl_static PRIVATE BESL_STATIC=1)

if (WIN32)
    set_target_properties(libbesl           PROPERTIES OUTPUT_NAME besl)
    set_target_properties(libbesl_static    PROPERTIES OUTPUT_NAME besls)
endif()
