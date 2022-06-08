#ifndef ICCATEGORIA
#define ICCATEGORIA
#include "../Datatypes/DTCategoria.h"
#include "Categoria.h"

#include<string>
#include<map>

using namespace std;

class ICCategoria{
        
    public:
        virtual bool agregarCategoria()=0;

        virtual void ingresarGenero(string genero) = 0;
        virtual void ingresarPlataforma(string plataforma) = 0;
        virtual void ingresarDesc(string desc) = 0;
        virtual void cancelar()=0;
        
};     

//modification 06/06/22

#endif