cmake_minimum_required(VERSION 2.8) 		
                                 
project(Patterns)			

set(SOURCE_LIB 
	Archer/Archer.cpp
	Army/Army.cpp
	CompositeUnit/CompositeUnit.cpp
	ConcreteArmy/ConcreteArmy.cpp
	ConcreteMediator/ConcreteMediator.cpp
	Horseman/Horseman.cpp
	Infantryman/Infantryman.cpp
	Mediator/Mediator.cpp
	Unit/Unit.cpp)			

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
)

add_library(Patterns STATIC ${SOURCE_LIB})	
