#ifndef ICCATEGORIA
#define ICCATEGORIA
#include "DTCategoria.h"
#include "Categoria.h"

#include<string>
#include<map>

using namespace std;

class ICCategoria{
        
    public:
        virtual bool agregarCategoria()=0;

        virtual void ingresarDatos(string genero, string plataforma, string desc) = 0;
        virtual void cancelar()=0;
        
};     

//modification 06/06/22

#endif