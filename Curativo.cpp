#include "Curativo.h"
#include <iostream>
#include <string>

using namespace std;

Curativo::Curativo(string pNombre, string pNivel, string pTipoCuracion):Poder(pNombre,pNivel){
	TipoCuracion = pTipoCuracion;
}
Curativo::Curativo():Poder(){
}
string Curativo::getTipoCuracion(){
	return TipoCuracion;
}
void Curativo::setTipoCuracion(string pTipoCuracion){
	TipoCuracion = pTipoCuracion;
}
Curativo::~Curativo(){
}
