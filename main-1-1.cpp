#include <iostream>
#include "Meerkat.h"

using namespace std;

// main program
int main()
{
	meerkat* one,* two,* three,* four;
	one->setName("apple");
	two->setName("banana");
	three->setName("coconut");
	four->setName("durian");
	one->setAge(2);
	two->setAge(4);
	three->setAge(3);
	four->setAge(5);

	cout << "Hi, I'm " << getName() << "and I'm a " << getAge() << "year old meerkat";
}