#include "Persona.h"

#include <iostream>
#include <string>
using std::string;

Persona::Persona(){
    nombre = "Persona1";
    id = "0000-0000-00000";
    edad = 0;
}

Persona::Persona(string pnombre, string pid, int pedad){
    this -> nombre = pnombre;
    this -> id = pid;
    this -> edad = pedad;
}

string Persona::getNombre(){
    return nombre;
}

void Persona::setNombre(string pnombre){
    nombre = pnombre;
}

string Persona::getId(){
    return id;
}

void Persona::setId(string pid){
    id = pid;
}

int Persona::getEdad(){
    return edad;
}

void Persona::setEdad(int pedad){
    edad = pedad;
}

int Persona::ganancias(){
    return 0;
}