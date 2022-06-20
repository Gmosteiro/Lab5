#ifndef MANEJADORVIDEOJUEGO
#define MANEJADORVIDEOJUEGO
#include "Videojuego.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <list>

class ManejadorVideojuego{
    private: 
        static ManejadorVideojuego* instancia;
        ManejadorVideojuego();
        map<string, Videojuego*> colVideojuegos;
    public:
        static ManejadorVideojuego* getInstancia();
        map<string, Videojuego*> getVideojuegos();
        Videojuego* getVideojuego(string);
        void removerVideojuego(Videojuego*);
        bool agregarVideojuego(Videojuego*);
        bool existeVideojuego(string);
        ~ManejadorVideojuego(); 
};
#endif
