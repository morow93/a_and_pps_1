cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake
                                 
project(ConcreteArmy)				# Название проекта

set(SOURCE_LIB ConcreteArmy.cpp)		# Установка переменной со списком исходников

add_library(ConcreteArmy STATIC ${SOURCE_LIB})	# Создание статической библиотеки