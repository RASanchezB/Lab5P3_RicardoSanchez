#ifndef FIREBENDER_H
#define FIREBENDER_H

#include <string>
#include "Persona.h"

using namespace std;

class FireBender: public Persona{
	private:
		int NumCicatrices;
		int Victorias;
	public:
		//constructores
		FireBender();
		FireBender(string,string,int,string,int,int);
		//getter
		int getNumCicatrices();
		int getVictorias();
		//setter
		void setNumCicatrices(int);
		void setVictorias(int);
		//destructor
		~FireBender();
};
#endif
