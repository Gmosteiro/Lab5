#ifndef ICONTROLADOR
#define ICONTROLADOR
#include<list>
#include<string>
#include<map>

using namespace std;

class IControlador{
    public:
       virtual void altaUsuario(string email, string pass, string empNom, string nickname, string desc)=0;
       virtual void iniciarSesion(string email, string pass)=0;
       virtual void cerrarSesion()=0;
       virtual void agregarCategoria(string desc, string plataforma, string genero)=0;
       virtual void agregarVideojuego(string nombre, string desc, int costo, map<string, DtCategoria*> categorias)=0; //VICHAR LA DOBLE CLAVE
       virtual void suscribirsevideojuego(string nombre, tipoPago tipo, int costo )=0;
       virtual void iniciarPartida(string nombre, int duracion, bool continua, bool trasmitido, int cantJugadores)=0;
       virtual void verinformacionvideojuego()=0;
       virtual void eliminarvideojuego(string nombre)=0;
}


#endif