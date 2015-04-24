#pragma once
#include "FabrykaFigur.h"
#include "Monitor.h"

class FabrykaFigurDlaKonsoli: FabrykaFigur
{
public:
	Figura* stworzKolo(Monitor* m);
	Figura* stworzProstokat(Monitor* m);
	Figura* stworzTrojkat(Monitor* m);
	FabrykaFigurDlaKonsoli(Monitor* m);
	~FabrykaFigurDlaKonsoli(void);
};
