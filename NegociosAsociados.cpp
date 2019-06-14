#include <typeinfo>
#include <string>
#include "NegociosAsociados.h"
#include "Producto.h"
using std::string;
#include <vector>
using std::vector;

NegociosAsociados::NegociosAsociados(){

}

NegociosAsociados::NegociosAsociados(string pnombren, string pubicacion, int pnum_locales, vector <Producto*> pproductos){
    this -> nombren = pnombren;
    this -> ubicacion = pubicacion;
    this -> num_locales = pnum_locales;
    this -> productos = pproductos;
}

string NegociosAsociados::getNombren(){
    return nombren;
}

void NegociosAsociados::setNombren(string pnombren){
    nombren = pnombren;
}

string NegociosAsociados::getUbicacion(){
    return ubicacion;
}

void NegociosAsociados::setUbicacion(string pubicacion){
    ubicacion = pubicacion;
}

int NegociosAsociados::getNum_locales(){ 
    return num_locales;
}

void NegociosAsociados::setNum_locales(int pnum_locales){
    num_locales = pnum_locales;
}

vector <Producto*> NegociosAsociados::getProductos(){
    return productos;
}

void NegociosAsociados::setProductos(vector <Producto*> pproductos){
    productos = pproductos;
}