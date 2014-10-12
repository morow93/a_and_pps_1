cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Army)					# Название проекта

set(SOURCE_LIB Army.cpp)			# Установка переменной со списком исходников

add_library(Army STATIC ${SOURCE_LIB})		# Создание статической библиотеки