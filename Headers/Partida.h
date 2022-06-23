#ifndef PARTIDA
#define PARTIDA
#include "../Datatypes/DTFechaHora.h"
#include "Usuario.h"

using namespace std;

class Partida{
private:
    DTFechaHora fechaHora;
    Usuario* user;
    int duracion, id;
public:
    Partida();
    Partida(int id, Usuario* user, DTFechaHora fechaHora, int duracion);
    int getId();
    void setID(int id);
    Usuario* getUsuario();
    void setUsuario(Usuario* user);
    DTFechaHora getDTFechaHora();
    void setDTFechaHora(DTFechaHora fechaHora);
    int getDuracion();
    void setDuracion(int duracion);
    virtual ~Partida();   
};
#endif