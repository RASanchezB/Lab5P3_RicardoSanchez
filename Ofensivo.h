#ifndef OFENSIVO_H
#define OFENSIVO_H

#include <string>
#include "Poder.h"
using namespace std;

class Ofensivo:public Poder{
	private:
		string Rango;
		string Fuerza;
	public:
		//constructores
		Ofensivo();
		Ofensivo(string,string,string,string);
		//getter
		string getRango();
		string getFuerza();
		//setter
		void setRango(string);
		void setFuerza(string);
		//destructor
		~Ofensivo();
};
#endif
