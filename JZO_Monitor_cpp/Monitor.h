/**
 * Project Untitled
 */


#ifndef _MONITOR_H
#define _MONITOR_H

#include"Figura.h"
#include <string>
using namespace std;

class Monitor {
public: 
    
    /**
     * @param fig
     */
    virtual void narysuj(Figura * fig)=0;
	virtual void pokazEkran(int e)=0;
	virtual void pokazText(string s)=0;
};

#endif //_MONITOR_H