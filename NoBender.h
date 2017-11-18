#ifndef NOBENDER_H
#define NOBENDER_H

#include "Persona.h"
#include <string>

using namespace std;

class NoBender:public Persona{
	private:
		string Trabajo;
		string Fuerza;
		string Velocidad;
	public:
		//constructores
		NoBender();
		NoBender(string,string,int,string,string,string,string);
		//getter
		string getTrabajo();
		string getFuerza();
		string getVelocidad();
		//setter
		void setTrabajo(string);
		void setFuerza(string);
		void setVelocidad(string);
		//destructor
		~NoBender();
};
#endif
