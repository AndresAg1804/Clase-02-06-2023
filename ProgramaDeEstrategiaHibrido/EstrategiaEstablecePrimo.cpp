#include "EstrategiaEstablecePrimo.h"

EstrategiaEstablecePrimo::EstrategiaEstablecePrimo()
{
}

EstrategiaEstablecePrimo::~EstrategiaEstablecePrimo()
{
}

bool EstrategiaEstablecePrimo::evaluaNumero(Numero* ptr)
{
	for (int i = 2; i < ptr->getValor() -1; i++)
	{
		if (ptr->getValor() % i == 0) {
			return false;
		}
	}
	return true;
}
