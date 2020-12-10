
add_executable(day_02_part_1 src/part_1.c src/day_02.c)
add_executable(day_02_part_2 src/part_2.c src/day_02.c)

target_include_directories(day_02_part_1 PRIVATE ${PROJECT_SOURCE_DIR}/day_02/include)
target_include_directories(day_02_part_2 PRIVATE ${PROJECT_SOURCE_DIR}/day_02/include)
