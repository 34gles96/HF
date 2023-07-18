#pragma once


#include<iostream>
#include"serialization.h"




using namespace std;


class Loader {   //  osztaly, az adattagok betoltesere, illetve esetleges fajbamentese szerializacios megvalositassal

	ifstream ifs;
	ofstream ofs;
	string inputFile;
	string outputFile;

public:
	Loader(string infile, string outfile) :inputFile(infile), outputFile(outfile) {


	}

	void Load(Serializacio& item) {

		ifs.open(inputFile, ios::in);
		if (!ifs) cout << "hiba a fajl megnyitasa soran" << endl;
		item.deserializacio(ifs);
		ifs.close();
		if (!ifs) cout << "hiba a fajl bezarasa soran" << endl;


	}

	void Save(Serializacio& item) {    //fajlbairas 



		ofs.open(outputFile, ios::out);
		if (!ofs) cout << "hiba a fajl megnyitasa soran" << endl;
		item.serializacio_(ofs);
		ofs.close();
		if (!ofs) cout << "hiba a fajl bezarasa soran" << endl;


	}



};
