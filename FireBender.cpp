#include "FireBender.h"
#include <iostream>
#include <string>

using namespace std;

FireBender::FireBender():Persona(){
}
FireBender::FireBender(string pNacion,string pNombre, int pEdad, string pSexo,int pNumCicatrices,int pVictorias):Persona(pNacion,pNombre,pEdad,pSexo){
	NumCicatrices = pNumCicatrices;
	Victorias = pVictorias;
}
int FireBender::getNumCicatrices(){
	return NumCicatrices;
}
int FireBender::getVictorias(){
	return Victorias;
}
void FireBender::setNumCicatrices(int pNumCicatrices){
	NumCicatrices = pNumCicatrices;
}
void FireBender::setVictorias(int pVictorias){
	Victorias = pVictorias;
}
FireBender::~FireBender(){
}
