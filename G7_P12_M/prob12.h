#include <iostream>

class Nodo
{
public:
    int num;
    Nodo *siguiente;
    Nodo(int num);
    void mostrar();
};

class Pila
{
public:
    Nodo *primer;
    Pila();
    void push(int num);
    Nodo *pop();
    void mostrarElementos();
};