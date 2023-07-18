
#include"Elofizeto.h"


Keszulek* Elofizeto::interfeszToPhone() {
	Keszulek* p = &myOwnPhone;
	return p;
}

Elofizeto::Elofizeto(Person& other) {

	if (other.getAct() < other.getcounter()) {
		name = other.nameAt(other.getAct());
		age = other.ageAt(other.getAct());
		other.inreaseAct();
	}
	

	else cout << "mar nincs tobb elofizeto a Person vektorban" << endl;
	
	
	
	
	 

}



void Elofizeto::buyPhone(const Keszulek& other) {  
	myOwnPhone = other;

}

ostream& operator<<(ostream& os, const Elofizeto& other) {
	os << "elofizeto neve: " << other.getName() <<"  "<<"kora: " << other.getAge() << endl;
	return os;

}


Elofizeto::Elofizeto() {
	name = "asd";
	age = 0;

}


string Elofizeto::getName() const {
	return name;
}
int Elofizeto::getAge() const {
	return age;

}