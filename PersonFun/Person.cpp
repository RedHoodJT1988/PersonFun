#include "Person.h"
#include <stdexcept>
using namespace std;

Person::Person(string name)
{
	setName(name);
}

string Person::getName() const noexcept
{
	return name;
}

void Person::setName(string name)
{
	if (name != "Jon")
	{
		this->name = name;
	}
	else
	{
		throw runtime_error("Jon? That guy can't be an object!");
	}
}