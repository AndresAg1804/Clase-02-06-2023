#include "EstrategiaEstableceImpar.h"

EstrategiaEstableceImpar::EstrategiaEstableceImpar()
{
}

bool EstrategiaEstableceImpar::evaluaNumero(Numero* ptr)
{
	
	if (ptr->getValor() % 2 == 0) {
			return false;
	}
	
	return true;
}
