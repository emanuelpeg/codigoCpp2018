#include "lista.h"

Lista::Lista()
{
}

int Lista::siguiente(){
    nodo * aux = this->puntero;
    this->puntero = aux->siguiente;
    return aux->data;
}

bool Lista::tieneSiguiente() {
    return this->puntero != NULL;
}

void Lista::agregar(int i) {
    nodo * nuevo = new nodo;
    nuevo->data = i;
    nuevo->siguiente = NULL;
    if (this->final != NULL) this->final->siguiente = nuevo;
    this->final = nuevo;
    if (this->puntero == NULL) this->puntero = nuevo;
}
