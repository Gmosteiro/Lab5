#ifndef CCATEGORIA
#define CCATEGORIA
#include "Categoria.h"
#include "ICCategoria.h"
#include "ManejadorCategoria.h"

using namespace std;

class CCategoria: public ICCategoria{
    private:
        int id;
        string genero, plataforma, desc;
    public:
        bool agregarCategoria();

        void ingresarGenero(string genero);
        void ingresarPlataforma(string plataforma);
        void ingresarDesc(string desc);
        void cancelar();
};

#endif