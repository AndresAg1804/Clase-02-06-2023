#pragma once
#include "EstrategiaAlgoritmica.h"
class EstrategiaEstableceImpar :
    public EstrategiaAlgoritmica
{
public:
    EstrategiaEstableceImpar();
    virtual bool evaluaNumero(Numero*);
};

