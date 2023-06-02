#include "Contenedor.h"

int main() {
	cout << "---Creando contenedor de numeros---\n";
	Contenedor* cns = new Contenedor();
	Contenedor* cni = NULL; //Puntero a contenedor
	Contenedor* cnpr = NULL;//Puntero a contenedor
	int op = 0, cant = 0, valor = 0;

	do {
		system("cls");
		cout << "---------------- Menu ----------------" << endl;
		cout << "--------------------------------------" << endl;
		cout << "1- Ingresar numeros manualmente" << endl;
		cout << "2- Crear contenedor de nums impares" << endl;
		cout << "3- Crear contenedor de nums primos" << endl;
		cout << "4- Salir" << endl;
		cout << "--------------------------------------" << endl << endl;

		cout << "Digite la opcion: ";
		cin >> op;
		switch (op) {
		case 1: {
			system("cls");
			cout << "Cuantos valores desea ingresar al contenedor general: ";
			cin >> cant;
			for (int i = 0; i < cant; i++)
			{
				cout << "Ingrese el valor: ";
				cin >> valor;
				cns->ingresaValor(*new Numero(valor));
				cout << endl;
			}
			cout << "Imprimiendo el contenedor " << endl;
			cout << cns->toString() << endl;
		}break;
		case 2: {
			system("cls");
			cni = cns->activarClasificacion(new EstrategiaEstableceImpar());
			cout << "Imprimiendo contenedor de nums impares" << endl;
			cout << cni->toString() << endl;
		}break;
		case 3: {
			system("cls");
			cnpr = cns->activarClasificacion(new EstrategiaEstablecePrimo());
			cout << "Imprimiendo contenedor de nums primos" << endl;
			cout << cnpr->toString() << endl;
		}break;
		case 4: {
			cout << "Muchas gracias" << endl << endl;
		}break;
		default: cout << "Error al seleccionar la opcion del menu\n"; break;
		}
		system("pause");
	} while (op != 4);
	delete cnpr;
	delete cns; 
	delete cni;


	return 0;
}