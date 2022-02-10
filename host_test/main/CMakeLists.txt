idf_component_register(SRCS "TinyCoachHostTest.c"
                    INCLUDE_DIRS 
                    "."
                    REQUIRES cmock)

target_compile_options(${COMPONENT_LIB} PUBLIC --coverage)
target_link_libraries(${COMPONENT_LIB} --coverage)

