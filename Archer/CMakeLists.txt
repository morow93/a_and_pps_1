cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Archer)					# Название проекта

set(SOURCE_LIB Archer.cpp)			# Установка переменной со списком исходников

add_library(Archer STATIC ${SOURCE_LIB})	# Создание статической библиотеки