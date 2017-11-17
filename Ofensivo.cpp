#include "Ofensivo.h"
#include <iostream>
#include <string>

using namespace std;

Ofensivo::Ofensivo(string pNombre,string pNivel, string pRango, string pFuerza):Poder(pNombre,pNivel){
	Rango = pRango;
	Fuerza = pFuerza;
}
Ofensivo::Ofensivo(){
}
string Ofensivo::getRango(){
	return Rango;
}
string Ofensivo::getFuerza(){
	return Fuerza;
}
void Ofensivo::setRango(string pRango){
	Rango = pRango;
}
void Ofensivo::setFuerza(string pFuerza){
	Fuerza = pFuerza;
}
Ofensivo::~Ofensivo(){
}
