#pragma once

#include "Kolo.h"
#include "Prostokat.h"
#include "Trojkat.h"
#include "Ekran.h"
class FabrykaFigur
{
protected: 
	Monitor* m;
public:
	virtual Figura* stworzKolo(Monitor* m)=0;
	virtual Figura* stworzProstokat(Monitor* m)=0;
	virtual Figura* stworzTrojkat(Monitor* m)=0;
	FabrykaFigur(Monitor* m);
	~FabrykaFigur(void);
};

