#include "arbol.h"

template <class T>
Arbol<T>::Arbol(T dato)
{
    this->dato = dato;
}

template <class T>
void Arbol<T>::agregar(T otroDato){
    if (this->dato > otroDato) {
        if (this->izq != 0) {
            this->izq->agregar(otroDato);
        } else {
            this->izq = new Arbol<T>(otroDato);
        }
    } else {
        if (this->der != 0) {
            this->der->agregar(otroDato);
        } else {
            this->der = new Arbol<T>(otroDato);
        }
    }
}

template <class T>
ostream& operator<<(std::ostream& out, Arbol<T> const& a){
    if (a.izq !=0) {
        out << *(a.izq);
    }
    out << a.dato << "  ";
    if (a.der !=0) {
        out << *(a.der);
    }
    return out;
}

template<class T>
bool Arbol<T>::existe(T otroDato) {
    if (this->dato == otroDato)
        return true;
    if (this->dato > otroDato) {
        if (this->izq != 0) {
            return this->izq->existe(otroDato);
        } else {
            return false;
        }
    } else {
        if (this->der != 0) {
            return this->der->existe(otroDato);
        } else {
            return false;
        }
    }
}
