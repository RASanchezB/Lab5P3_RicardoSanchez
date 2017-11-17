#include "AirBender.h"
#include <iostream>
#include <string>

using namespace std;

AirBender::AirBender(string pNacion,string pNombre,int pEdad,string pSexo,string pCantidadPelo, string pColorFlecha):Persona(pNacion,pNombre,pEdad,pSexo){
		CantidadPelo = pCantidadPelo;
		ColorFlecha = pColorFlecha;
}
AirBender::AirBender():Persona(){
}
string AirBender::getCantidadPelo(){
	return CantidadPelo;
}
string AirBender::getColorFlecha(){
	return ColorFlecha;
}
void AirBender::setCantidadPelo(string Cantidad){
	CantidadPelo = Cantidad;
}
void AirBender::setColorFlecha(string Color){
	ColorFlecha = Color;
}
AirBender::~AirBender(){
}
