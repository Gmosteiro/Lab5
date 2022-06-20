#ifndef SUSCRIPCION
#define SUSCRIPCION
#include <string>
#include "../Datatypes/DTFechaHora.h"
#include "TipoPago.h"
#include "Jugador.h"


using namespace std;

class Suscripcion{
    
private:
    DTFechaHora fechaHora;
    TipoPago tipo;
    Jugador* jugador;
public:
    Suscripcion();
    Suscripcion(DTFechaHora fechaHora, TipoPago tipo, Jugador* jugador);
    DTFechaHora getDTFechaHora();
    void setDTFechaHora(DTFechaHora fechaHora);
    TipoPago getTipoPago();
    void setTipoPago(TipoPago tipo);
    Jugador* getJugador();
    void setJugador(Jugador* jugador);
    ~Suscripcion();   
};
#endif