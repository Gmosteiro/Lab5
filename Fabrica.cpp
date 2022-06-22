
#include "./Headers/Fabrica.h"
#include "./Headers/CCategoria.h"
#include "./Headers/CUsuario.h"
#include "./Headers/CVideojuego.h"
#include "./Headers/CSesion.h"
#include "./Headers/CSuscripcion.h"
#include "./Headers/CPartida.h"

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
ICSesion* Fabrica::getICSesion(){
    return new CSesion();
}

ICSuscripcion* Fabrica::getICSuscripcion(){
  return new CSuscripcion();
}
ICPartida* Fabrica::getICPartida(){
  return new CPartida();
}


Fabrica::~Fabrica(){}
