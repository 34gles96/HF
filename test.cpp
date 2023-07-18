#pragma once
#include"loader.h"
#include"Person.h"
#include"elofizeto.h"

int main() {

	Person v;
	MyLibSzolg::Vodafone<Keszulek> vodafone;
	//v.addPerson("dalma");
	//v.addPerson("fanni");
	//Loader l("input.txt", "output.txt");
	//l.Load(v);  //deserializaciot ki kell javitani
	v.addPerson("janni", 122);

	Elofizeto elofizeto(v);
	Person v2(v);
	Keszulek nokia(vodafone);
	/*cout << v.nameAt(0) << endl;
	cout << v.ageAt(0) << endl;
	cout << v.nameAt(1) << endl;
	cout << v.ageAt(1) << endl;
	cout << v.ageAt(2) << endl; */
	cout << v2 << endl;
	cout << elofizeto << endl;
	cout << nokia << endl;
	getchar();
}