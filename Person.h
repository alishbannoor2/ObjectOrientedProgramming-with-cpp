
#include"Name.h"
#include"Address.h"
class Person
{
public:
	Name name;
	Address *address;
	int age;
	Person();
	Person(Name n, Address* a, int m);
	void display();
	Name getName();
	Address* getAddress();
	int getAge();
	void setName(Name);
	void setAddress(Address*);
	void setAge(int);
	~Person();

};

