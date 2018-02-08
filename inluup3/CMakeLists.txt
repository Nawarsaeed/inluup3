# Kommentarer i CMakeLists.txt börjar med brädgård.
# Bör speca vilken version av CMake vi använder, för att slippa varning
cmake_minimum_required(VERSION 3.5)
# Våra flaggor till GCC.
set(CMAKE_C_FLAGS "-std=c99 -Wall -Werror -g")

# Program nr 3 heter task_3 och behöver bygga ihop både task_2.c och list.c.
add_executable(task_1 task3_1.c)
add_executable(task_2 task3_2.c)
add_executable(task_3 task_2.c list.c)
add_executable(task_4 task_4.c double_stack_list.c)
add_executable(task_5 task3_55.c double_stack_array.c)

# ...

