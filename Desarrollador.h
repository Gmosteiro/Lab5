#ifndef DESARROLLADOR
#define DESARROLLADOR
#include <string>
#include "Usuario.h"
using namespace std;

class Desarrollador: public Usuario{
private:
    string nomEmp;
public:
    Desarrollador();
    Desarrollador(string email, string pass, string nomEmp);
    string getNomEmp();
    void setNomEmp(string nomEmp);
    ~Desarrollador();   
};
#endif