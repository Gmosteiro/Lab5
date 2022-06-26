#ifndef ICUSUARIO
#define ICUSUARIO

#include<string>
#include<map>

using namespace std;

class ICUsuario{
        
    public:
        virtual bool altaUsuario()=0;
        
        virtual bool datosComunes(string email, string pass) = 0;
        virtual void datosEmpresa(string empNom) = 0;
        virtual bool datosJugador(string nickname, string desc) = 0;
        virtual void cancelar()= 0;
        
};     

//modification 06/06/22

#endif