#pragma once

#include <string>
using namespace std;

class Army;

class Mediator
{
public:
	virtual void Send(string const& message, Army *Army) const = 0;
};