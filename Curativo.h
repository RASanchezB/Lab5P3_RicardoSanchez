#ifndef CURATIVO_H
#define CURATIVO_H

#include <string>
#include "Poder.h"

using namespace std;

class Curativo:public Poder{
	private:
		string TipoCuracion;
	public:
		//constructores
		Curativo();
		Curativo(string,string,string);
		//getter
		string getTipoCuracion();
		//setter
		void setTipoCuracion(string);
		//destructor
		~Curativo();
};
#endif
