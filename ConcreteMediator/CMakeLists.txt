cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(ConcreteMediator)			# Название проекта

set(SOURCE_LIB ConcreteMediator.cpp)		# Установка переменной со списком исходников

add_library(ConcreteMediator STATIC ${SOURCE_LIB})	# Создание статической библиотеки