cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(CompositeUnit)				# Название проекта

set(SOURCE_LIB CompositeUnit.cpp)		# Установка переменной со списком исходников

add_library(CompositeUnit STATIC ${SOURCE_LIB})	# Создание статической библиотеки