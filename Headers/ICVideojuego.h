#ifndef ICVIDEOJUEGO
#define ICVIDEOJUEGO
#include "../Datatypes/DTCategoria.h"
#include "../Datatypes/DTVideojuego.h"
#include "Categoria.h"
#include "Videojuego.h"

#include<string>
#include<list>
#include<map>

using namespace std;

class ICVideojuego{
        
    public:
        virtual DTVideojuego* verInformacionVideojuego()=0;
        virtual void eliminarVideojuego()=0;
        virtual bool agregarVideojuego()=0;
        virtual void asignarPuntaje()=0;
        virtual list <Videojuego*> buscarPorCategoria()=0;
        virtual list <DTVideojuego*> rankingVideojuegos(int opcion)=0;

        virtual void ingresarNombre(string nombre) = 0;
        virtual void ingresarDescripcion(string desc) = 0;
        virtual void ingresarCosto(int costo) = 0;
        virtual bool ingresarCategoria (string id)=0;
        virtual list <string> listarVideojuegos()=0;
        virtual list <string> listarVideojuegosDesarrollador()=0;
        virtual list <Videojuego*> listarNombreDescVideojuegos()=0;
        virtual bool buscarJuegoDesarrollador()=0;
        virtual bool buscarJuego()=0;
        virtual list <DTPartida*> verPartidas()=0;
        virtual void ingresarPuntuacion(int puntuacion) = 0;
        virtual void cancelar ()=0;
        
};

#endif

//modification 06/06/22
