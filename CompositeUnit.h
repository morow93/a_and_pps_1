#pragma once

// Composite

class CompositeUnit :
	public Unit
{
public:
	int getStrength();

	void addUnit(Unit* p);

	CompositeUnit();

	~CompositeUnit();

private:
	std::vector<Unit*> c;
};
