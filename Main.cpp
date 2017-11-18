#include "Persona.h"
#include "AirBender.h"
#include "FireBender.h"
#include "WaterBender.h"
#include "EarthBender.h"
#include "NoBender.h"
#include "Poder.h"
#include "Ofensivo.h"
#include "Defensivo.h"
#include "Curativo.h"
#include "Invocacion.h"


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
	cout<<"Bienvenido al lab 5"<<endl;
	vector <Persona> listaP;
	int opcion = 0;
	while(opcion != 5){
		cout<<"-----Menu----"<<endl
		<<"1)Agregar"<<endl
		<<"2)Listar"<<endl
		<<"3)Eliminar"<<endl
		<<"4)Guardar en archivo"<<endl
		<<"5)Salir"<<endl
		<<"Ingrese la opcion que desea"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"Agregando persona"<<endl;
				cout<<"Ingrese la nacion"<<endl;
				string Nacion;
				cin>>Nacion;
				cout<<"Ingrese el nombre"<<endl;
				string Nombre;
				cin>>Nombre;
				cout<<"Ingrese la edad"<<endl;
				int Edad;
				cin>>Edad;
				cout<<"Ingrese el sexo"<<endl;
				string Sexo;
				cin>>Sexo;
				cout<<"Es usted una de las siguientes?"<<endl
				<<"1)AirBender"<<endl
				<<"2)FireBender"<<endl
				<<"3)WaterBender"<<endl
				<<"4)EarthBender"<<endl
				<<"5)No puede"<<endl
				<<"Ingrese el numero de la opcion"<<endl;
				int opcion2;
				cin>>opcion2;
				switch(opcion2){
					case 1:{
						cout<<"Es un AirBender"<<endl;
						cout<<"La cantidad de pelo"<<endl;
						string CantidadPelo;
						cin>>CantidadPelo;
						cout<<"Ingrese el color de la flecha"<<endl;
						string ColorFlecha;
						cin>>ColorFlecha;

					}
					break;
					case 2:{}
					break;
					case 3:{}
					break;
					case 4:{}
					break;
					case 5:{}
					break;
					default:{}
					break;
				}

			}
			break;
			case 2:{}
			break;
			case 3:{}
			break;
			case 4:{}
			break;
			case 5:{
				cout<<"Saliendo"<<endl;
			}
			break;
			default:{}
			break;
		}
	}
	return 0;
}
