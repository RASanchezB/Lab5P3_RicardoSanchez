#include "WaterBender.h"
#include <iostream>
#include <string>
#include "Poder.h"

using namespace std;

WaterBender::WaterBender():Persona(){
}
WaterBender::WaterBender(string pNacion, string pNombre,int pEdad,string pSexo, string pTribu, string pArma, Poder* pPoder):Persona(pNacion,pNombre,pEdad,pSexo){
	Tribu = pTribu;
	Arma = pArma;
	poder = pPoder;
}
string WaterBender::getTribu(){
	return Tribu;
}
string WaterBender::getArma(){
	return Arma;
}
Poder* WaterBender::getPoder(){
	return poder;
}
void WaterBender::setTribu(string pTribu){
	Tribu = pTribu;
}
void WaterBender::setArma(string pArma){
	Arma = pArma;
}
void WaterBender::setPoder(Poder* pPoder){
	poder = pPoder;
}
WaterBender::~WaterBender(){
}
