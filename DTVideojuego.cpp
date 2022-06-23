#include "./Datatypes/DTVideojuego.h"

        DTVideojuego::DTVideojuego(){}
        DTVideojuego::DTVideojuego(string nombre, string descripcion, string empresa, int costo, map <string,DTCategoria*> categorias, int totalHoras){
            this->nombre = nombre;
            this->descripcion = descripcion;
            this->empresa = empresa;
            this->costo = costo;
            this->categorias = categorias;
            this->totalHoras = totalHoras;
        }
        string DTVideojuego::getNombre(){
            return this->nombre;
        }
        void DTVideojuego::setNombre(string nombre){
            this->nombre = nombre;
        }
        string DTVideojuego::getDescripcion(){
            return this->descripcion;
        }
        
        void DTVideojuego::setDescripcion(string descripcion){
            //se me murio el micro fecha de muerte 22/06 19:31 pi pi piiiiiiiiiiiiii
            //cargalo bichicome
            this->descripcion=descripcion;
        }
        
        string DTVideojuego::getEmpresa(){
            return this->empresa;
        }
        void DTVideojuego::setEmpresa(string empresa){
            this->empresa=empresa;            
        }
        
        int DTVideojuego::getCosto(){
            return this->costo;
        }
        
        void DTVideojuego::setCosto(int costo){
            this->costo=costo;
        }
        map <string,DTCategoria*> DTVideojuego::getCategorias(){
            return this->categorias;
        }
        void DTVideojuego::setCategorias(string id, DTCategoria* dtc){
            this->categorias.insert({id,dtc});
        }
        int DTVideojuego::getTotalHoras(){
            return this->totalHoras;
        }
        void DTVideojuego::setTotalHoras(int totalHoras){
            this->totalHoras=totalHoras;
        }
        DTVideojuego::~DTVideojuego(){}

        //DTVideojuego(string nombre, string descripcion, string empresa, int costo, map <string,DTCategoria*> categorias, float totalHoras);
        ostream& operator <<(ostream& salida, DTVideojuego& dtv){
            cout << "Nombre: " << dtv.nombre << " - Empresa desarrolladora: " << dtv.empresa << " - Costo: " << dtv.costo << " - Descripcion: " << dtv.descripcion << endl;
            cout << "Categorias:" << endl;
            for(map<string,DTCategoria*>::iterator it = dtv.categorias.begin(); it != dtv.categorias.end(); it++)
                cout << *(it->second) << endl;
            cout << "\nTotal de horas: " << dtv.totalHoras << endl;
        return salida;
        }