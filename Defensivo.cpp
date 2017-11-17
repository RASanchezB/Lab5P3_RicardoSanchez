#include "Defensivo.h"
#include <iostream>
#include <string>

using namespace std;

Defensivo::Defensivo():Poder(){
}
Defensivo::Defensivo(string pNombre, string pNivel, string pResistencia, string pDuracion):Poder(pNombre,pNivel){
	Resistencia = pResistencia;
	Duracion = pDuracion;
}
string Defensivo::getResistencia(){
	return Resistencia;
}
string Defensivo::getDuracion(){
	return Duracion;
}
void Defensivo::setResistencia(string pResistencia){
	Resistencia = pResistencia;
}
void Defensivo::setDuracion(string pDuracion){
	Duracion = pDuracion;
}
Defensivo::~Defensivo(){
}
