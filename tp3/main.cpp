#include <iostream>

using namespace std;

int * agregarInicio(int * v, int cantidad, int nuevo) {
    int * aux = new int[cantidad+1];
    for (int i =0; i<cantidad; i++) {
        aux[i+1] = v[i];
    }
    aux[0] = nuevo;
    return aux;
}

int * agregar(int * v, int cantidad, int nuevo) {
    int * aux = new int[cantidad+1];
    for (int i =0; i<cantidad; i++) {
        aux[i] = v[i];
    }
    aux[cantidad] = nuevo;
    return aux;
}

int main(int argc, char *argv[])
{
    int v[] = {1,2,3};
    int * aux = agregar( v, 3, 4);

    for (int i = 0; i < 4; i++) {
        cout << aux[i] << " ";
    }

    cout << endl;

    aux = agregarInicio( aux, 4, 0);

    for (int i = 0; i < 5; i++) {
        cout << aux[i] << " ";
    }

}
