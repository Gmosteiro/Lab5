main: Categoria.o CCategoria.o CSesion.o CUsuario.o CVideojuego.o CSuscripcion.o CPartida.o Desarrollador.o DTCategoria.o DTFechaHora.o DTVideojuego.o DTPartida.o DTPartidaIndividual.o DTPartidaMultijugador.o Fabrica.o Jugador.o main.o ManejadorCategoria.o ManejadorUsuario.o ManejadorVideojuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o Sesion.o Suscripcion.o Usuario.o Videojuego.o Puntaje.o
	g++ Categoria.o CCategoria.o CSesion.o CUsuario.o CVideojuego.o CSuscripcion.o CPartida.o Desarrollador.o DTCategoria.o DTFechaHora.o DTVideojuego.o DTPartida.o DTPartidaIndividual.o DTPartidaMultijugador.o Fabrica.o Jugador.o main.o ManejadorCategoria.o ManejadorUsuario.o ManejadorVideojuego.o Partida.o PartidaIndividual.o PartidaMultijugador.o Sesion.o Suscripcion.o Usuario.o Videojuego.o Puntaje.o -g -o sistema

Categoria.o: Categoria.cpp
	g++ -g -c Categoria.cpp

CCategoria.o: CCategoria.cpp
	g++ -g -c CCategoria.cpp

CSesion.o: CSesion.cpp
	g++ -g -c CSesion.cpp

CUsuario.o: CUsuario.cpp
	g++ -g -c CUsuario.cpp

CVideojuego.o: CVideojuego.cpp
	g++ -g -c CVideojuego.cpp

CSuscripcion.o: CSuscripcion.cpp
	g++ -g -c CSuscripcion.cpp

CPartida.o: CPartida.cpp
	g++ -g -c CPartida.cpp

Desarrollador.o: Desarrollador.cpp	
	g++ -g -c Desarrollador.cpp

DTCategoria.o: DTCategoria.cpp
	g++ -g -c DTCategoria.cpp

DTFechaHora.o: DTFechaHora.cpp
	g++ -g -c DTFechaHora.cpp

DTVideojuego.o: DTVideojuego.cpp
	g++ -g -c DTVideojuego.cpp

DTPartida.o: DTPartida.cpp
	g++ -g -c DTPartida.cpp

DTPartidaIndividual.o: DTPartidaIndividual.cpp
	g++ -g -c DTPartidaIndividual.cpp

DTPartidaMultijugador.o: DTPartidaMultijugador.cpp
	g++ -g -c DTPartidaMultijugador.cpp

Fabrica.o: Fabrica.cpp
	g++ -g -c Fabrica.cpp

Jugador.o: Jugador.cpp
	g++ -g -c Jugador.cpp

ManejadorCategoria.o: ManejadorCategoria.cpp
	g++ -g -c ManejadorCategoria.cpp

ManejadorUsuario.o: ManejadorUsuario.cpp
	g++ -g -c ManejadorUsuario.cpp

ManejadorVideojuego.o: ManejadorVideojuego.cpp
	g++ -g -c ManejadorVideojuego.cpp

Partida.o: Partida.cpp
	g++ -g -c Partida.cpp

PartidaIndividual.o: PartidaIndividual.cpp
	g++ -g -c PartidaIndividual.cpp

PartidaMultijugador.o: PartidaMultijugador.cpp
	g++ -g -c PartidaMultijugador.cpp

Sesion.o: Sesion.cpp
	g++ -g -c Sesion.cpp

Suscripcion.o: Suscripcion.cpp
	g++ -g -c Suscripcion.cpp

Usuario.o: Usuario.cpp
	g++ -g -c Usuario.cpp

Videojuego.o: Videojuego.cpp
	g++ -g -c Videojuego.cpp

Puntaje.o: Puntaje.cpp
	g++ -g -c Puntaje.cpp

main.o: main.cpp
	g++ -g -c main.cpp

clean:
	rm -rf *.o sistema
	clear
