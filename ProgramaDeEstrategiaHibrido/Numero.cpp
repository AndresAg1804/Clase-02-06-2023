#include "Numero.h"

Numero::Numero(int num) : valor(num)
{
}

Numero::~Numero()
{
}

int Numero::getValor()
{
    return valor;
}

void Numero::setValor(int)
{
}

string Numero::toString()
{
    stringstream s;
    s << "Valor: " << valor << endl;
    return s.str();
}
