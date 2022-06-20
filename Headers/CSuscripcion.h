#ifndef CSUSCRIPCION
#define CSUSCRIPCION

#include "ICSuscripcion.h"
#include "Sesion.h"
#include "ManejadorVideojuego.h"

using namespace std;

class CSuscripcion: public ICSuscripcion{
    private:
    string nombre;
    TipoPago tipo;
    public:
    
    bool suscribirseAVideojuego();
    
    map<string, DTSuscripcion*> listarSuscripcionesJugador();
    map<string, DTSuscripcion*> listarRestoSuscripciones();

    bool nombreVideojuego(string nombre);
    void tipoPago(TipoPago tipo);
    void cancelar();

};     

//modification 06/06/22

#endif