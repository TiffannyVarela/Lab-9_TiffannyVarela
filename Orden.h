#include "Persona.h"
#include "Clientes.h"
#include "Repartidor.h"
#include "NegociosAsociados.h"
#include "Producto.h"
#include <string>
using std::string;

#ifndef ORDEN_H
#define ORDEN_H
class Orden
{
public:
    Clientes* cliente;
    NegociosAsociados* negocio;
    Repartidor* repartidor;
    string tipo, estado;
    Producto* producto;
    Orden();
    Orden(Clientes*, NegociosAsociados*, Repartidor*,Producto*, string, string);

    Clientes* getCliente();
    void setCliente(Clientes*);

    NegociosAsociados* getNegocio();
    void setNegocio(NegociosAsociados*);

    Repartidor* getRepartidor();
    void setRepartidor(Repartidor*);

    string getTipo();
    void setTipo(string);

    string getEstado();
    void setEstado(string);

    Producto* getProducto();
    void setProducto(Producto*);
};

#endif