cmake_minimum_required(VERSION 3.0.2) 		# Проверка версии CMake

project(a_and_pps_1)				# Название проекта

set(SOURCE_EXE main.cpp)			# Установка переменной со списком исходников

include_directories(
		Archer 
		Army 
		CompositeUnit 
		ConcreteArmy
		ConcreteMediator
		Horseman
		Infantryman
		Mediator
		Unit
)						# Расположение заголовочных файлов

add_executable(main ${SOURCE_EXE})		# Создает исполняемый файл с именем main

add_subdirectory(Archer) 
add_subdirectory(Army)
add_subdirectory(CompositeUnit) 
add_subdirectory(ConcreteArmy)
add_subdirectory(ConcreteMediator)
add_subdirectory(Horseman)
add_subdirectory(Infantryman)
add_subdirectory(Mediator)
add_subdirectory(Unit)				# Добавление подпроектов

target_link_libraries(main 
		Archer 
		Army 
		CompositeUnit 
		ConcreteArmy
		ConcreteMediator
		Horseman
		Infantryman
		Mediator
		Unit

)						# Линковка программы с библиотекой