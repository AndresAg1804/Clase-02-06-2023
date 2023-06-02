#pragma once
#include"EstrategiaAlgoritmica.h"
#include "EstrategiaEstableceImpar.h"
#include "EstrategiaEstablecePrimo.h"
class Contenedor
{
private:
	Numero** vec;
	int can;
	int tam;
public:
	Contenedor();
	virtual ~Contenedor();
	Contenedor(const Contenedor&);
	bool ingresaValor(Numero&);
	Contenedor* activarClasificacion(EstrategiaAlgoritmica*);
	string toString();
};

