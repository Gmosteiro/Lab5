#ifndef ICVIDEOJUEGO
#define ICVIDEOJUEGO
#include "DTCategoria.h"
#include "Categoria.h"

#include<string>
#include<map>

using namespace std;

class ICVideojuego{
        
    public:
        virtual void verInformacionVideojuego()=0;
        virtual void eliminarVideojuego()=0;
        virtual void agregarVideojuego()=0;
        virtual void iniciarPartida()=0;

        virtual void ingresarNombre(string nombre) = 0;
        virtual void ingresarDescripcion(string desc) = 0;
        virtual void ingresarCosto(int costo) = 0;
        virtual void ingresarCantJugadores(int cantJugadores)= 0;
        virtual void ingresarDuracion(int duracion)=0;
        virtual void ingresarContinua(bool continua) = 0;
        virtual void ingresarTrasmitido (bool transmitido)=0;
        virtual void ingresarCategoria (DTCategoria dtCat, Categoria* cat)=0;
        
};     

//modification 06/06/22

#endif