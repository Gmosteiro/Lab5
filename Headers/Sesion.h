#ifndef SESION
#define SESION
#include <iostream>
#include "Usuario.h"

using namespace std;

class Sesion{
    private:
        static Sesion* instancia;
        Sesion();
        Usuario* user;
        bool estado;
    public:
        static Sesion* getInstancia();
        Usuario* getUser();
        void setUser(Usuario* user);
        bool getEstado();
        void setEstado(bool estado);
        ~Sesion();
};
#endif
