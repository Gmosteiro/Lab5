#ifndef CSUSCRIPCION
#define CSUSCRIPCION

#include "Sesion.h"
#include "ManejadorVideojuego.h"
#include "ICSuscripcion.h"

#include <ctime>

using namespace std;

class CSuscripcion: public ICSuscripcion{

    private:
    string nombre;
    TipoPago tipo;
    public:
    
    void suscribirseAVideojuego();
    
    map<string, Videojuego*> listarSuscripcionesJugador();
    map<string, Videojuego*> listarRestoSuscripciones();

    bool nombreVideojuego(string nombre);
    void tipoPago(TipoPago tipo);
    void cancelar();

};     

//modification 06/06/22

#endif