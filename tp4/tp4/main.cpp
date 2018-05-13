#include <iostream>

using namespace std;

int count(char * palabra) {
    int i = 0;
    while(palabra[i] != '\0') {
        i++;
    }
    i++;
    return i;
}

char * toupper(char * palabra) {
    int cant = count(palabra);
    char * palabraMayuscula = new char[cant];
    for(int i=0; i<cant; i++) {

        if(palabra[i] >= 'a' && palabra[i] <= 'z') {
            palabraMayuscula[i] = palabra[i] - 32;
        } else {
            palabraMayuscula[i] = palabra[i];
        }

    }

    return palabraMayuscula;
}

char * add(char * palabra, char otro) {
    int cant = count(palabra);
    char * palabraAux = new char[cant+1];

    for(int i = 0; i < cant-1; i++) {
        palabraAux[i] = palabra[i];
    }

    palabraAux[cant - 1] = otro;
    palabraAux[cant] = '\0';
    return palabraAux;
}

int main(int argc, char *argv[])
{
    char * palabra =  "Hello World!";
    cout << toupper(palabra) << endl;
    cout << add(palabra, '!') << endl;
    return 0;
}
