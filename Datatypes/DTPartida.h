#ifndef DTPARTIDA
#define DTPARTIDA

#include <iostream>
#include "DTFechaHora.h"
#include "../Headers/Usuario.h"

using namespace std;

class DTPartida{
    private:
        DTFechaHora* fechaHora;
        Usuario* user;
        int duracion, id;
    public:
        DTPartida();
        DTPartida(int id, Usuario* user, DTFechaHora* fechaHora, int duracion);
        int getId();
        void setID(int id);
        Usuario* getUsuario();
        void setUsuario(Usuario* user);
        DTFechaHora* getDTFechaHora();
        void setDTFechaHora(DTFechaHora* fechaHora);
        int getDuracion();
        void setDuracion(int duracion);
        string getOpcion(bool opcion);
        virtual ~DTPartida();   
};
#endif