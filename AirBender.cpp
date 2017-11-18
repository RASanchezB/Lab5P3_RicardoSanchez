#include "AirBender.h"
#include "Poder.h"
#include <iostream>
#include <string>

using namespace std;

AirBender::AirBender(string pNacion,string pNombre,int pEdad,string pSexo,string pCantidadPelo, string pColorFlecha, Poder* pPoder):Persona(pNacion,pNombre,pEdad,pSexo){
		CantidadPelo = pCantidadPelo;
		ColorFlecha = pColorFlecha;
		poder = pPoder;
}
AirBender::AirBender():Persona(){
}
string AirBender::getCantidadPelo(){
	return CantidadPelo;
}
string AirBender::getColorFlecha(){
	return ColorFlecha;
}
Poder* AirBender::getPoder(){
	return poder;
}
void AirBender::setCantidadPelo(string Cantidad){
	CantidadPelo = Cantidad;
}
void AirBender::setColorFlecha(string Color){
	ColorFlecha = Color;
}
void AirBender::setPoder(Poder* pPoder){
	poder = pPoder;
}
AirBender::~AirBender(){
}
