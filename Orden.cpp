#include "Persona.h"
#include "Clientes.h"
#include "Repartidor.h"
#include "NegociosAsociados.h"
#include "Producto.h"
#include "Orden.h"
#include <string>
using std::string;

Orden::Orden(){

}

Orden::Orden(Clientes* pcliente, NegociosAsociados* pnegocio, Repartidor* prepartitor,Producto* pproducto, string ptipo, string pestado){
    this -> cliente = pcliente;
    this -> negocio = pnegocio;
    this -> repartidor = prepartitor;
    this -> producto = pproducto;
    this -> tipo = ptipo;
    this -> estado = pestado;
}

Clientes* Orden::getCliente(){
    return cliente;
}

void Orden::setCliente(Clientes* pcliente){
    cliente = pcliente;
}

NegociosAsociados* Orden::getNegocio(){
    return negocio;
}

void Orden::setNegocio(NegociosAsociados* pnegocio){
    negocio = pnegocio;
}

Repartidor* Orden::getRepartidor(){
    return repartidor;
}

void Orden::setRepartidor(Repartidor* prepartidor){
    repartidor = prepartidor;
}

string Orden::getTipo(){
    return tipo;
}

void Orden::setTipo(string ptipo){
    tipo = ptipo;
}

string Orden::getEstado(){
    return estado;
}

void Orden::setEstado(string pestado){
    estado = pestado;
}

Producto* Orden::getProducto(){
    return producto;
}

void Orden::setProducto(Producto* pproducto){
    producto = pproducto;
}