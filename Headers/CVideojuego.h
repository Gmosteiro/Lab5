#ifndef CVIDEOJUEGO
#define CVIDEOJUEGO
#include "ICVideojuego.h"
#include "ManejadorCategoria.h"
#include "ManejadorVideojuego.h"
#include "Videojuego.h"
#include "Sesion.h"

using namespace std;

class CVideojuego: public ICVideojuego{
    private:
        string nombre, desc;
        int costo, cantJugadores, duracion;
        bool continua, transmitido;
        map<string, Categoria*> cat;
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
        bool ingresarCategoria (string id);
};

#endif