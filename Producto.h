#include <typeinfo>
#include <string>
using std::string;

#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto
{
public:
    string nombre_pro, tipo;
    Producto();
    Producto(string, string);

    string getNombre_pro();
    void setNombre_pro(string);

    string getTipo();
    void setTipo(string);
};

#endif