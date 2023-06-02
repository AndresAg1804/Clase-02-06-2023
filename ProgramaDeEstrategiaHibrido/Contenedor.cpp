#include "Contenedor.h"

Contenedor::Contenedor()
{
    can = 0;
    tam = 20;
    vec = new Numero * [tam];
    for (int i = 0; i < tam; i++) {
        vec[i] = nullptr;
    }
}

Contenedor::~Contenedor()
{
    for (int i = 0; i < can; i++) {
        delete vec[i];
    }
    delete[] vec;
}

Contenedor::Contenedor(const Contenedor&)
{
}

bool Contenedor::ingresaValor(Numero& obj)
{
    if (can < tam) {
        vec[can++] = (Numero*)&obj;
        return true;
    }
    return false;
}

Contenedor* Contenedor::activarClasificacion(EstrategiaAlgoritmica* est)
{
    Contenedor* CO2 = new Contenedor();
    for (int i = 0; i < can; i++) {
        if (est->evaluaNumero(vec[i]) == true) {
            Numero* ptr = new Numero(vec[i]->getValor());
            CO2->ingresaValor(*ptr);
        }
    }
    return CO2;
}

string Contenedor::toString()
{
    stringstream s;
    s << "----------Listado----------" << endl;
    for (int i = 0; i < can; i++)
    {
        s << vec[i]->toString() << endl;
    }
    return s.str();
}
