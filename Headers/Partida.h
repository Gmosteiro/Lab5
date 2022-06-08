#ifndef PARTIDA
#define PARTIDA
#include "../Datatypes/DTFechaHora.h"

using namespace std;

class Partida{
private:
    DTFechaHora fechaHora;
    int duracion;
public:
    Partida();
    Partida(DTFechaHora fechaHora, int duracion);
    DTFechaHora getDTFechaHora();
    void setDTFechaHora(DTFechaHora fechaHora);
    int getDuracion();
    void setDuracion(int duracion);
    ~Partida();   
};
#endif