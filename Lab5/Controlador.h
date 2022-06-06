#ifndef CONTROLADOR
#define CONTROLADOR
#include "IControlador.h"
#include <list>
class Controlador: public IControlador{
    
    public:
    void altaUsuario(string email, string pass, string empNom, string nickname, string desc);
    void iniciarSesion(string email, string pass);
    void cerrarSesion();
    void agregarCategoria(string desc, string plataforma, string genero);
    void agregarVideojuego(string nombre, string desc, int costo, map<string, DtCategoria*> categorias); //VICHAR LA DOBLE CLAVE
    void suscribirsevideojuego(string nombre, tipoPago tipo, int costo );
    void iniciarPartida(string nombre, int duracion, bool continua, bool trasmitido, int cantJugadores);
    void verinformacionvideojuego();
    void eliminarvideojuego(string nombre);

};
#endif