
#include "./Headers/Fabrica.h"
#include "./Headers/CCategoria.h"
#include "./Headers/CUsuario.h"
#include "./Headers/CVideojuego.h"

Fabrica* Fabrica::instancia = NULL;

Fabrica::Fabrica(){}

Fabrica* Fabrica::getInstancia(){
  if (instancia == NULL)
    instancia = new Fabrica();
  return instancia;
}

ICCategoria* Fabrica::getICCategoria(){
    return new CCategoria();
}
ICUsuario* Fabrica::getICUsuario(){
    return new CUsuario();
}
ICVideojuego* Fabrica::getICVideojuego(){
    return new CVideojuego();
}

Fabrica::~Fabrica(){}
