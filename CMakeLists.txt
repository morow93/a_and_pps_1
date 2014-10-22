cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake

project(a_and_pps_1)				# Название проекта

set(SOURCE_EXE main.cpp)			# Установка переменной со списком исходников

include_directories(Patterns)			# Расположение заголовочных файлов

add_executable(main ${SOURCE_EXE})		# Создает исполняемый файл с именем main

add_subdirectory(Patterns) 			# Добавление подпроектов

target_link_libraries(main Patterns)		# Линковка программы с библиотекой