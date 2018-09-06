#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct Nodo{
    int val;
    struct Nodo *ptr;
};

int main(){
    cout << "INICIO" << endl;
    struct Nodo *inicio;
    struct Nodo *nodo1;
    /*
    new asigna en forma dinamica la cantidad exacta de memoria requerida
    para contener un objeto o arreglo integrado en tiempo de ejecucion
    */
    nodo1 = new struct Nodo ();//inicializacion de la memoria dinamica
    inicio = nodo1;
    inicio->ptr = NULL;
    inicio->val=10;

    nodo1 = new struct Nodo ();
    inicio->ptr = nodo1;
    inicio->ptr->ptr=NULL;
    inicio->ptr->val=20;

    cout << "valor 1: " << inicio->val << endl;
    cout << "valor 2: " << inicio->ptr->val << endl;

    delete inicio;//liberar la memoria
    delete nodo1;//liberar memoria

    cin.get();
	return 0;
}
