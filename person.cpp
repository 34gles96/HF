#include<iostream>
#include"Person.h"

#include"Person.h"



stringstream Person:: operator[](int a)const {
	stringstream ss;
	ss << name[a];  ss << age[a];
	return ss;
}



Person::Person() {   //default konstrukor
	age = 0;
	name = nullptr;
	counter = 0;
	aktualis= 0;


}

void Person::addPerson(string nameparam, int ageparam) {    //Fifo adatszerkezet szerinti névtarolas parametizalva
	string* tmp = new string[counter + 1];
	int* agetmp = new int[counter + 1];
	for (unsigned i = 0; i < counter; i++) {
		tmp[i] = name[i];
		agetmp[i] = age[i];
	}
	tmp[counter] = nameparam;
	agetmp[counter] = ageparam;
	delete[] name;
	delete[] age;
	name = tmp;
	age = agetmp;
	counter++;

}


void Person::deserializacio(ifstream& is) {
	stringstream ss;
	string buffer_line, firstdata;
	int seconddata;
	while (!is.eof()) {     //eof bit negalta-amedig el nem ertuk a fajl veget
		getline(is, buffer_line);
		ss << buffer_line;
		ss >> firstdata; ss >> seconddata;
		ss.str(" ");   //clear ss
		this->addPerson(firstdata, seconddata);
	}

}




ostream& operator<<(ostream& os, const Person& other) { //diagnosztikai celu adatkiirato operator
	string streamname;
	for (int i = 0; i < other.getcounter(); i++) {
		other[i] >> streamname; 
		os << "nameage: " << streamname << endl;

	}
	
	return os;

}

int Person::getcounter() const {
	return counter;
}

Person::~Person() {
	delete[] name;

}


void Person::serializacio_(ofstream& os) {
	unsigned i;
	for (i = 0; i < counter - 1; i++)
		os << name[i] << " ";
}



int Person::ageAt(int a) const {
	return age[a];

}




Person::Person(const Person& theOther) {

	counter = theOther.getcounter();
	aktualis = theOther.getAct();
	name = new string[counter];
	age = new int[counter];


	for (unsigned i = 0; i < counter; i++) {
		name[i] = theOther.nameAt(i);
		age[i] = theOther.ageAt(i);
	}
}


void Person::inreaseAct() {
	aktualis++;
}
int Person:: getAct() const {
	return aktualis;
}














string Person::nameAt(int n) const {
	if (n < counter)
		return name[n];
	else return "-1";

} //diagnosztikai celu