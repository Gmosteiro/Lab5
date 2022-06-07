#ifndef MANEJADORCATEGORIA
#define MANEJADORCATEGORIA
#include "Categoria.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <list>

std::string str = "Hello World";



class ManejadorCategoria{
    private: 
        static ManejadorCategoria* instancia;
        ManejadorCategoria();
        map<string, Categoria*> colCategorias;
        string key;
        void setKey(string data);
    public:
        static ManejadorCategoria* getInstancia();
        list<Categoria*> getCategorias();
        Categoria* getCategoria(string);
        void removerCategoria(Categoria*);
        bool agregarCategoria(Categoria*);
        bool existeCategoria(string);
        ~ManejadorCategoria(); 
};
#endif
