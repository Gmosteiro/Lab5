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
        map<string, Categoria*> cat;
    public:
        void verInformacionVideojuego();
        void eliminarVideojuego();
        bool agregarVideojuego();
    
        void ingresarNombre(string nombre);
        void ingresarDescripcion(string desc);
        void ingresarCosto(int costo);
        bool ingresarCategoria (string id);
        void cancelar();
};

#endif