using namespace std;

// standart headers

#include <iostream>
#include <vector>
#include <string>

// custom headers

#include "Mediator/Mediator.h"

#include "Unit/Unit.h"
#include "CompositeUnit/CompositeUnit.h"
#include "Army/Army.h"
#include "ConcreteArmy.h"

ConcreteArmy::ConcreteArmy(string armyName_, Mediator* mediator) : Army(mediator)
{
	this->armyName_ = armyName_;
}

void ConcreteArmy::Send(string message)
{
	mediator_->Send(message, this);
}

void ConcreteArmy::Notify(string message)
{
	cout << armyName_ + " gets message \"" << message << "\"" << endl;
}
