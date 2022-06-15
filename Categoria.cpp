#include "./Headers/Categoria.h"

    Categoria::Categoria(){}
    Categoria::Categoria(string id, string genero, string plataforma, string desc){
        this->id = id;
        this->genero = genero;
        this->plataforma = plataforma;
        this->desc = desc;
    }
    string Categoria::getId(){
        return this->id;
    }
    void Categoria::setId(string id){
        this->id = id;
    }
    string Categoria::getGenero(){
        return this->genero;
    }
    void Categoria::setGenero(string genero){
        this->genero = genero;
    }
    string Categoria::getPlataforma(){
        return this->plataforma;
    }
    void Categoria::setPlataforma(string plataforma){
        this->plataforma = plataforma;
    }
    string Categoria::getDesc(){
        return this->desc;
    }
    void Categoria::setDesc(string desc){
        this->desc = desc;
    }
    DTCategoria* Categoria::getDTCategoria(){
        DTCategoria* dt = new DTCategoria(this->id);
        return dt;
    }
    Categoria::~Categoria(){}  