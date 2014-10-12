cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Horseman)				# Название проекта

set(SOURCE_LIB Horseman.cpp)			# Установка переменной со списком исходников

add_library(Horseman STATIC ${SOURCE_LIB})	# Создание статической библиотеки