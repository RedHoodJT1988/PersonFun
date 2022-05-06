#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main()
{
	try
	{
		Person person1("Sondra");
		Person person2("Nicole");
		Person person3("Kaite");
		Person person4("Jon");

		cout << person1.getName() << endl;
		cout << person2.getName() << endl;
		cout << person3.getName() << endl;
		cout << person4.getName() << endl;

	}
	catch (const runtime_error& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}