// standart header

#include <vector>

// custom headers

#include "..\Unit\Unit.h"
#include "CompositeUnit.h"

// Composite

int CompositeUnit::getStrength() {
	int total = 0;
	for (int i = 0; i < c.size(); ++i)
		total += c[i]->getStrength();
	return total;
}

void CompositeUnit::addUnit(Unit* p) {
	c.push_back(p);
}

CompositeUnit::~CompositeUnit() {
	for (int i = 0; i<c.size(); ++i)
		delete c[i];
}

CompositeUnit::CompositeUnit(){}
