#ifndef CCATEGORIA
#define CCATEGORIA
#include "Categoria.h"
#include "ICCategoria.h"
#include "ManejadorCategoria.h"

using namespace std;

class CCategoria: public ICCategoria{
    private:
        string genero, plataforma, desc;
    public:
        bool agregarCategoria();

        void ingresarDatos(string genero, string plataforma, string desc);
        void cancelar();
};

#endif