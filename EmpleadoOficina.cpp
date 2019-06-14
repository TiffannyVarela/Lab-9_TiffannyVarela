#include "EmpleadoOficina.h"
#include "Persona.h"
#include <typeinfo>
#include <string>
using std::string;

EmpleadoOficina::EmpleadoOficina(){

}

EmpleadoOficina::EmpleadoOficina(string pnombre, string pid, int pedad, int phoras_trabajadas, string plocal_trabajo, int pordenes_atendidas):Persona(pnombre,pid, pedad){
    this -> horas_trabajadas = phoras_trabajadas;
    this -> local_trabajo = plocal_trabajo;
    this -> ordenes_atendidas = pordenes_atendidas;
}

int EmpleadoOficina::getHoras_trabajadas(){
    return horas_trabajadas;
}

void EmpleadoOficina::setHoras_trabajadas(int phoras_trabajadas){
    horas_trabajadas = phoras_trabajadas;
}

string EmpleadoOficina::getLocal_trabajo(){
    return local_trabajo;
}

void EmpleadoOficina::setLocal_trabajo(string plocal_trabajo){
    local_trabajo = plocal_trabajo;
}

int EmpleadoOficina::getOrdenes_atendidas(){
    return ordenes_atendidas;
}

void EmpleadoOficina::setOrdenes_atendidas(int pordenes_atendidas){
    ordenes_atendidas = pordenes_atendidas;
}

int EmpleadoOficina::ganancias(){
    return 30*ordenes_atendidas+ordenes_atendidas;
}
