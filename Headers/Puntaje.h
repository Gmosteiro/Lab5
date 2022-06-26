#ifndef PUNTAJE
#define PUNTAJE
#include "Jugador.h"

using namespace std;

class Puntaje{
    
private:
    int puntaje;
    Jugador* jugador;
public:
    Puntaje();
    Puntaje(int puntaje, Jugador* jug);
    int getPuntaje();
    void setPuntaje(int puntaje);
    Jugador* getJugador();
    void setJugador(Jugador* jugador);
    ~Puntaje();   
};
#endif