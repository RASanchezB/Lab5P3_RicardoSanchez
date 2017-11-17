#ifndef DEFENSIVO_H
#define DEFENSIVO_H

#include <string>
#include "Poder.h"

using namespace std;

class Defensivo:public Poder{
	private:
		string Resistencia;
		string Duracion;
	public:
		//constructores
		Defensivo();
		Defensivo(string,string,string,string);
		//getter
		string getResistencia();
		string getDuracion();
		//setter
		void setResistencia(string);
		void setDuracion(string);
		//destructor
		~Defensivo();
};
#endif
