#pragma once
#include "FabrykaFigur.h"
#include "Monitor.h"

class FabrykaFigurDlaKonsoli: public  FabrykaFigur
{
public:
	Figura* stworzKolo();
	Figura* stworzProstokat();
	Figura* stworzTrojkat();
	FabrykaFigurDlaKonsoli(Monitor* m);
	~FabrykaFigurDlaKonsoli(void);
};

