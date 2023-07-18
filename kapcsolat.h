#pragma once
#include<iostream>
#include"operatorInterface.h"
#include<cstdlib>  // srand(), rand()
#include<vector>
#include<time.h>
#include"Keszulek.h"
#include<ctime>

using namespace std;



class Kapcsolat :public callInterface<Keszulek> {



	Keszulek* k1;
	Keszulek* k2;
	callInterface* p1;
	callInterface* p2;

public:

	Kapcsolat(vector<callInterface&> pitem);    //vector adatstrukturabol veletlenszeruen inicializalja a tagvaltozokat, mely a callinterface osztaly modositja-> oda vissza kommunikacio

	void call();            //randomizalt hivasgeneralas a vector adattagokbol, hivas dijaval ter vissza,
	


};



