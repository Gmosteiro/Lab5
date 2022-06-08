#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "../Datatypes/DTFechaHora.h"
#include "Partida.h"

class PartidaIndividual: public Partida{

    private:
        bool continua;
    public:
        PartidaIndividual();
        PartidaIndividual(DTFechaHora fechaHora, int duracion, bool continua);
        bool getContinua();
        void setContinua(bool continua);
        ~PartidaIndividual();
};

#endif