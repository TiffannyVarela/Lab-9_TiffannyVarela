#include <typeinfo>
#include "Persona.h"

#include <string>
using std::string;

#ifndef CLIENTES_H
#define CLIENTES_H

class Clientes: public Persona
{
public:
    string direccion, num_telefono, num_tarjeta;
    int num_pedidos;
    Clientes();
    Clientes(string, string, int,string, string, string, int);

    string getDireccion();
    void setDireccion(string);

    string getNum_telefono();
    void setNum_telefono(string);

    string getNum_tarjeta();
    void setNum_tarjeta(string);
    
    int getNum_pedidos();
    void setNum_pedidos(int);

    virtual int ganancias();
};

#endif