#ifndef DTSUSCRIPCION
#define DTSUSCRIPCION
#include <string>
#include <iostream>

using namespace std;

class DTSuscripcion{
    private:
        string nombre;
        int costo;
    public:
        DTSuscripcion();
        DTSuscripcion(string nombre, int costo);
        string getNombre();
        void setNombre(string nombre);
        int getCosto();
        void setCosto(int costo);
        ~DTSuscripcion();

        friend ostream& operator <<(ostream&,DTSuscripcion&);
};

#endif