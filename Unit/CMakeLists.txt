cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Unit)					# Название проекта

set(SOURCE_LIB Unit.cpp)			# Установка переменной со списком исходников

add_library(Unit STATIC ${SOURCE_LIB})		# Создание статической библиотеки