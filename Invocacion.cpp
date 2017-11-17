#include "Invocacion.h"
#include <iostream>
#include <string>

using namespace std;

Invocacion::Invocacion(string pNombre,string pNivel,string pNombreA,string pEspecie, string pHabilidad, string pTipoA):Poder(pNombre,pNivel){
	NombreA = pNombreA;
	Especie = pEspecie;
	Habilidad = pHabilidad;
	TipoA = pTipoA;
}
Invocacion::Invocacion():Poder(){
}
string Invocacion::getNombreA(){
	return NombreA;
}
string Invocacion::getEspecie(){
	return Especie;
}
string Invocacion::getHabilidad(){
	return Habilidad;
}
string Invocacion::getTipoA(){
	return TipoA;
}
void Invocacion::setNombreA(string pNombreA){
	NombreA = pNombreA;
}
void Invocacion::setEspecie(string pEspecie){
	Especie = pEspecie;
}
void Invocacion::setHabilidad(string pHabilidadA){
	Habilidad = pHabilidadA;
}
void Invocacion::setTipoA(string pTipoA){
	TipoA = pTipoA;
}
Invocacion::~Invocacion(){
}
