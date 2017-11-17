#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
#include "Persona.h"

using namespace std;

class AirBender:public Persona{
	private:
		string CantidadPelo;
		string ColorFlecha;
	public:
		//constructores
		AirBender();
		AirBender(string,string,int,string,string,string);
		//getter
		string getCantidadPelo();
		string getColorFlecha();
		//setter
		void setCantidadPelo(string);
		void setColorFlecha(string);
		//destructor
		~AirBender();
};
#endif
