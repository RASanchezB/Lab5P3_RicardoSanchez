#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class AirBender:public Persona{
	private:
		string CantidadPelo;
		string ColorFlecha;
		Poder* poder;
	public:
		//constructores
		AirBender();
		AirBender(string,string,int,string,string,string,Poder*);
		//getter
		string getCantidadPelo();
		string getColorFlecha();
		Poder* getPoder();
		//setter
		void setCantidadPelo(string);
		void setColorFlecha(string);
		void setPoder(Poder*);
		//destructor
		~AirBender();
};
#endif
