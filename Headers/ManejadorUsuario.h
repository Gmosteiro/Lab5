#ifndef MANEJADORUSUARIO
#define MANEJADORUSUARIO
#include "Usuario.h"
#include "Jugador.h"
#include "Desarrollador.h"
#include <map>
#include <list>

class ManejadorUsuario{
    private: 
        static ManejadorUsuario* instancia;
        ManejadorUsuario();
        map<string, Usuario*> colUsuarios;
    public:
        static ManejadorUsuario* getInstancia();
        map<string,Usuario*> getUsuarios();
        Usuario* getUsuario(string);
        void removerUsuario(Usuario*);
        bool agregarUsuario(Usuario*);
        bool existeUsuario(string);
        ~ManejadorUsuario(); 
};
#endif
