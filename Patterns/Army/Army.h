#pragma once

#include "Unit/Unit.h"
#include "CompositeUnit/CompositeUnit.h"

class Mediator;

class Army :
	public CompositeUnit
{
protected:
	Mediator* mediator_;

public:
	explicit Army(Mediator *mediator);
};
