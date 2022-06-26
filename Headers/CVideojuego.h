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
        int costo;
        int puntuacion;
        map<string, Categoria*> cat;
    public:
        DTVideojuego* verInformacionVideojuego();
        void eliminarVideojuego();
        bool agregarVideojuego();
        void asignarPuntaje();
    
        void ingresarNombre(string nombre);
        void ingresarDescripcion(string desc);
        void ingresarCosto(int costo);
        bool ingresarCategoria (string id);
        list <string> listarVideojuegos();
        list <string> listarVideojuegosDesarrollador();
        list <Videojuego*> listarNombreDescVideojuegos();
        bool buscarJuegoDesarrollador();
        bool buscarJuego();
        list <DTPartida*> verPartidas();
        void ingresarPuntuacion(int puntuacion);
        
        void cancelar();
};

#endif