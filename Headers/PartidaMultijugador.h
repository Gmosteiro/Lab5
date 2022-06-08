#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "../Datatypes/DTFechaHora.h"
#include "Partida.h"

class PartidaMultijugador: public Partida{
    private:
        bool transmitido;
        int cantJugadores;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DTFechaHora fechaHora, int duracion, bool transmitido, int cantJugadores);
        bool getTransmitido();
        void setTransmitido(bool transmitido);
        int getCantJugadores();
        void setCantJugadores(int cantJugadores);
        ~PartidaMultijugador();
};
#endif