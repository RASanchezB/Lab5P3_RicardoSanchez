#include "EarthBender.h"
#include <iostream>
#include <string>
#include "Poder.h"

using namespace std;

EarthBender::EarthBender():Persona(){
}
EarthBender::EarthBender(string pNacion, string pNombre, int pEdad, string pSexo, int pColes, int pGraduacion,Poder* pPoder):Persona(pNacion,pNombre,pEdad,pSexo){
	Coles = pColes;
	Graduacion = pGraduacion;
	poder = pPoder;
}
int EarthBender::getColes(){
	return Coles;
}
int EarthBender::getGraduacion(){
	return Graduacion;
}
Poder* EarthBender::getPoder(){
	return poder;
}
void EarthBender::setColes(int pColes){
	Coles = pColes;
}
void EarthBender::setGraduacion(int pGraduacion){
	Graduacion = pGraduacion;
}
void EarthBender::setPoder(Poder* pPoder){
	poder = pPoder;
}
EarthBender::~EarthBender(){
}
