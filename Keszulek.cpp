#pragma once
#include"keszulek.h"


Keszulek::Keszulek(const MyLibSzolg::Szolgaltato& param) :szolgaltatom(&param) {
	avaible = 1;
	beszeltemdij = 0;
	egyenleg = 0;


}

void Keszulek::setAvaible() {
	avaible = !avaible;

}

Keszulek::Keszulek() {
	szolgaltatom = nullptr;
	avaible = 1;
	beszeltemdij = 0;
	egyenleg = 0;
}

double Keszulek::getEgyenleg() const {
	return egyenleg;

}

string Keszulek::getAvaible() const {

	return avaible > 0 ? "Elerheto" : "Foglalt";
}

ostream& operator<<(ostream& os, const Keszulek& other)  {
	os << "egyenlege a keszuleknek: " << other.getEgyenleg() << " , elerhetosege:" << other.getAvaible() << endl;
	return os;
}
void Keszulek::egyenleg_init() {
	egyenleg += 300;
}

bool Keszulek::operator+(Keszulek& other) {
	if (other.getAvaible() == "Elerheto") {
		other.setAvaible();
		this->setAvaible();
		return 1;
	}
	return 0; // kapcsolat osztaly lekezeli
}

bool Keszulek:: operator-(Keszulek& other) {
	if (other.getAvaible() == "Foglalt") {
		other.setAvaible();
		this->setAvaible();
		return 1;
	}
	return 0; // kapcsolat osztaly lekezeli

}

void Keszulek:: decreaseEgyenleg(double idoparam) {
	//szolgaltatom->check()  // percdij beallitasa csomagnak megfeleloen..
	double decrease_unit=szolgaltatom->getCsDij()* idoparam;
	egyenleg -= decrease_unit;
	
}