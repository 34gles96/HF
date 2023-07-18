#include"Szolgaltato.h"

using namespace MyLibSzolg;


double Szolgaltato::getCsDij() const {
    return csevegesidij;
}


void Telekom:: check(){

    if (szamlalo >= 2 && szamlalo < 4) csevegesidij *= 0.8;
    if (szamlalo >= 4) csevegesidij *= 0.7;
    else csevegesidij = 300;


}

Telekom::Telekom() :name("telekom") {
    szamlalo = 0;
    
}


void Telekom::setSzamlalo(int szamlaloparam) {
    szamlalo = szamlaloparam;
}

template<typename T>
Vodafone<T>::Vodafone<T>() : name("Vodafone") {}

template<typename T>   // templattel szemben tamasztott kovetelmeny h 25-tel 'ertelmenesen' osszehasonlithato legyen
 void Vodafone<T>:: check(const T& other) {
        if (other.getage() > 25) csevegesidij = 320;
        else csevegesidij = 280;
    }

 template<typename T>
 void Vodafone<T> ::check()  {
     std::cout << "Vodafone" <<std:: endl;
 }

