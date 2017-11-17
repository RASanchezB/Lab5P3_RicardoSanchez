#ifndef INVOCACION_H
#define INVOCACION_H

#include <string>
#include "Poder.h"

using namespace std;

class Invocacion: public Poder{
	private:
		string NombreA;
		string Especie;
		string Habilidad;
		string TipoA;
	public:
		//constructores
		Invocacion();
		Invocacion(string,string,string,string,string,string);
		//getter
		string getNombreA();
		string getEspecie();
		string getHabilidad();
		string getTipoA();
		//setter
		void setNombreA(string);
		void setEspecie(string);
		void setHabilidad(string);
		void setTipoA(string);
		//destructor
		~Invocacion();
};
#endif
