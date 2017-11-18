#ifndef EARTHBENDER_H
#define EARTHBENDER_H

#include "Persona.h"
#include <string>

using namespace std;

class EarthBender: public Persona{
	private:
		int Coles;
		int Graduacion;
	public:
		//constructores
		EarthBender();
		EarthBender(string,string,int,string,int,int);
		//getter
		int getColes();
		int getGraduacion();
		//setter
		void setColes(int);
		void setGraduacion(int);
		//destructor
		~EarthBender();
};
#endif
