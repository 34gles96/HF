#pragma once

#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Serializacio {
public:
	virtual void deserializacio(ifstream& is) = 0;
	virtual void serializacio_(ofstream& os) = 0;

};
