#ifndef DTPARTIDAINDIVIDUAL
#define DTPARTIDAINDIVIDUAL

#include <iostream>
#include "DTPartida.h"


using namespace std;

class DTPartidaIndividual: public DTPartida{

    private:
        bool continua;
    public:
        DTPartidaIndividual();
        DTPartidaIndividual(int id, Usuario* user, DTFechaHora* fechaHora, int duracion, bool continua);
        bool getContinua();
        void setContinua(bool continua);
        ~DTPartidaIndividual();

        friend ostream& operator <<(ostream&,DTPartidaIndividual&);
};
#endif