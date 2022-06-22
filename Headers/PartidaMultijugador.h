#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"

class PartidaMultijugador: public Partida{
    private:
        bool transmitido;
        int cantJugadores;
    public:
        PartidaMultijugador();
        PartidaMultijugador(int id, Usuario* user, DTFechaHora fechaHora, int duracion, bool transmitido, int cantJugadores);
        bool getTransmitido();
        void setTransmitido(bool transmitido);
        int getCantJugadores();
        void setCantJugadores(int cantJugadores);
        ~PartidaMultijugador();
};
#endif