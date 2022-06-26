#ifndef DTVIDEOJUEGO
#define DTVIDEOJUEGO
#include "DTCategoria.h"
#include <iostream>
#include <map>

using namespace std;

class DTVideojuego{
    private:
        string nombre, descripcion, empresa;
        int costo;
        map <string,DTCategoria*> categorias;
        int totalHoras;
        float puntaje;
        
    public:
        DTVideojuego();
        DTVideojuego(string nombre, string descripcion, string empresa, int costo, map <string,DTCategoria*> categorias, int totalHoras, float puntaje);
        string getNombre();
        void setNombre(string nombre);
        string getDescripcion();
        void setDescripcion(string descripcion);
        string getEmpresa();
        void setEmpresa(string empresa);
        int getCosto();
        void setCosto(int costo);
        map <string,DTCategoria*> getCategorias();
        void setCategorias(string id, DTCategoria* dtc);
        int getTotalHoras();
        void setTotalHoras(int totalHoras);
        float getPuntaje();
        void setPuntaje(float puntaje);
        ~DTVideojuego();

        friend ostream& operator <<(ostream&,DTVideojuego&);
};
#endif