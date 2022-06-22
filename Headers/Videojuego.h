#ifndef VIDEOJUEGO
#define VIDEOJUEGO
#include <string>
#include <map>
#include "Usuario.h"
#include "Categoria.h"
#include "Suscripcion.h"
#include "Partida.h"

using namespace std;

class Videojuego{
private:
    string nombre, desc;
    int costo, totalHoras;
    Usuario* desarrollador;
    map<string,Categoria*> categorias;
    map<string,Suscripcion*> suscripciones;
    map<int,Partida*> partidas;

public:
    Videojuego();
    Videojuego(string nombre, string desc, int costo, int totalHoras, Usuario* desarrollador, map<string,Categoria*> categorias, map<string,Suscripcion*> suscripciones, map<int,Partida*> partidas);
    string getNombre();
    void setNombre(string nombre);
    string getDesc();
    void setDesc(string desc);
    int getCosto();
    void setCosto(int costo);
    int getTotalHoras();
    void setTotalHoras(int totalHoras);
    Usuario* getDesarrollador();
    void setDesarrollador(Usuario* desarrollador);
    map<string,Categoria*> getCategorias();
    void setCategorias(map<string,Categoria*> categorias);
    map<string,Suscripcion*> getSuscripciones();
    void setSuscripciones(string id, Suscripcion* sus);
    map<int,Partida*> getPartidas();
    void setPartidas(int id, Partida* par);
    ~Videojuego();   
};
#endif