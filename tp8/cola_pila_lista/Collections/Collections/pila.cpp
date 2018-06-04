#include "pila.h"

Pila::Pila()
{
}

int Pila::siguiente(){
    nodo * aux = this->principio;
    principio = aux->siguiente;
    int i = aux->data;
    delete aux;
    return i;
}

bool Pila::tieneSiguiente() {
    return this->principio != NULL;
}

void Pila::agregar(int i) {
    nodo * nuevo = new nodo;
    nuevo->data = i;
    nuevo->siguiente = this->principio;
    principio = nuevo;
}
