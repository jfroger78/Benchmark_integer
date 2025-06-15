cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Benchmark_entier)

# Définir le standard C++
set(CMAKE_CXX_STANDARD 17)

# Ajouter l'exécutable
add_executable(main_int main_int.cpp)
add_executable(main_uint main_uint.cpp)

add_executable(main_int8 main_int8.cpp)
add_executable(main_uint8 main_uint8.cpp)

add_executable(main_int16 main_int16.cpp)
add_executable(main_uint16 main_uint16.cpp)

add_executable(main_int32 main_int32.cpp)
add_executable(main_uint32 main_uint32.cpp)

add_executable(main_int64 main_int64.cpp)
add_executable(main_uint64 main_uint64.cpp)