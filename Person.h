#pragma once
#include<iostream>
#include<sstream>
#include"serialization.h"

using namespace std;


class Person :public Serializacio {       //Fifo stilusu adatszerkezet elofizetok tarolasahoz, mely orkol interfacet az inicializaashoz egy adott fajlbol

	int* age;
	string* name;     //azonos indexu name asszocial az adott indexu age hez, es keszulekhez
	int counter;  //szamon tartja az elofitetok szamat
	int aktualis;


public:



	int ageAt(int) const;
	string nameAt(int) const;  //diagnosztikai celu
	void deserializacio(ifstream& is) override;
	void serializacio_(ofstream& os) override;




	Person();


	int getcounter() const;
	void addPerson(string nameparam, int ageparam);

	friend ostream& operator<<(ostream& os, const Person& other); //diagnosztikai celu kiirato operator
	~Person();

	Person(const Person& theOther);    // masolo konstruktor
	stringstream operator[](int a)const;   //adott a indexu adat stringstream objektum visszateressel az indexhez tartozo adatok szerint
	
	void inreaseAct();
    int getAct() const; 
};
