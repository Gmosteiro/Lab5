#ifndef VIDEOJUEGO
#define VIDEOJUEGO
#include <string>
#include <map>
#include "Usuario.h"
#include "Desarrollador.h"
#include "Categoria.h"
#include "Suscripcion.h"
#include "Partida.h"
#include "PartidaIndividual.h"
#include "PartidaMultijugador.h"
#include "Puntaje.h"
#include "../Datatypes/DTVideojuego.h"

using namespace std;

class Videojuego{
private:
    string nombre, desc;
    int costo;
    Desarrollador* desarrollador;
    map<string,Categoria*> categorias;
    map<string,Suscripcion*> suscripciones;
    map<int,Partida*> partidas;
    map<string,Puntaje*> puntajes;

public:
    Videojuego();
    Videojuego(string nombre, string desc, int costo, Desarrollador* desarrollador, map<string,Categoria*> categorias, map<string,Suscripcion*> suscripciones, map<int,Partida*> partidas, map<string,Puntaje*> puntajes);
    string getNombre();
    void setNombre(string nombre);
    string getDesc();
    void setDesc(string desc);
    int getCosto();
    void setCosto(int costo);
    Desarrollador* getDesarrollador();
    void setDesarrollador(Desarrollador* desarrollador);
    map<string,Categoria*> getCategorias();
    void setCategorias(map<string,Categoria*> categorias);
    map<string,Suscripcion*> getSuscripciones();
    void setSuscripciones(string id, Suscripcion* sus);
    map<int,Partida*> getPartidas();
    void setPartidas(int id, Partida* par);
    map<string,Puntaje*> getPuntajes();
    void setPuntajes(string mail, Puntaje* pun);
    DTVideojuego* getDTVideojuego();
    void borrarSuscripcionVideojuego(Usuario* user);
    ~Videojuego();   
};
#endif