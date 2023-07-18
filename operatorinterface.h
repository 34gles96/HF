#pragma once



#include<iostream>



// absztrakt osztlay interface orokleshez
template<typename T>
class callInterface {
public:

	virtual bool operator+(T& other) = 0;
	virtual bool operator-(T& other) = 0;



};