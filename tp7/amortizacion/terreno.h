#ifndef TERRENO_H
#define TERRENO_H

#include <iostream>
#include "bien.h"

class Terreno : public Bien
{
public:
    Terreno();

    char * nombre();

    double amortizar();
};

#endif // TERRENO_H
