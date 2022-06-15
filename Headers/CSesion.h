
#ifndef CSESION
#define CSESION
#include "ICSesion.h"
#include "Sesion.h"
#include "ManejadorUsuario.h"
#include <string>

using namespace std;

class CSesion:public ICSesion {
  private:
    string email;
    bool pass;
  public:
    void ingresaEmail(string email); 
    bool verificarPass(string pass); 
    bool iniciarSesion();
    bool cerrarSesion();
    void cancelar();

 };

#endif