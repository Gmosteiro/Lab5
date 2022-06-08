#ifndef MANEJADORCATEGORIA
#define MANEJADORCATEGORIA
#include "Categoria.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <list>

class ManejadorCategoria{
    private: 
        static ManejadorCategoria* instancia;
        ManejadorCategoria();
        map<int, Categoria*> colCategorias;
    public:
        static ManejadorCategoria* getInstancia();
        list<Categoria*> getCategorias();
        Categoria* getCategoria(int);
        void removerCategoria(Categoria*);
        bool agregarCategoria(Categoria*);
        bool existeCategoria(int);
        ~ManejadorCategoria(); 
};
#endif
