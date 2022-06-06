#ifndef CVIDEOJUEGO
#define CVIDEOJUEGO
#include "ICVideojuego.h"

using namespace std;

class CVideojuego: public ICVideojuego{
    private:
        string nombre, desc;
        int costo, cantJugadores, duracion;
        bool continua, transmitido;
        map<DTCategoria, Categoria*> cat;
    public:
        void verInformacionVideojuego();
        void eliminarVideojuego();
        void agregarVideojuego();
        void iniciarPartida();
        
        void ingresarNombre(string nombre);
        void ingresarDescripcion(string desc);
        void ingresarCosto(int costo);
        void ingresarCantJugadores(int cantJugadores);
        void ingresarDuracion(int duracion);
        void ingresarContinua(bool continua);
        void ingresarTrasmitido (bool transmitido);
        void ingresarCategoria (DTCategoria dtCat, Categoria* cat);
};

#endif