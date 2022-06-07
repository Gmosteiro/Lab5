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
    public:
        static Sesion* getInstancia();
        Usuario* getUser();
        void setUser(Usuario* user);
        ~Sesion();
};
#endif
