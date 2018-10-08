#include "listacircular.h"

template <class T>
ListaCircular<T>::ListaCircular()
{
    this->datos = std::vector<T>();
}

template <class T>
void ListaCircular<T>::agregar(T dato) {
    this->datos.push_back(dato);
}

template <class T>
T ListaCircular<T>::siguiente() {
    T dato = this->datos[indice];

    indice++;

    if (indice == this->datos.size()){
        indice = 0;
    }

    return dato;
}

template <class T>
int ListaCircular<T>::getIndice() {
    return indice;
}
