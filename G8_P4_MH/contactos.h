#include <iostream>

enum class Sexo
{
    Masculino,
    Femenino
};

class Contacto
{
public:
    std::string nombre;
    int edad;
    std::string telefono;
    std::string correo;
    Sexo sexo;
    Contacto *siguiente;

    Contacto(std::string nombre,
             int edad,
             std::string telefono,
             std::string correo,
             Sexo sexo);

    std::string getSexo();
    void mostrarDatos();
};

class ListaContactos
{
public:
    Contacto *primer;
    Contacto *ultimo;
    size_t tam;

    ListaContactos();
    void AgregarContacto(std::string nombre, int edad, std::string telefono,
                         std::string correo, Sexo sexo);

    void ImprimirContactos();
    Contacto *BuscarContacto(std::string nombre);
    void EliminarContacto(std::string nombre);
    void EditarContacto(Contacto *contacto, std::string nombre, int edad,
                        std::string telefono, std::string correo);
    void ImprimirPorSexo(Sexo sexo);
};