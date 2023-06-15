#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Recipiente 
{
private:
    T* arreglo;
    int tamano;

public:
    Recipiente(T* elementos, int size) : arreglo(elementos), tamano(size) {}

    T getElemento(int indice) const {
        return arreglo[indice];
    }
    void setElemento(int indice, const T& elemento) {
        arreglo[indice] =elemento;
    }
    int getTamano() const {
        return tamano;
    }
    void imprimirElementos() const 
    {
        for (int i = 0; i < tamano; ++i) 
        {
            cout<<arreglo[i]<<" ";
        }
        cout<<endl;
    }
};

int main() 
{
    int enteros[] = {15, 12, 9, 3, 0};
    Recipiente<int> recipienteEnteros(enteros, 5);
    recipienteEnteros.imprimirElementos();

    string cadenas[] = {"Laboratorio", "9", "*carita asustada*"};
    Recipiente<string> recipienteCadenas(cadenas, 3);
    recipienteCadenas.imprimirElementos();

    return 0;
}