#include "Persona.h"
#include <typeinfo>
#include <string>
using std::string;

#ifndef EMPLEADOOFICINA_H
#define EMPLEADOOFICINA_H

class EmpleadoOficina:public Persona
{
public:
    int horas_trabajadas, ordenes_atendidas;
    string local_trabajo;
    EmpleadoOficina();
    EmpleadoOficina(string, string, int, int, string, int);

    int getHoras_trabajadas();
    void setHoras_trabajadas(int);

    string getLocal_trabajo();
    void setLocal_trabajo(string);

    int getOrdenes_atendidas();
    void setOrdenes_atendidas(int);
    
    virtual int ganancias();
};

#endif