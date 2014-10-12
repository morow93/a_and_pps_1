using namespace std;

// standart headers

#include <iostream>
#include <vector>
#include <string>

// custom headers

#include "Mediator.h"

#include "Unit.h"
#include "CompositeUnit.h"
#include "Army.h"
#include "ConcreteArmy.h"

ConcreteArmy::ConcreteArmy(string armyName_, Mediator* mediator) : Army(mediator)
{
	this->armyName_ = armyName_;
}

void ConcreteArmy::Send(string const& message)
{
	mediator_->Send(message, this);
}

void ConcreteArmy::Notify(string const& message)
{
	cout << armyName_ + " gets message \"" << message << "\"" << endl;
}
