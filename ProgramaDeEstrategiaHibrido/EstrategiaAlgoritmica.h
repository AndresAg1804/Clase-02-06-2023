#pragma once
#include "Numero.h"
class EstrategiaAlgoritmica
{
public:
	EstrategiaAlgoritmica();
	virtual ~EstrategiaAlgoritmica();
	virtual bool evaluaNumero(Numero*) = 0;
};


