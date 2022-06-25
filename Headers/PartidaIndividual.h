#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"
#include "../Datatypes/DTPartidaIndividual.h"

class PartidaIndividual: public Partida{

    private:
        bool continua;
    public:
        PartidaIndividual();
        PartidaIndividual(int id, Usuario* user, DTFechaHora* fechaHora, int duracion, bool continua);
        bool getContinua();
        void setContinua(bool continua);
        DTPartida* getDTPartida();
        ~PartidaIndividual();
};

#endif