#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

Persona::Persona(){
	Nacion = "";
	Nombre = "";
	Edad = 0;
	Sexo = "";
}
Persona::Persona(string pNacion,string pNombre,int pEdad,string pSexo){
	Nacion = pNacion;
	Nombre = pNombre;
	Edad = pEdad;
	Sexo = pSexo;
}
string Persona::getNacion(){
	return Nacion;
}
string Persona::getNombre(){
	return Nombre;
}
int Persona::getEdad(){
	return Edad;
}
string Persona::getSexo(){
	return Sexo;
}
void Persona::setNacion(string pNacion){
	Nacion = pNacion;
}
void Persona::setNombre(string pNombre){
	Nombre = pNombre;
}
void Persona::setEdad(int pEdad){
	Edad = pEdad;
}
void Persona::setSexo(string pSexo){
	Sexo = pSexo;
}
Persona::~Persona(){

}
