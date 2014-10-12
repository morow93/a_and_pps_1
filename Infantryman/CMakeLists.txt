cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Infantryman)				# Название проекта

set(SOURCE_LIB Infantryman.cpp)			# Установка переменной со списком исходников

add_library(Infantryman STATIC ${SOURCE_LIB})	# Создание статической библиотеки