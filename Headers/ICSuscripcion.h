#ifndef ICSUSCRIPCION
#define ICSUSCRIPCION

#include "../Datatypes/DTSuscripcion.h"
#include "TipoPago.h"
#include <string>
#include <map>

using namespace std;

class ICSuscripcion{
        
    public:
    
        virtual bool suscribirseAVideojuego()=0;
        
        virtual map<string, DTSuscripcion*> listarSuscripcionesJugador() = 0;
        virtual map<string, DTSuscripcion*> listarRestoSuscripciones() = 0;

        virtual bool nombreVideojuego(string nombre) = 0;
        virtual void tipoPago(TipoPago tipo) = 0;
        virtual void cancelar()= 0;
        
};     

//modification 06/06/22

#endif