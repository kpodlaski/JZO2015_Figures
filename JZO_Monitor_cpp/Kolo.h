/**
 * Project Untitled
 */


#ifndef _KOLO_H
#define _KOLO_H

#include "Figura.h"


class Kolo: public Figura {
public: 
    
    /**
     * @param x
     * @param y
     * @param r
     */
	int x;
	int y;
	int r;
    Kolo(int x, int y, int r);
	virtual void przesun(int x, int y);
};

#endif //_KOLO_H