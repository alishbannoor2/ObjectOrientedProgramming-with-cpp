
#include"Person.h"


int main()
{
	Name name("Ali", "Ahmed");
	Address address(231, "Lahore","Pakistan");
	Person p(name, &address, 19);
	p.display();
	system("pause");
	return 0;
}