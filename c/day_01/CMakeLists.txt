
add_executable(day_01_part_1 src/part_1.c src/day_01.c)
add_executable(day_01_part_2 src/part_2.c src/day_01.c)

target_include_directories(day_01_part_1 PRIVATE ${PROJECT_SOURCE_DIR}/day_01/include)
target_include_directories(day_01_part_2 PRIVATE ${PROJECT_SOURCE_DIR}/day_01/include)

