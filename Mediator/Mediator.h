#pragma once

class Army;

class Mediator
{
public:
	virtual void Send(string const& message, Army *Army) const = 0;
};