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
        map<string, Categoria*> colCategorias;
    public:
        static ManejadorCategoria* getInstancia();
        map<string, Categoria*> getCategorias();
        Categoria* getCategoria(string);
        void removerCategoria(Categoria*);
        bool agregarCategoria(Categoria*);
        bool existeCategoria(string);
        string setKey(string);
        ~ManejadorCategoria(); 
};
#endif
