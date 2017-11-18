#ifndef EARTHBENDER_H
#define EARTHBENDER_H

#include "Persona.h"
#include <string>
#include "Poder.h"

using namespace std;

class EarthBender: public Persona{
	private:
		int Coles;
		int Graduacion;
		Poder* poder;
	public:
		//constructores
		EarthBender();
		EarthBender(string,string,int,string,int,int,Poder*);
		//getter
		int getColes();
		int getGraduacion();
		Poder* getPoder();
		//setter
		void setColes(int);
		void setGraduacion(int);
		void setPoder(Poder*);
		//destructor
		~EarthBender();
};
#endif
