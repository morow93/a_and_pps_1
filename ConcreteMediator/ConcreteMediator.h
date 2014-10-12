#pragma once

class ConcreteMediator :
	public Mediator
{
protected:
	ConcreteArmy *army1_;
	ConcreteArmy *army2_;
public:
	void SetArmy1(ConcreteArmy *c);

	void SetArmy2(ConcreteArmy *c);

	virtual void Send(string const& message, Army *Army) const;
};
