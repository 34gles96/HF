#pragma once

#pragma once
//#include"Person.h"
#include"operatorInterFace.h"
#include"operatorInterface.h"
#include"SzolgaltatoLibary/Szolgaltato.h"


using namespace std;


class Keszulek :public callInterface<Keszulek> {


	double egyenleg;  //'feltolto kartyas telefonok'
	bool avaible;
	double beszeltemdij; // operator+ impelementalasahoz, egyenleg ujraertekelesehez
	const MyLibSzolg::Szolgaltato* szolgaltatom; //aggragacio

public:

	Keszulek();
	string getAvaible() const;

	double getEgyenleg() const;
	friend ostream& operator<<(ostream& os,  const Keszulek& ohter) ;  //elerhetosegre, hivasra valo állapot diagnosztiai celu kiiratasa
	void egyenleg_init();
	void setAvaible();
	bool operator+(Keszulek& other) override;
	bool operator-(Keszulek& other) override;
	Keszulek(const MyLibSzolg::Szolgaltato& param);
	void decreaseEgyenleg(double);









};