#include "StandartLibs.h"
#include "CustomLibs.h"

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
