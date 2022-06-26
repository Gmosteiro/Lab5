#ifndef PARTIDA
#define PARTIDA
#include "../Datatypes/DTFechaHora.h"
#include "../Datatypes/DTPartida.h"
#include "Jugador.h"

using namespace std;

class Partida{
private:
    DTFechaHora* fechaHora;
    Jugador* user;
    int duracion, id;
public:
    Partida();
    Partida(int id, Jugador* user, DTFechaHora* fechaHora, int duracion);
    int getId();
    void setID(int id);
    Jugador* getUsuario();
    void setUsuario(Jugador* user);
    DTFechaHora* getDTFechaHora();
    void setDTFechaHora(DTFechaHora* fechaHora);
    int getDuracion();
    void setDuracion(int duracion);
    
    virtual DTPartida* getDTPartida()=0;
    virtual ~Partida();   
};
#endif