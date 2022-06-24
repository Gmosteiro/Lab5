#ifndef ICSUSCRIPCION
#define ICSUSCRIPCION

#include "TipoPago.h"
#include "Videojuego.h"
#include <string>
#include <map>

using namespace std;

class ICSuscripcion{
        
    public:
    
        virtual void suscribirseAVideojuego()=0;
        virtual void cancelarSuscripcion()=0;
        
        virtual map<string, Videojuego*> listarSuscripcionesJugador() = 0;
        virtual map<string, Videojuego*> listarRestoSuscripciones() = 0;

        virtual bool nombreVideojuego(string nombre) = 0;
        virtual bool nombreVideojuegoSuscrito(string nombre) = 0;
        virtual void tipoPago(TipoPago tipo) = 0;
        virtual void cancelar()= 0;
        
};     

//modification 06/06/22

#endif