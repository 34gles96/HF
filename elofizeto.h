#pragma once

#pragma once
#include"Person.h"
#include"Keszulek.h"

using namespace std;

class Elofizeto {   //Person osztaly-vektor elemeire (index szerinti asszociacioval) szeparalasa Elofizeto peldanyoistasahoz
	string name;
	int age;
	Keszulek myOwnPhone; //tartalmazas, mert 1 keszulek 1 elofizetohoz tartozik (specifikacio szerint)
public:
	Elofizeto();
	friend ostream& operator<<(ostream& os, const Elofizeto& other) ;
	Keszulek* interfeszToPhone();
	Elofizeto(Person& other);
	void buyPhone(const Keszulek& other);
	string getName() const;
	int getAge() const;
};