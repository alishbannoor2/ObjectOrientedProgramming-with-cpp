#include "Name.h"


Name::Name()
{
	FirstName = "";
	LastName = "";
}
Name::Name(string f_n, string l_n){
	setFirstName(f_n);
	setLastName(l_n);
}
void Name::display(){

}
void Name::setFirstName(string f_n){
	FirstName = f_n;
}
void Name::setLastName(string l_n){
	LastName = l_n;
}
string Name::getFirstName(){
	return FirstName;
}
string Name::getLastName(){
	return LastName;
}

Name::~Name()
{
}
