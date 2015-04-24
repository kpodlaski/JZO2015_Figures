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
	virtual Figura* stworzKolo()=0;
	virtual Figura* stworzProstokat()=0;
	virtual Figura* stworzTrojkat()=0;
	FabrykaFigur(Monitor* m);
	~FabrykaFigur(void);
};

