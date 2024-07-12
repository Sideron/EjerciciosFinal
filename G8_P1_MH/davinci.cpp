#include "davinci.h"

Letra::Letra(int numero, std::string caracter) : numero(numero), caracter(caracter){};

void Letra::mostrarNumero()
{
    std::cout << numero;
}

void Letra::mostrarLetra()
{
    std::cout << caracter;
}

Frase::Frase() : primer(nullptr), ultimo(nullptr){};

void Frase::AgregarLetra(int num, std::string caracter)
{
    Letra *l = new Letra(num, caracter);
    l->siguinte = nullptr;
    if (primer == nullptr)
    {
        primer = l;
        ultimo = l;
    }
    else
    {
        ultimo->siguinte = l;
        ultimo = l;
    }
}

void Frase::PrintDebug()
{
    Letra *ptr = primer;
    while (ptr != nullptr)
    {
        ptr->mostrarNumero();
        std::cout << "\t";
        ptr = ptr->siguinte;
    }
    std::cout << std::endl;
    ptr = primer;
    while (ptr != nullptr)
    {
        ptr->mostrarLetra();
        std::cout << "\t";
        ptr = ptr->siguinte;
    }
    std::cout << std::endl;
}

void Frase::reordenarDavinci()
{
    int num0 = 1;
    int num1 = 1;
    Letra *start = extraerLetra(num1);
    Letra *ptr = start;
    while (primer != nullptr)
    {
        fibo(&num0, &num1);
        Letra *letraTemp = extraerLetra(num1);
        if (letraTemp != nullptr)
        {
            ptr->siguinte = letraTemp;
        }
        else
        {
            ptr->siguinte = new Letra(num1, " ");
        }
        ptr = ptr->siguinte;
    }
    primer = start;
}

void Frase::fibo(int *a, int *b)
{
    int temp = *b;
    *b = *a + *b;
    *a = temp;
}

Letra *Frase::extraerLetra(int num)
{
    Letra *ptr = primer;
    Letra *ptrAnterior = nullptr;
    while (ptr != nullptr)
    {
        if (ptr->numero == num)
        {
            if (ptrAnterior == nullptr)
            {
                primer = ptr->siguinte;
                return ptr;
            }
            else
            {
                ptrAnterior->siguinte = ptr->siguinte;
                return ptr;
            }
        }
        ptrAnterior = ptr;
        ptr = ptr->siguinte;
    }
    return nullptr;
}