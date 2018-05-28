#ifndef MUEBLE_H
#define MUEBLE_H

#include <iostream>
#include "bien.h"

class Mueble : public Bien
{
protected:
    int anioCreacion = 1900;
public:
    Mueble(int anioCreacion);
    double amortizar();

    char * nombre();

    void setAnioCreacion(int anioCreacion);
};

#endif // MUEBLE_H
