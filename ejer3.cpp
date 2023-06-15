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
    Recipiente(T* n, int ta) : arreglo(n),tamano(ta){}
    T getN(int a) const 
    {
        return arreglo[a];
    }
    void setN(int a, const T& elemento) 
    {
        arreglo[a] =elemento;
    }
    int getTa() const 
    {
        return tamano;
    }
    void imprimir() const 
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
    recipienteEnteros.imprimir();

    string cadenas[] = {"Laboratorio", "9", "*carita asustada*"};
    Recipiente<string> recipienteCadenas(cadenas, 3);
    recipienteCadenas.imprimir();

    return 0;
}
