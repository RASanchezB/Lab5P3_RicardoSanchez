#ifndef PODER_H
#define PODER_H

#include <string>
using namespace std;

class Poder{
	private:
		string Nombre;
		string Nivel;
	public:
		//constructores
		Poder();
		Poder(string,string);
		//getter
		string getNombre();
		string getNivel();
		//setter
		void setNombre(string);
		void setNivel(string);
		//destructor
		virtual ~Poder();
};
#endif
