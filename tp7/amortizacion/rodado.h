#ifndef RODADO_H
#define RODADO_H

#include <iostream>
#include "bien.h"

class Rodado : public Bien
{
protected:
    int km = 0;
public:
    Rodado();
    double amortizar();

    char * nombre();

    void setKm(int km);
};

#endif // RODADO_H
