#include "./Datatypes/DTCategoria.h"

        DTCategoria::DTCategoria(){}
        DTCategoria::DTCategoria(string id){
            this->id = id;
        }
        string DTCategoria::getId(){
            return this->id;
        }
        void DTCategoria::setId(string id){
            this->id=id;
        }
        
        DTCategoria::~DTCategoria(){}

        ostream& operator <<(ostream& salida, DTCategoria& dtc){
            cout << "- " << dtc.id;
        return salida;
        }