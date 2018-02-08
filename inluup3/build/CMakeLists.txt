# Kommentarer i CMakeLists.txt börjar med brädgård.
# Bör speca vilken version av CMake vi använder, för att slippa varning
cmake_minimum_required(VERSION 3.5)
# Våra flaggor till GCC.
set(CMAKE_C_FLAGS "-std=c99 -Wall -Werror -g")

# Program nr 3 heter task_3 och behöver bygga ihop både task_2.c och list.c.
add_executable(task_3 task_2.c list.c)
# ...

