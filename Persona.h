#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona{
	private:
		string Nacion;
		string Nombre;
		int Edad;
		string Sexo;

	public:
		//constructores
		Persona();
		Persona(string,string,int,string);
		//getter
		string getNacion();
		string getNombre();
		int getEdad();
		string getSexo();
		//setter
		void setNacion(string);
		void setNombre(string);
		void setEdad(int);
		void setSexo(string);
		//destructor
		virtual ~Persona();
};
#endif
