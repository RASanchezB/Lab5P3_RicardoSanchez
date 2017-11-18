#include "FireBender.h"
#include <iostream>
#include <string>
#include "Poder.h"

using namespace std;

FireBender::FireBender():Persona(){
}
FireBender::FireBender(string pNacion,string pNombre, int pEdad, string pSexo,int pNumCicatrices,int pVictorias, Poder* pPoder):Persona(pNacion,pNombre,pEdad,pSexo){
	NumCicatrices = pNumCicatrices;
	Victorias = pVictorias;
	poder = pPoder;
}
int FireBender::getNumCicatrices(){
	return NumCicatrices;
}
int FireBender::getVictorias(){
	return Victorias;
}
Poder* FireBender::getPoder(){
	return poder;
}
void FireBender::setNumCicatrices(int pNumCicatrices){
	NumCicatrices = pNumCicatrices;
}
void FireBender::setVictorias(int pVictorias){
	Victorias = pVictorias;
}
void FireBender::setPoder(Poder* pPoder){
	poder = pPoder;
}
FireBender::~FireBender(){
}
