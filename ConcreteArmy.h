#pragma once

class ConcreteArmy :
	public Army
{
public:
	explicit ConcreteArmy(string armyName_, Mediator* mediator);

	void Send(string const& message);

	void Notify(string const& message);

private:
	string armyName_;
};
