#include "WaterBender.h"
#include <iostream>
#include <string>

using namespace std;

WaterBender::WaterBender():Persona(){
}
WaterBender::WaterBender(string pNacion, string pNombre,int pEdad,string pSexo, string pTribu, string pArma):Persona(pNacion,pNombre,pEdad,pSexo){
	Tribu = pTribu;
	Arma = pArma;
}
string WaterBender::getTribu(){
	return Tribu;
}
string WaterBender::getArma(){
	return Arma;
}
void WaterBender::setTribu(string pTribu){
	Tribu = pTribu;
}
void WaterBender::setArma(string pArma){
	Arma = pArma;
}
WaterBender::~WaterBender(){
}
