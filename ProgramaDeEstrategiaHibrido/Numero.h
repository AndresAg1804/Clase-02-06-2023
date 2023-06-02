#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Numero
{
private:
	int valor;
public:
	Numero(int = 0);
	virtual ~Numero();
	int getValor();
	void setValor(int);
	string toString();
};

