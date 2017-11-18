#ifndef FIREBENDER_H
#define FIREBENDER_H

#include <string>
#include "Persona.h"
#include "Poder.h"

using namespace std;

class FireBender: public Persona{
	private:
		int NumCicatrices;
		int Victorias;
		Poder* poder;
	public:
		//constructores
		FireBender();
		FireBender(string,string,int,string,int,int,Poder*);
		//getter
		int getNumCicatrices();
		int getVictorias();
		Poder* getPoder();
		//setter
		void setNumCicatrices(int);
		void setVictorias(int);
		void setPoder(Poder*);
		//destructor
		~FireBender();
};
#endif
