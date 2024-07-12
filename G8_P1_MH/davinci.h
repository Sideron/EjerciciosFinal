#include <iostream>
class Letra
{
public:
    int numero;
    std::string caracter;
    Letra *siguinte;
    Letra(int numero, std::string caracter);
    void mostrarNumero();
    void mostrarLetra();
};

class Frase
{
public:
    Letra *primer;
    Letra *ultimo;
    Frase();
    void AgregarLetra(int num, std::string caracter);
    void PrintDebug();
    void reordenarDavinci();
    void fibo(int *a, int *b);
    Letra *extraerLetra(int num);
};