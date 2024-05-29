#pragma once
class Car
{
public:
	Car();
	Car(char*, char*, float);
	void setName(char*);
	void setColor(char*);
	void setPrice(float);
	char* getName() const;
	char* getColor() const;
	float getPrice() const;
	void display() const;
	~Car();
private:
	char* name;
	char* color;
	float price;
};

