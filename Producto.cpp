#include <typeinfo>
#include <string>
#include "Producto.h"
using std::string;

Producto::Producto(){

}

Producto::Producto(string pnombre_pro, string ptipo){
    this -> nombre_pro = pnombre_pro;
    this -> tipo = ptipo;
}

string Producto::getNombre_pro(){
    return nombre_pro;
}

void Producto::setNombre_pro(string pnombre_pro){
    nombre_pro = pnombre_pro;
}

string Producto::getTipo(){
    return tipo;
}

void Producto::setTipo(string ptipo){
    tipo = ptipo;
}