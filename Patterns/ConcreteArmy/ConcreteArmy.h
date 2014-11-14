#pragma once

#include "Mediator/Mediator.h"

#include "Unit/Unit.h"
#include "CompositeUnit/CompositeUnit.h"
#include "Army/Army.h"
#include "ConcreteArmy.h"

class ConcreteArmy :
	public Army
{
public:
	explicit ConcreteArmy(string armyName_, Mediator* mediator);

	void Send(string message);

	void Notify(string message);

private:
	string armyName_;
};
