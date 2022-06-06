#ifndef JUGADOR
#define JUGADOR
#include <string>
#include "Usuario.h"
using namespace std;

class Desarrollador: public Desarrollador{
private:
    string nomemp;
public:
    Desarrollador();
    Desarrollador(string nomemp);
    string getNomemp();
    void setNomemp(string nomemp);
    ~Desarrollador();   
};
#endif