#include "Repartidor.h"
#include "Persona.h"
#include <string>
using std::string;

Repartidor::Repartidor():Persona(){

}

Repartidor::Repartidor(string pnombre, string pid, int pedad, string pplaca_moto, string pzona_trabajo, int pordenes_atendidas):Persona(pnombre,pid, pedad){
    this -> placa_moto = pplaca_moto;
    this -> zona_trabajo = pzona_trabajo;
    this -> ordenes_atendidas = pordenes_atendidas;
}

string Repartidor::getPlaca_moto(){
    return placa_moto;
}

void Repartidor::setPlaca_moto(string pplaca_moto){
    placa_moto = pplaca_moto;
}

string Repartidor::getZona_trabajo(){
    return zona_trabajo;
}

void Repartidor::setZona_trabajo(string pzona_trabajo){
    zona_trabajo = pzona_trabajo;
}

int Repartidor::getOrdenes_atendidas(){
    return ordenes_atendidas;
}

void Repartidor::setOrdenes_atendidas(int pordenes_atendidas){
    ordenes_atendidas = pordenes_atendidas;
}

int Repartidor::ganancias(){
    return 40*ordenes_atendidas;
}