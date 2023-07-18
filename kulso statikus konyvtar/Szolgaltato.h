#pragma once


#include<iostream>

namespace MyLibSzolg {

    class Szolgaltato {
    protected:
        double csevegesidij;
    public:
        virtual void check() = 0;
        double getCsDij() const;

    };


    class Telekom :public Szolgaltato {       //hivas szama alapjan ad kedvezmenyt a percdijbol ( csevegesidij)  
        const std::string name;
        int szamlalo;   // hivasok szamat tartja szamon a csevegesdiij inicializalasahoz
    public:
        void check() override;
        Telekom();
        void setSzamlalo(int szamlaloparam);

    };


    template<typename T>   // templattel szemben tamasztott kovetelmeny h 25-tel 'ertelmenesen' osszehasonlithato legyen
    class Vodafone :public Szolgaltato {
        const std::string name;
    public:
       
        void check() override;
        void check(const T& other);
        Vodafone();
    };


}




