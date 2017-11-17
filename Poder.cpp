#include "Poder.h"
#include <string>

using namespace std;
Poder::Poder(){
}
Poder::Poder(string pNombre, string pNivel){
	Nombre = pNombre;
	Nivel = pNivel;
}
string Poder::getNombre(){
	return Nombre;
}
string Poder::getNivel(){
	return Nivel;
}
void Poder::setNombre(string pNombre){
	Nombre = pNombre;
}
void Poder::setNivel(string pNivel){
	Nivel = pNivel;
}
Poder::~Poder(){
}
