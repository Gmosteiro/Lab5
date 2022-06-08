#ifndef ICSESION
#define ICSESION

#include <string>

using namespace std;

class ICSesion {
  public:
    virtual void ingresaEmail(string email) = 0;
    virtual bool verificarPass(string pass) = 0;
    virtual void iniciarSesion() = 0;
    virtual void cerrarSesion() = 0;
};

#endif







