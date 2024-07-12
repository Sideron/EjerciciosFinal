#include "contactos.h"

Contacto::Contacto(
    std::string nombre,
    int edad,
    std::string telefono,
    std::string correo,
    Sexo sexo)
    : nombre(nombre), edad(edad), telefono(telefono),
      correo(correo), sexo(sexo), siguiente(nullptr)
{
}

std::string Contacto::getSexo()
{
    return sexo == Sexo::Masculino ? "M" : "F";
}

void Contacto::mostrarDatos()
{
    std::cout << nombre << "\t" << edad << "\t" << telefono
              << "\t" << correo << "\t" << getSexo();
    std::cout << std::endl;
}

ListaContactos::ListaContactos()
    : primer(nullptr), ultimo(nullptr), tam(0) {}

void ListaContactos::AgregarContacto(std::string nombre, int edad, std::string telefono,
                                     std::string correo, Sexo sexo)
{
    Contacto *c = new Contacto(nombre, edad, telefono, correo, sexo);
    if (primer != nullptr)
    {
        ultimo->siguiente = c;
        ultimo = c;
    }
    else
    {
        primer = c;
        ultimo = c;
    }
    tam++;
}

void ListaContactos::ImprimirContactos()
{
    Contacto *ptr = primer;
    while (ptr != nullptr)
    {
        ptr->mostrarDatos();
        ptr = ptr->siguiente;
    }
}

Contacto *ListaContactos::BuscarContacto(std::string nombre)
{
    Contacto *ptr = primer;
    while (ptr != nullptr)
    {
        if (ptr->nombre == nombre)
        {
            return ptr;
        }
        ptr = ptr->siguiente;
    }
    std::cout << "No se encontro el contacto " << nombre << "." << std::endl;
    return nullptr;
}

void ListaContactos::EliminarContacto(std::string nombre)
{
    Contacto *ptr = primer;
    Contacto *pAnterior = nullptr;
    while (ptr != nullptr)
    {
        if (ptr->nombre == nombre)
        {
            if (pAnterior != nullptr)
            {
                pAnterior->siguiente = ptr->siguiente;
                if (primer->siguiente == nullptr)
                {
                    ultimo = primer;
                }
            }
            else
            {
                primer = ptr->siguiente;
                ultimo = ptr->siguiente;
                if (ptr->siguiente == nullptr)
                {
                    ultimo = pAnterior;
                }
            }
            Contacto *temp = ptr;
            ptr = ptr->siguiente;
            delete temp;
        }
        else
        {
            pAnterior = ptr;
            ptr = ptr->siguiente;
        }
    }
}

void ListaContactos::EditarContacto(Contacto *contacto, std::string nombre, int edad,
                                    std::string telefono, std::string correo)
{
    contacto->nombre = nombre;
    contacto->edad = edad;
    contacto->telefono = telefono;
    contacto->correo = correo;
}

void ListaContactos::ImprimirPorSexo(Sexo sexo)
{
    Contacto *ptr = primer;
    while (ptr != nullptr)
    {
        if (ptr->sexo == sexo)
        {
            ptr->mostrarDatos();
        }
        ptr = ptr->siguiente;
    }
}