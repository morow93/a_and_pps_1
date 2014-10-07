#pragma once

// Base

class Unit
{
public:
	virtual int getStrength() = 0;

	virtual void addUnit(Unit* p);

	virtual ~Unit();
};
