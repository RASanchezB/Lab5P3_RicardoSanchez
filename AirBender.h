#ifndef AIRBENDER_H
#define AIRBENDER_H

#include <string>
#include "Persona.h"

using namespace std;

class AirBender:public Persona{
	private:
		int CantidadPelo;
		string ColorFlecha;
	public:
		//constructores
		AirBender();
		AirBender(int, string);
		//getter
		int getCantidadPelo();
		string getColorFlecha();
		//setter
		void setCantidadPelo();
		void setColorFlecha();
		//destructor
		~AirBender();
};
#endif;
