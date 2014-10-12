cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(Mediator)				# Название проекта

set(SOURCE_LIB Mediator.cpp)			# Установка переменной со списком исходников

add_library(Mediator STATIC ${SOURCE_LIB})	# Создание статической библиотеки