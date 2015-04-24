/**
 * Project Untitled
 */

#include "stdafx.h"
#include "Konsola.h"
#include "Kolo.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include <stdio.h>
#include <iostream>

using namespace std;

/**
 * Konsola implementation
 */


/**
 * @param trojkat
 */
void Konsola::narysuj(Trojkat * trojkat) {

}

/**
 * @param prostokat
 */
void Konsola::narysujP(Prostokat * prostokat) {

}

/**
 * @param kolo
 */
void Konsola::narysuj(Kolo * kolo) {
	cout<<"Rysuje Kolo"<< "x:"<<kolo->x<<" y:"<<kolo->y<< " r:"<<kolo->r<<endl;
}

void Konsola::narysuj(Figura * fig){
	Kolo * k = dynamic_cast<Kolo*> (fig);
	cout<<"NARYSUJ"<<endl;
	narysuj(k);
}

void Konsola::pokazEkran(int e){
	cout<<endl;
	cout<<"[1] - stwórz Ko³o"<<endl;
	cout<<"[2] - stwórz Prostok¹t"<<endl;
	cout<<"[3] - stwórz Trójk¹t"<<endl;
}

void Konsola::pokazText(string s){
	cout<<s<<endl;
}