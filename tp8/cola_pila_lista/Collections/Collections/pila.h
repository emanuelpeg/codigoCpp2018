#ifndef PILA_H
#define PILA_H
#include "collection.h"
#include <stddef.h>

class Pila : public Collection
{
private:
    nodo * principio = NULL;
public:
    Pila();
    int siguiente();
    bool tieneSiguiente();
    void agregar(int i);
};

#endif // PILA_H
