#ifndef ICPARTIDA
#define ICPARTIDA

#include <string>
#include "TipoPartida.h"
#include "Videojuego.h"

using namespace std;

class ICPartida {
  public:
    virtual void iniciarPartida() = 0;


    virtual bool selectVideojuego(string game, map<string, Videojuego*> sus) = 0;
    virtual void continuaPartida(bool continua) = 0;
    virtual void datosMultijugador(bool enVivo, int cantJug) = 0;
    virtual void ingresarDuracion(int duracion) = 0;
    virtual void ingresarTipoPartida(TipoPartida tipo) = 0;
    virtual void cancelar() = 0;
};

#endif


