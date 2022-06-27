#include <iostream>
#include <chrono>
#include <thread>

#include "./Headers/Fabrica.h"
#include "./Headers/ICCategoria.h"
#include "./Headers/ICSesion.h"
#include "./Headers/ICUsuario.h"
#include "./Headers/ICVideojuego.h"
#include "./Headers/ICPartida.h"
#include "./Headers/Sesion.h"
#include "./Headers/Usuario.h"
#include "./Headers/Desarrollador.h"
#include "./Headers/Jugador.h"
#include "./Headers/Videojuego.h"

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@(**,,,,,,,,,,,,,**#@@@@@@@@@@@@@@@
//@@@@@@@@@@@@*,,,,,,,,,,,,,,,,,,,,,,,,*/@@@@@@@@@@@
//@@@@@@@@@/,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@@@
//@@@@@@@/,,,,,,,,,,,,,,,,,,,@@@@@@@@@(,,,,,,%@@@@@@
//@@@@@@,,,,,,,,,,,,,,,,,,,@@%,,&@@*,,@@&,,,,,*@@@@@
//@@@@@,,,,,,,,,,,,,,,,,,,@@.,@@@@@@@/,@@/,,,,,,@@@@
//@@@@,,,,,,,,,,,,,,,,,,,@@@.,@@@@@@@,,@@*,,,,,,,@@@
//@@@&,,,,,,,,,,,,,,,,,@@@@@@@,,,%(,,#@@*,,,,,,,,@@@ debadelai no play no pary
//@@@@@@@@%,,,,,,,,,,@@@@@@@@@@@@@@@@@,,,,,,,,,,,@@@
//@@@&@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,,,,,,,,,,,@@@
//@@@@,,,,(@@@@@@@@@@&,@@@@(,,,,,,,,,,,,,,,,,,,,,@@@
//@@@@@,,,,,,,@@@@@@@(,@@@,,,,,,,,,,,,,,,,,,,,,,@@@@
//@@@@@@,,,,,,,@@@@##@@@@,,,,,,,,,,,,,,,,,,,,,,@@@@@
//@@@@@@@(,,,,,,,,.**,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@
//@@@@@@@@@#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@@@
//@@@@@@@@@@@&*,,,,,,,,,,,,,,,,,,,,,,,,,#@@@@@@@@@@@
//@@@@@@@@@@@@@@@&#,,,,,,,,,,,,,,,,,%&@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@


using namespace std;

Fabrica *Factorio;
ICCategoria *IContCategoria;
ICSesion *IContSesion;
ICVideojuego *IContVideojuego;
ICUsuario *IContUsuario;
ICSuscripcion *IContSuscripcion;
ICPartida *IContPartida;

void leerString(string &aux){
        cin >>ws;
        getline(cin,aux);
}

void firstLoad(){

    system("clear");
    cout << "loading experience...\n" << endl;

    string hello = "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@(**,,,,,,,,,,,,,**#@@@@@@@@@@@@@@@\n@@@@@@@@@@@@*,,,,,,,,,,,,,,,,,,,,,,,,*/@@@@@@@@@@@\n@@@@@@@@@/,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@@@\n@@@@@@@/,,,,,,,,,,,,,,,,,,,@@@@@@@@@(,,,,,,%@@@@@@\n@@@@@@,,,,,,,,,,,,,,,,,,,@@%,,&@@*,,@@&,,,,,*@@@@@\n@@@@@,,,,,,,,,,,,,,,,,,,@@.,@@@@@@@/,@@/,,,,,,@@@@\n@@@@,,,,,,,,,,,,,,,,,,,@@@.,@@@@@@@,,@@*,,,,,,,@@@\n@@@&,,,,,,,,,,,,,,,,,@@@@@@@,,,%(,,#@@*,,,,,,,,@@@ debadelai no play no pary\n@@@@@@@@%,,,,,,,,,,@@@@@@@@@@@@@@@@@,,,,,,,,,,,@@@\n@@@&@@@@@@@@@@@@@@@@@@@@@@@@@,,,,,,,,,,,,,,,,,,@@@\n@@@@,,,,(@@@@@@@@@@&,@@@@(,,,,,,,,,,,,,,,,,,,,,@@@\n@@@@@,,,,,,,@@@@@@@(,@@@,,,,,,,,,,,,,,,,,,,,,,@@@@\n@@@@@@,,,,,,,@@@@##@@@@,,,,,,,,,,,,,,,,,,,,,,@@@@@\n@@@@@@@(,,,,,,,,.**,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@\n@@@@@@@@@#,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,%@@@@@@@@\n@@@@@@@@@@@&*,,,,,,,,,,,,,,,,,,,,,,,,,#@@@@@@@@@@@\n@@@@@@@@@@@@@@@&#,,,,,,,,,,,,,,,,,%&@@@@@@@@@@@@@@\n@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@\n\n";
        int x=0;
        while ( hello[x] != '\0')
            {
            cout << hello[x];
            std::chrono::milliseconds timespan(5); // or whatever
            std::this_thread::sleep_for(timespan);
            x++;
        };

}


void menu() {
    cout << "\t\t\t______________________" << endl;
    cout << "\n\t\t\t_VIDEOJUEGOS ANASHEyS_" << endl;
    cout << "\t\t\t______________________\n\n" << endl;
    cout << "1). Alta Usuario" << endl;
    cout << "2). Iniciar Sesión" << endl;
    cout << "3). Cerrar Sesión" << endl;
    cout << "4). Agregar Categoría" << endl;
    cout << "5). Agregar Videojuego" << endl;
    cout << "6). Suscribirse a videojuego" << endl;
    cout << "7). Iniciar partida" << endl;
    cout << "8). Ver informacion de videojuego" << endl;
    cout << "9). Eliminar videojuego" << endl;
    cout << "10). Asignar puntaje a videojuego" << endl;
    cout << "11). Cancelar suscripción a videojuego" << endl;
    cout << "12). Buscar videojuego por categoría" << endl;
    cout << "13). Ranking de videojuegos" << endl;
    cout << "14). Ver partidas de un videojuego" << endl;
    cout << "15). Cargar datos de prueba" << endl;
    cout << "16). Salir" << endl;
    cout << "___________________________\n" << endl;
    cout << "OPCION: ";
}

void menuAltaDeUsuario() {
    
    IContUsuario = Factorio->getICUsuario();
    
    cout << "----------------" << endl;
    cout << "- Alta Usuario -" << endl;
    cout << "----------------\n" << endl;
    try
    {
        string pass, email, empresa, nickname, descripcion;
        int tipo = 0;
        int opcion = 1;
        bool a = false;

        cout<< "Ingrese email: ";
        leerString(email);
        cout<< "Ingrese contraseña: ";
        leerString(pass);
        
        while(IContUsuario->datosComunes(email, pass)){
            cout<< "Ya existe un usuario con ese email, ingrese otro: ";
            leerString(email);
        }
       
        cout << "Es Desarrollador(1) o Jugador (2): "; //editado 13/06/2022
        cin >> tipo;

        switch (tipo)
        {
            case 1:
                {                
                    cout << "Ingrese el nombre de empresa: ";
                    leerString(empresa);
                    IContUsuario->datosEmpresa(empresa);
                }
                break;        
            case 2:
                {                
                    cout << "Ingrese su nickname: ";
                    leerString(nickname);
                    cout << "Ingrese la descripcion: ";
                    leerString(descripcion);
                    a = IContUsuario->datosJugador(nickname,descripcion);
                    while(a)
                    {                                            
                        cout << "Ya existe un jugador con ese nickname!" << endl;
                        cout << "Desea cancelar(0) o reintentar (1)" << endl;
                        cin >> opcion;
                        if(opcion !=0)
                        {
                            cout << "Ingrese el nuevo nickname: ";//nasheeee
                            leerString(nickname);
                            a = IContUsuario->datosJugador(nickname,descripcion);
                        }
                        else
                        {
                            system("clear");
                            cout << "Operacion cancelada\n" << endl;
                            IContUsuario->cancelar();
                            a = false;
                        }
                    }             
                }
                break;
            default:
                throw invalid_argument("No existe el tipo seleccionado\n");
                break;
        }

        cout << "Aceptar(1) o Rechazar(0): ";
        cin >> tipo;
        
        if(tipo == 1){
            IContUsuario->altaUsuario();
            system("clear");
            cout << "------------------" << endl;
            cout << "- Usuario creado -" << endl;
            cout << "------------------\n" << endl;       
        }else{
            system("clear"); 
            cout << "-----------------------" << endl;
            cout << "- Operación cancelada -" << endl;
            cout << "-----------------------\n" << endl;
            IContUsuario->cancelar();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}

//Iniciar sesión
void menuIniciarSesion() {
    string email, pass;
    bool contra = false;
    int opcion;
    
    IContSesion = Factorio->getICSesion();
    Sesion* ses = Sesion::getInstancia();

    if(ses->getEstado()){
        system("clear");
        cout << "------------------------------" << endl;
        cout << "- Ya hay una sesión iniciada -" << endl;
        cout << "------------------------------\n" << endl;
        
    }else{
        
        system("clear");
        cout << "------------------" << endl;
        cout << "- Iniciar Sesión -" << endl;
        cout << "------------------\n" << endl;
        
        
        cout<< "Ingrese email: ";
        leerString(email);
        IContSesion->ingresaEmail(email);
        cout<< "Ingrese contraseña: ";
        leerString(pass);
        contra = IContSesion->verificarPass(pass);

        if(IContSesion->iniciarSesion())
        {
            system("clear");
            cout << "---------------------------------" << endl;
            cout << "- Sesión iniciada correctamente -" << endl;
            cout << "---------------------------------\n" << endl;
            
        }else
        {
            cout << "Contraseña o usuario incorrecto" << endl;//14/06/22
            cout << "Reintentar(1), Cancelar(0): ";       
            cin >> opcion;
            if(opcion==0)
            {
                system("clear");
                cout << "-----------------------" << endl;
                cout << "- Operacion cancelada -" << endl;
                cout << "-----------------------\n" << endl;
                IContSesion->cancelar();
            }else
            {   
                system("clear");             
                menuIniciarSesion();
            }
        }        
    }
}

void menuCerrarSesion() {

    IContSesion = Factorio->getICSesion();

    if(IContSesion->cerrarSesion()){
        cout << "------------------" << endl;
        cout << "- Sesión cerrada -" << endl;
        cout << "------------------\n" << endl;
    }else{ 
        cout << "------------------------------" << endl;
        cout << "- No hay una sesión iniciada -" << endl;
        cout << "------------------------------\n" << endl;
    }

}

bool esDesarrollador(){
    Sesion* ses = Sesion::getInstancia();
    Desarrollador* des = dynamic_cast<Desarrollador*>(ses->getUser());
    return des!=NULL;
}

bool esJugador(){
    Sesion* ses = Sesion::getInstancia();
    Jugador* jug = dynamic_cast<Jugador*>(ses->getUser());
    return jug!=NULL;
}

void menuAgregarCategoria() {

    IContCategoria = Factorio->getICCategoria();
    string genero,desc,plataforma;
    map<string, DTCategoria*> categorias;

    if(!esDesarrollador()){
        cout << "-----------------------" << endl;
        cout << "- No es desarrollador -" << endl;
        cout << "-----------------------\n" << endl;
    }else{

        system("clear");
        cout << "---------------------" << endl;
        cout << "- Agregar Categoría -" << endl;
        cout << "---------------------\n" << endl;
        cout << "-------------------------" << endl;
        cout << "- Categorias existentes -" << endl;
        cout << "-------------------------" << endl;
        categorias = IContCategoria->listarCategorias();

        for(map<string,DTCategoria*>::iterator it = categorias.begin(); it != categorias.end(); it++){
            cout << *(it->second) << endl;
        }
    
        cout<< "\nIngrese genero: ";
        leerString(genero);
        cout<< "Ingrese plataforma: ";
        leerString(plataforma);
        cout<< "Ingrese descripcion: ";
        leerString(desc);

        IContCategoria->ingresarGenero(genero);
        IContCategoria->ingresarPlataforma(plataforma);
        IContCategoria->ingresarDesc(desc);

        int caso;
        cout << "Acepta(1) o Rechaza(0): ";
        cin >> caso;
        
        if(caso == 1)
        {
            if(IContCategoria->agregarCategoria())
            {
                system("clear");
                cout << "----------------------" << endl;
                cout << "- Categoria agregada -" << endl;
                cout << "----------------------\n" << endl;
            }
            else
            {
                system("clear");
                cout << "-----------------------------------------------" << endl;
                cout << "- Ya existe la categoria, operación cancelada -" << endl;
                cout << "-----------------------------------------------\n" << endl;
            }       
        }
        else
        {
            system("clear"); 
            cout << "-----------------------" << endl;
            cout << "- Operación cancelada -" << endl;
            cout << "-----------------------\n" << endl;
            IContUsuario->cancelar();
        }
    }
}

void menuAgregarVideojuego() {

    IContVideojuego = Factorio->getICVideojuego();
    IContCategoria = Factorio->getICCategoria();
    
    Sesion* ses = Sesion::getInstancia();

    map<string, DTCategoria*> dtcat;
    map<string, DTCategoria*> dtcatag;
    
    if(!esDesarrollador()){
        cout << "-----------------------" << endl;
        cout << "- No es desarrollador -" << endl;
        cout << "-----------------------\n" << endl;
    }else{

        dtcat = IContCategoria->listarCategorias();

        if(dtcat.empty()){
            system("clear");
            cout << "---------------------------------------" << endl;
            cout << "- No existen categorias en el sistema -" << endl;//Hoy es  16/06/22
            cout << "---------------------------------------" << endl;    
        }else{
            //xd
            string nombre, descripcion, id_cat;
            int costo;

            system("clear");
            cout << "----------------------" << endl;
            cout << "- Agregar Videojuego -" << endl;
            cout << "----------------------\n" << endl;
            cout<< "Ingrese nombre: ";
            leerString(nombre);
            cout<< "Ingrese descripcion: ";
            leerString(descripcion);
            cout<< "Costo: ";
            cin >> costo;

            IContVideojuego->ingresarNombre(nombre);
            IContVideojuego->ingresarDescripcion(descripcion);
            IContVideojuego->ingresarCosto(costo);

            
            int stop = 1;
            while (stop!=0){
                    system("clear");
                    cout << "-------------------------" << endl;
                    cout << "- Listado de categorias -" << endl;
                    cout << "-------------------------" << endl;   

                    for(map<string,DTCategoria*>::iterator it = dtcat.begin(); it != dtcat.end(); it++){
                        cout << *(it->second) << endl;
                    }
                        
                    cout<< "\nSeleccione la categoria: ";
                    leerString(id_cat);

                if(IContVideojuego->ingresarCategoria(id_cat)){

                    DTCategoria* dta = new DTCategoria(id_cat);
                    dtcatag.insert({id_cat, dta});
                    
                    cout << "\n----------------------" << endl;
                    cout << "- Categoria agregada -" << endl;  // que si =)
                    cout << "----------------------\n" << endl;   

                    cout<< "Quiere ingresar otra categoria?"<< endl;
                    cout<< "Si(1) No(0): ";
                    cin >> stop;    
                }else{
                    cout << "\n---------------------------------------------" << endl;
                    cout << "- No existe la categoria, o ya fue agregada -" << endl;
                    cout << "---------------------------------------------\n" << endl;

                    cout<< "Quiere ingresar otra categoria?"<< endl;
                    cout<< "Si(1) No(0): ";
                    cin >> stop;
                }
            }

            system("clear");
            cout << "-----------------------------" << endl;
            cout << "- Informacion de videojuego -" << endl;
            cout << "-----------------------------\n" << endl;   

            cout << "Nombre: " << nombre << endl;
            cout << "Descripcion: " << descripcion << endl;
            cout << "Costo: " << costo << endl;
            cout << "Email de desarrolador: " << ses->getUser()->getEmail() << endl;
            cout << "Categorias: " << "\n" << endl;
            
            for(map<string,DTCategoria*>::iterator it = dtcatag.begin(); it != dtcatag.end(); it++){
                        cout << *(it->second) << endl;
            }
            cout<< "\nAcepta la creacion del videojuego?"<< endl;
            cout<< "Si(1) No(0): ";
            cin >> stop; 
            if(stop==0){
                IContVideojuego->cancelar();
            }else{
                if(IContVideojuego->agregarVideojuego()){
                    system("clear");
                    cout << "-------------------------------------" << endl;
                    cout << "- Videojuego agregado correctamente -" << endl;
                    cout << "-------------------------------------\n" << endl;  
                    
                }else{
                    system("clear");
                    cout << "-------------------------------------" << endl;
                    cout << "- No se puedo agregar el videojuego -" << endl;
                    cout << "-------------------------------------\n" << endl;   
                }
           }
      }
    }



}

void menuSuscribirseVideojuego(){

        Sesion* ses = Sesion::getInstancia();
        IContSuscripcion = Factorio->getICSuscripcion();
        map<string, Videojuego*> restoSus;
        map<string, Videojuego*> jugSus; 
        string nombre;
        int t;
        TipoPago tipo;

        if(!esJugador()){
            cout << "-----------------" << endl;
            cout << "- No es jugador -" << endl;
            cout << "-----------------\n" << endl;
        }else{

            jugSus = IContSuscripcion->listarSuscripcionesJugador();
            restoSus = IContSuscripcion->listarRestoSuscripciones();

            if(restoSus.empty()){
                system("clear");
                cout << "----------------------------------------------------" << endl;
                cout << "- No existen videojuegos o ya se suscribió a todos -" << endl;
                cout << "----------------------------------------------------\n" << endl;    
            }else{

                system("clear");
                cout << "---------------------------" << endl;
                cout << "- Suscribirse a videojugo -" << endl;
                cout << "---------------------------\n" << endl; //debe haber un videojuego
                
                cout << "- Suscripciones activas -\n" << endl;

                for(map<string,Videojuego*>::iterator it = jugSus.begin(); it != jugSus.end(); it++){
                    cout << "   Nombre: " << it->second->getNombre() << " - Costo: " << it->second->getCosto() << endl;
                }
        
                cout << "\n- Videojuegos sin suscripcion -\n" << endl;

                for(map<string,Videojuego*>::iterator it = restoSus.begin(); it != restoSus.end(); it++){
                    cout << "   Nombre: " << it->second->getNombre() << " - Costo: " << it->second->getCosto() << endl;
                }

                cout<< "\nSeleccione el videojuego: ";
                leerString(nombre);

                while(!IContSuscripcion->nombreVideojuego(nombre)){
                    cout<< "Ingrese un nombre correcto: ";
                    leerString(nombre);
                }

                cout<< "Seleccione el metodo de pago [DEBITO (0) o CREDITO (1)]: "; //VICHAR CON EL LAB VIEJO
                cin >> t;

                switch (t)
                {
                case 0:
                    tipo = DEBITO;
                    break;
                
                case 1:
                    tipo = CREDITO;
                    break;
                }

                IContSuscripcion->tipoPago(tipo);

                cout<< "Confirma la suscripción?"<< endl;
                cout<< "Si(1) No(0): ";
                int opcion = 0;
                cin >> opcion; 
                if(opcion==0){
                    IContSuscripcion->cancelar();
                    system("clear");
                    cout << "-----------------------" << endl;
                    cout << "- Operación cancelada -" << endl;
                    cout << "-----------------------\n" << endl;
                }else{

                    IContSuscripcion->suscribirseAVideojuego();
                    system("clear");
                    cout << "-------------------------" << endl;
                    cout << "- Suscrito exitosamente -" << endl;
                    cout << "--------------------------\n" << endl;        
                } 
                    
                }

            }

        }

void datosPrueba() {

    IContUsuario = Factorio->getICUsuario();

    IContUsuario->datosComunes("des","des");
    IContUsuario->datosEmpresa("CAPCON'T");
    IContUsuario->altaUsuario();

    IContUsuario = Factorio->getICUsuario();

    IContUsuario->datosComunes("des2","des2");
    IContUsuario->datosEmpresa("KONAMIN'T");
    IContUsuario->altaUsuario();

    IContUsuario = Factorio->getICUsuario();

    IContUsuario->datosComunes("jug", "jug");
    IContUsuario->datosJugador("NoobMaster69", "guiño guiño, codo codo");

    IContUsuario->altaUsuario();

    IContCategoria = Factorio->getICCategoria();

    IContCategoria->ingresarGenero("Futbol");
    IContCategoria->ingresarPlataforma("PC");
    IContCategoria->ingresarDesc("Pelotita go brr");
    IContCategoria->agregarCategoria();
    
    IContCategoria = Factorio->getICCategoria();

    IContCategoria->ingresarGenero("Tiros");
    IContCategoria->ingresarPlataforma("Play");
    IContCategoria->ingresarDesc("Piu piu");
    IContCategoria->agregarCategoria();

    IContVideojuego = Factorio->getICVideojuego();
    IContSesion = Factorio->getICSesion();
    
    IContSesion->ingresaEmail("des");
    IContSesion->verificarPass("des");
    IContSesion->iniciarSesion();

    IContVideojuego->ingresarNombre("FIFA");
    IContVideojuego->ingresarDescripcion("FURBO");
    IContVideojuego->ingresarCosto(1200);
    IContVideojuego->ingresarCategoria("FUTBOL_PC");
    IContVideojuego->agregarVideojuego();

    IContVideojuego = Factorio->getICVideojuego();

    IContVideojuego->ingresarNombre("COD");
    IContVideojuego->ingresarDescripcion("TIRITO");
    IContVideojuego->ingresarCosto(2400);
    IContVideojuego->ingresarCategoria("TIROS_PLAY");
    IContVideojuego->agregarVideojuego();
    // a juan no le gustan los comentarios :C

    IContSesion->cerrarSesion();

    IContVideojuego = Factorio->getICVideojuego();
    IContSesion = Factorio->getICSesion();
    
    IContSesion->ingresaEmail("des2");
    IContSesion->verificarPass("des2");
    IContSesion->iniciarSesion();

    IContVideojuego->ingresarNombre("BATEGIL");
    IContVideojuego->ingresarDescripcion("PIUM");
    IContVideojuego->ingresarCosto(2600);
    IContVideojuego->ingresarCategoria("TIROS_PLAY");
    IContVideojuego->agregarVideojuego();

    IContSesion->cerrarSesion();

    IContSesion->ingresaEmail("jug");
    IContSesion->verificarPass("jug");
    IContSesion->iniciarSesion();

    IContSuscripcion = Factorio->getICSuscripcion();

    IContSuscripcion->nombreVideojuego("FIFA");
    IContSuscripcion->tipoPago(CREDITO);
    IContSuscripcion->suscribirseAVideojuego();

    IContPartida = Factorio->getICPartida();

    IContPartida->selectVideojuego("FIFA", IContSuscripcion->listarSuscripcionesJugador());
    IContPartida->ingresarTipoPartida(S);
    IContPartida->continuaPartida(true);
    IContPartida->ingresarDuracion(10);
    IContPartida->iniciarPartida();

    IContPartida = Factorio->getICPartida();

    IContPartida->selectVideojuego("FIFA", IContSuscripcion->listarSuscripcionesJugador());
    IContPartida->ingresarTipoPartida(M);
    IContPartida->datosMultijugador(false, 3);
    IContPartida->ingresarDuracion(5);
    IContPartida->iniciarPartida();
    
    IContSesion->cerrarSesion();

    system("clear");
    cout << "--------------------------------" << endl;
    cout << "- Carga de datos base completa -" << endl;
    cout << "--------------------------------\n" << endl;

}

void menuIniciarPartida(){//22/06/22
//que frio que hace willyrex
    string juego;
    int tipo, duracion, conf, cantParticipantes, opcion;
    bool continua, enVivo;
    Videojuego* videojuego;
    map<string,Videojuego*> juegosU;

    IContSuscripcion = Factorio->getICSuscripcion();
    IContVideojuego = Factorio->getICVideojuego();
    IContPartida = Factorio->getICPartida();

    if(!esJugador()){
            system("clear");
            cout << "-----------------" << endl;
            cout << "- No es jugador -" << endl;
            cout << "-----------------\n" << endl;       
        }else{
            juegosU = IContSuscripcion->listarSuscripcionesJugador();
            if(juegosU.empty()){
                system("clear");
                cout << "----------------------------------" << endl;
                cout << "- No tiene suscripciones activas -" << endl;
                cout << "----------------------------------\n" << endl;       
            }else{
                
                   cout << "- Suscripciones activas -\n" << endl;

                    for(map<string,Videojuego*>::iterator it = juegosU.begin(); it != juegosU.end(); it++){
                        cout << "   - " << it->second->getNombre() << endl;
                    }

                cout<< "\nSeleccione el videojuego: ";
                leerString(juego);

                while(!IContPartida->selectVideojuego(juego, juegosU)){
                    cout<< "Ingrese un nombre correcto: ";
                    leerString(juego);
                }

    cout << "Seleccione el tipo de partida: 1- Individual; 2- Multijugador: ";
    cin >> tipo;
    switch (tipo)
    {
        case 1:
        IContPartida->ingresarTipoPartida(S);
        cout << "Es una continuación? 1- Si; 2- No: ";
        cin >> conf;
        if(conf == 1){
            continua = true;
        }else{
            continua = false;
        }

        IContPartida->continuaPartida(continua);

        break;
        case 2:
        IContPartida->ingresarTipoPartida(M);
        cout << "Ingrese la cantidad de jugadores: ";
        cin >> cantParticipantes;
        cout << "Fue transmitida en vivo? 1- Si; 2- No: ";
        cin >> conf;
        if(conf == 1){
            enVivo = true;
        }else{
            enVivo = false;
        }
        IContPartida->datosMultijugador(enVivo, cantParticipantes);
        break;
    }

    cout << "Ingrese la duración de la partida: ";
    cin >> duracion;

    IContPartida->ingresarDuracion(duracion);

    cout<< "Confirma la partida"<< endl;
    cout<< "Si(1) No(0): ";
    
    cin >> opcion; 
    if(opcion==0){
        IContPartida->cancelar();
        system("clear");
        cout << "-----------------------" << endl;
        cout << "- Operación cancelada -" << endl;
        cout << "-----------------------\n" << endl; 
    }else{
        
        IContPartida->iniciarPartida();
        
        system("clear");
        cout << "---------------------" << endl;
        cout << "- Partida ingresada -" << endl;
        cout << "---------------------\n" << endl;  

    }
    }
    }

}      

void menuMostrarInformacion(){
    Sesion* ses = Sesion::getInstancia();
    IContVideojuego = Factorio->getICVideojuego();
    
    
    if(ses->getEstado()){

        system("clear");
        cout << "---------------------------------" << endl;
        cout << "- Ver informacion de videojuego -" << endl;
        cout << "---------------------------------\n" << endl;  

        list <string> juegos = IContVideojuego->listarVideojuegos();

        if(!juegos.empty()){

            cout << "- Videojuegos -" << endl;

            for(list<string>::iterator it = juegos.begin(); it != juegos.end(); it++){
                cout << "   - " << it->data() << endl;
            }

            string juego;
            cout<< "\nSeleccione el videojuego: ";
            leerString(juego);
            IContVideojuego->ingresarNombre(juego);

            DTVideojuego* dt = IContVideojuego->verInformacionVideojuego(); 
            while(dt==NULL){
                cout<< "Seleccione un nombre valido: ";
                leerString(juego);
                IContVideojuego->ingresarNombre(juego);
                dt = IContVideojuego->verInformacionVideojuego();
            }
            
            system("clear");
            cout << *(dt) << endl;

            
        }else{

            system("clear");
            cout << "--------------------------" << endl;
            cout << "- No existen videojuegos -" << endl;
            cout << "--------------------------\n" << endl;  
        }   
    }else{
        system("clear");
        cout << "------------------------------" << endl;
        cout << "- No hay una sesión iniciada -" << endl;
        cout << "------------------------------\n" << endl;   
    }
    
}

void eliminarVideojuego(){

    IContVideojuego = Factorio->getICVideojuego();

    if(esDesarrollador()){

        list <string> juegos = IContVideojuego->listarVideojuegosDesarrollador();

        if(!juegos.empty()){

            system("clear");
            cout << "-----------------------" << endl;
            cout << "- Eliminar Videojuego -" << endl;
            cout << "-----------------------\n" << endl;  

            cout << "- Videjuegos registrados por usted -" << endl;

            for(list<string>::iterator it = juegos.begin(); it != juegos.end(); it++){
                cout << "   - " << it->data() << endl;
            }

            string juego;
            cout<< "\nSeleccione el videojuego: ";
            leerString(juego);
            IContVideojuego->ingresarNombre(juego);
            
            while(!IContVideojuego->buscarJuegoDesarrollador()){
                cout<< "Seleccione un nombre valido: ";
                leerString(juego);
                IContVideojuego->ingresarNombre(juego);
            }
            
            cout << "¿Quiere eliminar " << juego << "?" << endl;
            cout<< "Si(1) No(0): ";
            int opcion;
            cin >> opcion; 
            if(opcion==0){
                IContVideojuego->cancelar();
                system("clear");
                cout << "-----------------------" << endl;
                cout << "- Operación cancelada -" << endl;
                cout << "-----------------------\n" << endl;
            }else{
                
                IContVideojuego->eliminarVideojuego();
                
                system("clear");
                cout << "------------------------" << endl;
                cout << "- Videojuego eliminado -" << endl;
                cout << "------------------------\n" << endl;  

            }

        }else{

            cout << "------------------------------------" << endl;
            cout << "- No tiene videojuegos registrados -" << endl;
            cout << "------------------------------------\n" << endl;  

        }

    }else{
        cout << "-----------------------" << endl;
        cout << "- No es desarrollador -" << endl;
        cout << "-----------------------\n" << endl;  
    }


}

void menuAsignarPuntaje(){

    IContVideojuego = Factorio->getICVideojuego();

    if(esJugador()){

        list <Videojuego*> juegos = IContVideojuego->listarNombreDescVideojuegos();

        if(!juegos.empty()){

            system("clear");
            cout << "--------------------------------" << endl;
            cout << "- Asignar puntaje a videojuego -" << endl;
            cout << "--------------------------------\n" << endl;  

            cout << "- Videojuegos del sistema -" << endl;

            for(list<Videojuego*>::iterator it = juegos.begin(); it != juegos.end(); it++){
                cout << "   - Nombre: " << (*it)->getNombre() << " - Descripcion: " << (*it)->getDesc() << endl;
            }

            string juego;
            cout<< "\nSeleccione el videojuego: ";
            leerString(juego);
            IContVideojuego->ingresarNombre(juego);
            
            while(!IContVideojuego->buscarJuego()){
                cout<< "Seleccione un videojuego valido: ";
                leerString(juego);
                IContVideojuego->ingresarNombre(juego);
            }

            int puntuacion = 1;
            cout << "Seleccione su puntuacion (desde 1 a 5): ";
            cin >> puntuacion;
            
            IContVideojuego->ingresarPuntuacion(puntuacion);
            IContVideojuego->asignarPuntaje();

            system("clear");
            cout << "--------------------" << endl;
            cout << "- Puntaje asignado -" << endl;
            cout << "--------------------\n" << endl;  
            

        }else{

            system("clear");
            cout << "-----------------------------" << endl;
            cout << "- No hay juegos registrados -" << endl;
            cout << "-----------------------------\n" << endl;  

        }

    }else{
        system("clear");
        cout << "-----------------" << endl;
        cout << "- No es jugador -" << endl;
        cout << "-----------------\n" << endl;  
    }

}

void menuCancelarSuscripcion(){

    IContSuscripcion = Factorio->getICSuscripcion();

    if(esJugador()){

        map<string, Videojuego*> jugSus = IContSuscripcion->listarSuscripcionesJugador();

        if(!jugSus.empty()){

            system("clear");
            cout << "-------------------------------------" << endl;
            cout << "- Cancelar suscripción a videojuego -" << endl;
            cout << "-------------------------------------\n" << endl;  

            cout << "- Videojuegos a los que está suscrito -" << endl;

            for(map<string,Videojuego*>::iterator it = jugSus.begin(); it != jugSus.end(); it++){
                cout << "   - " << it->second->getNombre() << endl;
            }

            string nombre;
            cout<< "\nSeleccione el videojuego: ";
            leerString(nombre);

            while(!IContSuscripcion->nombreVideojuegoSuscrito(nombre)){
                cout<< "Ingrese un nombre correcto: ";
                leerString(nombre);
            }
            
            cout << "¿Esta seguro de cancelar su suscripcion?" << endl;
            cout<< "Si(1) No(0): ";
            int opcion;
            cin >> opcion; 
            if(opcion==0){
                system("clear");
                cout << "-----------------------" << endl;
                cout << "- Operación cancelada -" << endl;
                cout << "-----------------------\n" << endl;  
                IContSuscripcion->cancelar();
            }else{
                
                IContSuscripcion->cancelarSuscripcion();
                
                system("clear");
                cout << "-------------------------" << endl;
                cout << "- Suscripcion cancelada -" << endl;
                cout << "-------------------------\n" << endl;  

            }

        }else{

            system("clear");
            cout << "----------------------------------------" << endl;
            cout << "- No esta suscrito a ningun videojuego -" << endl;
            cout << "----------------------------------------\n" << endl;  

        }

    }else{
        system("clear");
        cout << "-----------------" << endl;
        cout << "- No es jugador -" << endl;
        cout << "-----------------\n" << endl;  
    }

}

void menuBuscarVideojuegoCategoria(){

    IContVideojuego = Factorio->getICVideojuego();
    IContCategoria = Factorio->getICCategoria();
    Sesion* ses = Sesion::getInstancia();

    if(ses->getEstado()){

        map<string, DTCategoria*> dtcat = IContCategoria->listarCategorias();

        if(!dtcat.empty()){

            system("clear");
            cout << "-----------------------------------" << endl;
            cout << "- Buscar videojuego por categoría -" << endl;
            cout << "-----------------------------------\n" << endl;  

            cout << "- Categorías del sistema -" << endl;

            for(map<string,DTCategoria*>::iterator it = dtcat.begin(); it != dtcat.end(); it++){
                cout << "   " <<*(it->second) << endl;
            }

            string cat;
            cout<< "\nSeleccione la categoria: ";
            leerString(cat);
            IContVideojuego->ingresarNombre(cat);

            list <Videojuego*> juegos = IContVideojuego->buscarPorCategoria();
            
            if(!juegos.empty()){
                system("clear");
                cout << "- Videojuegos con categoria " << cat << " -"<< endl;
                for(list<Videojuego*>::iterator it = juegos.begin(); it != juegos.end(); it++)
                    cout << "   - Nombre: " << (*it)->getNombre() << " - Descripcion: " << (*it)->getDesc() << endl;
            }else{
                system("clear");
                cout << "--------------------------------------------" << endl;
                cout << "- No existen videojuegos con esa categoria -" << endl;
                cout << "--------------------------------------------" << endl; 
            }
            
        }else{

            system("clear");
            cout << "-------------------------" << endl;
            cout << "- No existen categorias -" << endl;
            cout << "-------------------------" << endl; 
        }   
    }else{
        system("clear");
        cout << "-----------------------" << endl;
        cout << "- Debe iniciar sesion -" << endl;
        cout << "-----------------------" << endl;    
    }
    
}

void menuRanking(){

    IContVideojuego = Factorio->getICVideojuego();

    if(esDesarrollador()){

        system("clear");
        cout << "--------------------------" << endl;
        cout << "- Ranking de videojuegos -" << endl;
        cout << "--------------------------\n" << endl; 
        
        cout << "Listar por puntuacion (0) o por horas (1): ";
        int opcion;
        cin >> opcion; 

        list <DTVideojuego*> juegos = IContVideojuego->rankingVideojuegos(opcion);

        system("clear");
        cout << "\n- Listado de videojuegos -\n\n";

        if(!juegos.empty()){
                for(list<DTVideojuego*>::iterator it = juegos.begin(); it != juegos.end(); it++)
                    cout << **(it)<< "\n--------------------------------------------------------------------------\n" << endl;
        }else{
                system("clear");
                cout << "--------------------------" << endl;
                cout << "- No existen videojuegos -" << endl;
                cout << "--------------------------" << endl; 
        }
        

    }else{
        system("clear");
        cout << "-----------------------" << endl;
        cout << "- No es desarrollador -" << endl;
        cout << "-----------------------\n" << endl;  
    }

}

void menuVerPartidasVideojuego(){//24/06/22
    
    IContVideojuego = Factorio->getICVideojuego();

    if(esDesarrollador()){

        list <Videojuego*> juegos = IContVideojuego->listarNombreDescVideojuegos();

        if(!juegos.empty()){

            system("clear");
            cout << "---------------------------------" << endl;
            cout << "- Ver partidas de un videojuego -" << endl;
            cout << "---------------------------------\n" << endl;  

            for(list<Videojuego*>::iterator it = juegos.begin(); it != juegos.end(); it++){
                cout << "   - Nombre: " << (*it)->getNombre() << " - Descripcion: " << (*it)->getDesc() << endl;
            }

            string juego;
            cout<< "\nSeleccione el videojuego: ";
            leerString(juego);
            IContVideojuego->ingresarNombre(juego);
            
            while(!IContVideojuego->buscarJuego()){
                cout<< "Seleccione un nombre valido: ";
                leerString(juego);
                IContVideojuego->ingresarNombre(juego);
            }
            
            list<DTPartida*> partidas;
            partidas = IContVideojuego->verPartidas();

            system("clear");
            cout<< "\n - Partidas de " << juego << " -\n\n";

            for(list<DTPartida*>::iterator it = partidas.begin(); it != partidas.end(); it++){

                DTPartidaIndividual* pi = dynamic_cast<DTPartidaIndividual*>((*it));

                if(pi!=NULL){
                    cout << *pi << endl;
                }
                
                DTPartidaMultijugador* pm = dynamic_cast<DTPartidaMultijugador*>(*it);

                if(pm!=NULL){
                    cout << *pm << endl;
                }
                   
               
            }

        }else{

            system("clear");
            cout << "-----------------------------" << endl;
            cout << "- No hay juegos registrados -" << endl;
            cout << "-----------------------------\n" << endl;  

        }

    }else{
        system("clear");
        cout << "-----------------------" << endl;
        cout << "- No es desarrollador -" << endl;
        cout << "-----------------------\n" << endl;  
    }

}

int main() {

    //DEJAR AFUERA DEL WHILE

    Factorio = Fabrica::getInstancia();
    firstLoad();

    //DEJAR AFUERA DEL WHILE

     int opcion = 0;

    try {
        menu();
        cin.clear();
        cin >> opcion;

        while (opcion != 16) {
              switch (opcion) {
            case 1:
                system("clear");
                menuAltaDeUsuario();
               
                break;
            case 2:
                system("clear");
                menuIniciarSesion();
         
                break;
            case 3:
                system("clear");
                menuCerrarSesion();
        
                break;
            case 4:
                system("clear");
                menuAgregarCategoria();
            
                break;
            case 5:
                system("clear");
                menuAgregarVideojuego();
              
                break;
            case 6:
                system("clear");
                menuSuscribirseVideojuego();
              
                break;
            case 7:
                system("clear");
                menuIniciarPartida();
              
                break;
            case 8:
                system("clear");
                menuMostrarInformacion();

                break;
            case 9:
                system("clear");
                eliminarVideojuego();
              
                break;
            case 10:
                system("clear");
                menuAsignarPuntaje();
              
                break;
            case 11:
                system("clear");
                menuCancelarSuscripcion();
              
                break;
            case 12:
                system("clear");
                menuBuscarVideojuegoCategoria();
              
                break;
            case 13:
                system("clear");
                menuRanking();
              
                break;
            case 14:
                system("clear");
                menuVerPartidasVideojuego();
              
                break;
            case 15:
                system("clear");
                datosPrueba();
                
              
                break;
                
            default:
                system("clear");
                cout << "--------------------------------" << endl;
                cout << "- Seleccione una opcion valida -" << endl;
                cout << "--------------------------------\n" << endl;  
                break;
        }
            menu();
            cin.clear();
            cin >> opcion;
              }
       cout << "\033[0;31mS̷͉͐ė̷͔ǵ̷̭m̶̠̚e̶͍̍n̷̙͋t̵͓͊á̸̫t̵̨̓i̸̊͜o̵͔̽ṉ̴͐ ̸̮̑F̸͖̈́a̴̧̽u̷͉̓l̷̼̋t̸̰͗ ̸̦̃(̶̝͝C̴̳͊o̸̝̔r̵̘̍e̵̘͝ ̷̨͊D̶͖͘ų̸͆m̸̺̌p̵̩̃ȅ̴͇d̸̘̃)̴̡̃ \033[0;31m\n" << endl; //debadelai es la ley, ¿oiste ?iejo
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};

