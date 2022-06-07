#ifndef CUSUARIO
#define CUSUARIO
#include "ICUsuario.h"
#include "Desarrollador.h"
#include "Jugador.h"
#include "ManejadorUsuario.h"
#include <string>

using namespace std;

class CUsuario: public ICUsuario{
    private:
        string email, pass, empNom, nickname, desc;
    public:
        bool altaUsuario();
        void datosComunes(string email, string pass);
        void datosEmpresa(string empNom);
        bool datosJugador(string nickname, string desc);
        void cancelar();
};

#endif
