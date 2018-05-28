#ifndef BIEN_H
#define BIEN_H

#include <iostream>

class Bien
{
protected:
    double valor = 0.0;
public:
    Bien();
    double virtual amortizar() = 0;
    char virtual * nombre() = 0;

    void setValor(double valor);
};

#endif // BIEN_H
