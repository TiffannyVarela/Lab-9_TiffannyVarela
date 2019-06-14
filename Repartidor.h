#include <typeinfo>
#include "Persona.h"

#include <string>
using std::string;

#ifndef REPARTIDOR_H
#define REPARTIDOR_H

class Repartidor: public Persona
{
public:
    string placa_moto, zona_trabajo;
    int ordenes_atendidas;
    Repartidor();
    Repartidor(string, string, int,string, string, int);

    string getPlaca_moto();
    void setPlaca_moto(string);

    string getZona_trabajo();
    void setZona_trabajo(string);

    int getOrdenes_atendidas();
    void setOrdenes_atendidas(int);

    virtual int ganancias();
};

#endif