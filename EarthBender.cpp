#include "EarthBender.h"
#include <iostream>
#include <string>

using namespace std;

EarthBender::EarthBender():Persona(){
}
EarthBender::EarthBender(string pNacion, string pNombre, int pEdad, string pSexo, int pColes, int pGraduacion):Persona(pNacion,pNombre,pEdad,pSexo){
	Coles = pColes;
	Graduacion = pGraduacion;
}
int EarthBender::getColes(){
	return Coles;
}
int EarthBender::getGraduacion(){
	return Graduacion;
}
void EarthBender::setColes(int pColes){
	Coles = pColes;
}
void EarthBender::setGraduacion(int pGraduacion){
	Graduacion = pGraduacion;
}
EarthBender::~EarthBender(){
}
