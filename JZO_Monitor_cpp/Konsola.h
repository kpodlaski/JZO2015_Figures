/**
 * Project Untitled
 */


#ifndef _KONSOLA_H
#define _KONSOLA_H

#include "stdafx.h"
#include "Monitor.h"
#include "Kolo.h"
#include "Prostokat.h"
#include "Trojkat.h"


class Konsola: public Monitor {
public: 
    
    /**
     * @param trojkat
     */
    void narysuj(Trojkat * trojkat);
    
    /**
     * @param prostokat
     */
	void narysujP(Prostokat * prostokat);
    
    /**
     * @param kolo
     */
    void narysuj(Kolo * kolo);

	virtual void narysuj(Figura * fig);
	virtual void pokazEkran(int e);
	virtual void pokazText(string s);
};

#endif //_KONSOLA_H