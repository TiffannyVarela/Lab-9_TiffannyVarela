#include <typeinfo>
#include <string>
#include "Producto.h"
using std::string;
#include <vector>
using std::vector;

#ifndef NEGOCIOSASOCIADOS_H
#define NEGOCIOSASOCIADOS_H

class NegociosAsociados
{
public:
    string nombren, ubicacion;
    int num_locales;
    vector <Producto*> productos;
    NegociosAsociados();
    NegociosAsociados(string, string, int, vector <Producto*>);

    string getNombren();
    void setNombren(string);

    string getUbicacion();
    void setUbicacion(string);

    int getNum_locales();
    void setNum_locales(int);

    vector <Producto*> getProductos();
    void setProductos(vector <Producto*>);
};

#endif
