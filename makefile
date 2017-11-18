lab5:	Main.o Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NoBender.o Poder.o Curativo.o Defensivo.o Ofensivo.o Invocacion.o
	g++ Main.o Persona.o AirBender.o FireBender.o WaterBender.o EarthBender.o NoBender.o Poder.o Curativo.o Defensivo.o Ofensivo.o Invocacion.o -o lab5

Main.o:	Poder.h Ofensivo.h Defensivo.h Curativo.h Invocacion.h Persona.h AirBender.h FireBender.h WaterBender.h EarthBender.h NoBender.h Main.cpp
	g++ -c Main.cpp

Poder.o:	Poder.h Poder.cpp
	g++ -c Poder.cpp

Ofensivo.o:	Ofensivo.h Ofensivo.cpp
	g++ -c Ofensivo.cpp

Defensivo.o:	Defensivo.h Defensivo.cpp
	g++ -c Defensivo.cpp

Curativo.o:	Curativo.h Curativo.cpp
	g++ -c Curativo.cpp

Invocacion.o:	Invocacion.h Invocacion.cpp
	g++ -c Invocacion.cpp

Persona.o:	Persona.h Persona.cpp
	g++ -c Persona.cpp

AirBender.o:	AirBender.h AirBender.cpp
	g++ -c AirBender.cpp

FireBender.o:	FireBender.h FireBender.cpp
	g++ -c FireBender.cpp

WaterBender.o:	WaterBender.h WaterBender.cpp
	g++ -c WaterBender.cpp

EarthBender.o:	EarthBender.h EarthBender.cpp
	g++ -c EarthBender.cpp

NoBender.o: NoBender.h NoBender.cpp
	g++ -c NoBender.cpp

clear:
	rm *.o run
