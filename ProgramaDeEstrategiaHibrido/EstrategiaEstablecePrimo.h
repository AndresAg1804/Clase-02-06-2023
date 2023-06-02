#pragma once
#include "EstrategiaAlgoritmica.h"
class EstrategiaEstablecePrimo :
    public EstrategiaAlgoritmica
{
public: 
    EstrategiaEstablecePrimo();
    virtual ~EstrategiaEstablecePrimo();
    bool evaluaNumero(Numero*);
};

