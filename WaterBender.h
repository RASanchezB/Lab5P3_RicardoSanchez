#ifndef WATERBENDER_H
#define WATERBENDER_H

#include "Persona.h"
#include <string>
#include "Poder.h"

using namespace std;

class WaterBender: public Persona{
	private:
		string Tribu;
		string Arma;
		Poder* poder;
	public:
		//constructores
		WaterBender();
		WaterBender(string,string,int,string,string,string,Poder*);
		//getter
		string getTribu();
		string getArma();
		Poder* getPoder();
		//setter
		void setTribu(string);
		void setArma(string);
		void setPoder(Poder*);
		//destructor
		~WaterBender();
};
#endif
