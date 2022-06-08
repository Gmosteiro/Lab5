#ifndef FABRICA
#define FABRICA

#include "ICCategoria.h"
#include "ICUsuario.h"
#include "ICVideojuego.h"

class Fabrica {
  private:
    static Fabrica* instancia;
    Fabrica();
  public:
    static Fabrica* getInstancia();
    ICCategoria* getICCategoria();
    ICUsuario* getICUsuario();
    ICVideojuego* getICVideojuego();
    
    ~Fabrica();
};

#endif