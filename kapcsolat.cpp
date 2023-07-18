#include"kapcsolat.h"



Kapcsolat::Kapcsolat(vector < callInterface& >pitem) {
	int i, j, pitem_lenght_index = pitem.size() - 1;
	srand(time(NULL));  //random seed inicializalasa kulonbozo ertekekre mindalkalomkor, amikor a program fut
	i = rand() % pitem_lenght_index;
	j = rand() % pitem_lenght_index;
	p1 = &pitem.at(i);
	p2 = &pitem.at(j);
	k1 = dynamic_cast<Keszulek*>(p1);
	k2 = dynamic_cast<Keszulek*>(p2);
}


void Kapcsolat::call() {
	srand(time(NULL));
	double beszido = rand() % 5;  //max 5 ido megendegett a hivasra
	beszido *= CLOCKS_PER_SEC;
	clock_t now = clock();
	if (k1->getEgyenleg() > 0 && (k1->getAvaible() == "Elerheto") && k2->getAvaible()=="Elerheto") {
		*k1 + *k2;
		k1->decreaseEgyenleg(beszido);
	}

	while (clock() - now < beszido); // loop letrehozasa a beszelgetesre
	*k1 - *k2;     //hivas vege
}


