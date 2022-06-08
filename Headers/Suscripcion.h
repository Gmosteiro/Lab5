#ifndef SUSCRIPCION
#define SUSCRIPCION
#include <string>
#include "../Datatypes/DTFechaHora.h"
#include "TipoPago.h"

using namespace std;

class Suscripcion{
private:
    DTFechaHora fechaHora;
    TipoPago tipo;
public:
    Suscripcion();
    Suscripcion(DTFechaHora fechaHora, TipoPago tipo);
    DTFechaHora getDTFechaHora();
    void setDTFechaHora(DTFechaHora fechaHora);
    TipoPago getTipoPago();
    void setTipoPago(TipoPago tipo);
    ~Suscripcion();   
};
#endif