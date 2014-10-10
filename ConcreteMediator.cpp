#include "StandartLibs.h"
#include "CustomLibs.h"

void ConcreteMediator::SetArmy1(ConcreteArmy *c)
{
	army1_ = c;
}

void ConcreteMediator::SetArmy2(ConcreteArmy *c)
{
	army2_ = c;
}

void ConcreteMediator::Send(string const& message, Army *Army) const
{
	if (Army == army1_)
	{
		army2_->Notify(message);
	}
	else if (Army == army2_)
	{
		army1_->Notify(message);
	}
}
