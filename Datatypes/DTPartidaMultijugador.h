#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR

#include <iostream>
#include "DTPartida.h"

using namespace std;

class DTPartidaMultijugador: public DTPartida{
    private:
        bool transmitido;
        int cantJugadores;
    public:
        DTPartidaMultijugador();
        DTPartidaMultijugador(int id, Usuario* user, DTFechaHora* fechaHora, int duracion, bool transmitido, int cantJugadores);
        bool getTransmitido();
        void setTransmitido(bool transmitido);
        int getCantJugadores();
        void setCantJugadores(int cantJugadores);
        ~DTPartidaMultijugador();

        friend ostream& operator <<(ostream&,DTPartidaMultijugador&);
};
#endif