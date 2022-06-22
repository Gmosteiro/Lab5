#ifndef CPARTIDA    
#define CPARTIDA

#include "ICPartida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "../Datatypes/DTCategoria.h"
#include "Sesion.h"

#include <ctime>

using namespace std;

class CPartida: public ICPartida{

private:

    TipoPartida tipo;
    Videojuego* videojuego;
    bool continua, enVivo;
    int duracion, cantJug;

public:
    void iniciarPartida();


    bool selectVideojuego(string game, map<string, Videojuego*> sus);
    void continuaPartida(bool continua);
    void datosMultijugador(bool enVivo, int cantJug);
    void ingresarDuracion(int duracion);
    void ingresarTipoPartida(TipoPartida tipo);
    void cancelar();


};

#endif