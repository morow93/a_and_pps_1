#pragma once

#include <string>

class Army;

class Mediator
{
public:
	Mediator();
	~Mediator();
	virtual void Send(std::string const& message, Army *Army) const = 0;
};