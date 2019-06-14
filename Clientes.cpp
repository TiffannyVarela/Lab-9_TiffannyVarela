#include "Clientes.h"
#include "Persona.h"

#include <string>
using std::string;

Clientes::Clientes():Persona(){

}

Clientes::Clientes(string pnombre, string pid, int pedad, string pdireccion, string pnum_telefono, string pnum_tarjeta, int pnum_pedidos):Persona(pnombre,pid, pedad){
    this -> direccion = pdireccion;
    this -> num_telefono = pnum_telefono;
    this -> num_tarjeta = pnum_tarjeta;
    this -> num_pedidos + pnum_pedidos;
}

string Clientes::getDireccion(){
    return direccion;
}

void Clientes::setDireccion(string pdireccion){
    direccion = pdireccion;
}

string Clientes::getNum_telefono(){
    return num_telefono;
}

void Clientes::setNum_telefono(string pnum_telefono){
    num_telefono = pnum_telefono;
}

string Clientes::getNum_tarjeta(){
    return num_tarjeta;
}

void Clientes::setNum_tarjeta(string pnum_tarjeta){
    num_tarjeta = pnum_tarjeta;
}

int Clientes::getNum_pedidos(){
    return num_pedidos;
}

void Clientes::setNum_pedidos(int pnum_pedidos){
    num_pedidos = pnum_pedidos;
}

int Clientes::ganancias(){
    return -100*num_pedidos;
}