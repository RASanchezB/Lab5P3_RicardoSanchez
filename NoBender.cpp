#include "NoBender.h"
#include <iostream>
#include <string>

using namespace std;

NoBender::NoBender():Persona(){
}
NoBender::NoBender(string pNacion,string pNombre,int pEdad,string pSexo, string pTrabajo, string pFuerza, string pVelocidad):Persona(pNacion,pNombre,pEdad,pSexo){
	Trabajo = pTrabajo;
	Fuerza = pFuerza;
	Velocidad = pVelocidad;
}
string NoBender::getTrabajo(){
	return Trabajo;
}
string NoBender::getFuerza(){
	return Fuerza;
}
string NoBender::getVelocidad(){
	return Velocidad;
}
void NoBender::setTrabajo(string pTrabajo){
	Trabajo = pTrabajo;
}
void NoBender::setFuerza(string pFuerza){
	Fuerza = pFuerza;
}
void NoBender::setVelocidad(string pVelocidad){
	Velocidad = pVelocidad;
}
NoBender::~NoBender(){
}
