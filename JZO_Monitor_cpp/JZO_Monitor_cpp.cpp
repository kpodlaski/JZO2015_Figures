// JZO_Monitor_cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Figura.h"
#include "Kolo.h"
#include "Monitor.h"
#include "Konsola.h"
#include "Ekran.h"
#include "FabrykaFigur.h"
#include "FabrykaFigurDlaKonsoli.h"
#include <conio.h>
#include <cstdlib>
#include <iostream>


using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	Monitor * m = new Konsola();
	FabrykaFigur * factory = new FabrykaFigurDlaKonsoli(m);
	Figura * f =0;
	m->pokazEkran(Ekran::ekranMenu);
	int key;
	cin>>key;
	switch (key){
		case 1 : f=factory->stworzKolo(); break;
		case 2 : f=factory->stworzProstokat(); break;
		case 3 : f=factory->stworzTrojkat(); break;
	}
	m->narysuj(f);


	system("PAUSE");
	
	delete m;
	delete f;
	delete factory;
	return 0 ;
}

