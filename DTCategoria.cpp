#include "DTCategoria.h"

        DTCategoria::DTCategoria(){}
        DTCategoria::DTCategoria(string genero, string plataforma){
            this->genero = genero;
            this->plataforma = plataforma;
        }
        string DTCategoria::getGenero(){
            return this->genero;
        }
        void DTCategoria::setGenero(string genero){
            this->genero=genero;
        }
        string DTCategoria::getPlataforma(){
            return this->plataforma;
        }
        void DTCategoria::setPlataforma(string plataforma){
            this->plataforma = plataforma;
        }

        DTCategoria::~DTCategoria(){}