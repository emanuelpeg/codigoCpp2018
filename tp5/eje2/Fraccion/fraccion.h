#ifndef FRACCION_H
#define FRACCION_H

class Fraccion
{
private:
    int nro;
    int denominador;
    int calcularMcd(int nro, int denominador);
public:
    Fraccion(int nro);
    Fraccion(int nro, int denominador);

    Fraccion suma(Fraccion f);
    Fraccion resta(Fraccion f);
    Fraccion multiplicar(Fraccion f);
    Fraccion dividir(Fraccion f);
    double mostrarFraccion();
};

#endif // FRACCION_H
