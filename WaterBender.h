#ifndef WATERBENDER_H
#define WATERBENDER_H

#include "Persona.h"
#include <string>

using namespace std;

class WaterBender: public Persona{
	private:
		string Tribu;
		string Arma;
	public:
		//constructores
		WaterBender();
		WaterBender(string,string,int,string,string,string);
		//getter
		string getTribu();
		string getArma();
		//setter
		void setTribu(string);
		void setArma(string);
		//destructor
		~WaterBender();
};
#endif
