#pragma once

class Mediator;

class Army :
	public CompositeUnit
{
protected:
	Mediator* mediator_;

public:
	explicit Army(Mediator *mediator);
};
