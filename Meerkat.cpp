#include <iostream>
#include "Meerkat.h"

using namespace std;


meerkat::meerkat()
{
	name = "?";
	age = 0;
}

void meerkat::setName(string meerName)
{
	name = meerName;
}

string meerkat::getName()
{
	return name;
}

void meerkat::setAge(int meerAge)
{
	age = meerAge;
}

int meerkat::getAge()
{
	return age;
}


