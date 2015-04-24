#include "stdafx.h"
#include "FabrykaFigurDlaKonsoli.h"
#include <iostream>

using namespace std;


FabrykaFigurDlaKonsoli::FabrykaFigurDlaKonsoli(Monitor* m): FabrykaFigur(m)
{
}


FabrykaFigurDlaKonsoli::~FabrykaFigurDlaKonsoli(void)
{
}

Figura* FabrykaFigurDlaKonsoli::stworzKolo(){
	int r,x,y;
	m->pokazText("Podaj promien");
	cin>>r;
	m->pokazText("Podaj X");
	cin>>x;
	m->pokazText("Podaj Y");
	cin>>y;
	return new Kolo(x,y,r);
}

Figura* FabrykaFigurDlaKonsoli::stworzProstokat(){
	return 0;
}

Figura* FabrykaFigurDlaKonsoli::stworzTrojkat(){
return 0;
}