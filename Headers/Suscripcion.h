#ifndef SUSCRIPCION
#define SUSCRIPCION
#include <string>
#include "../Datatypes/DTFechaHora.h"
#include "TipoPago.h"
#include "Usuario.h"


using namespace std;

class Suscripcion{
    
private:
    DTFechaHora fechaHora;
    TipoPago tipo;
    Usuario* jugador;
public:
    Suscripcion();
    Suscripcion(DTFechaHora fechaHora, TipoPago tipo, Usuario* jugador);
    DTFechaHora getDTFechaHora();
    void setDTFechaHora(DTFechaHora fechaHora);
    TipoPago getTipoPago();
    void setTipoPago(TipoPago tipo);
    Usuario* getJugador();
    void setJugador(Usuario* jugador);
    ~Suscripcion();   
};
#endif