#include <iostream>

#include "./Headers/Fabrica.h"
#include "./Headers/ICCategoria.h"
#include "./Headers/ICSesion.h"
#include "./Headers/ICUsuario.h"
#include "./Headers/ICVideojuego.h"
#include "./Headers/Sesion.h"
#include "./Headers/Usuario.h"
#include "./Headers/Desarrollador.h"
#include "./Headers/Jugador.h"




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

void leerString(string &aux){
        cin >>ws;
        getline(cin,aux);
}


void menu() {
    cout << "______________________________________________________\n" << endl;
    cout << "_________________VIDEOJUEGOS ANASHEyS_________________\n" << endl;
    cout << "______________________________________________________\n" << endl;
    cout << "1). Alta Usuario" << endl;
    cout << "2). Iniciar sesion" << endl;
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
    
    cout << "----------------------------------------------" << endl;
    cout << "______________Alta de usuario_________________" << endl;
    cout << "----------------------------------------------" << endl;
    try
    {
        string pass, email, empresa, nickname, descripcion;
        int tipo = 0;
        int opcion = 1;
        bool a = false;

        cout<< "Ingrese email: \n"<< endl;
        leerString(email);
        cout<< "Ingrese contraseña: \n"<< endl;
        leerString(pass);
        IContUsuario->datosComunes(email, pass);
       
        cout << "Es desarrollador(1) o Jugador (2)? \n"; //editado 13/06/2022
        cin >> tipo;

        switch (tipo)
        {
            case 1:
                {                
                    cout << "Ingrese nombre de empresa: \n";
                    leerString(empresa);
                    IContUsuario->datosEmpresa(empresa);
                }
                break;        
            case 2:
                {                
                    cout << "Ingrese nickname \n";
                    leerString(nickname);
                    cout << "Ingrese descripcion \n";
                    leerString(descripcion);
                    a = IContUsuario->datosJugador(nickname,descripcion);
                    while(a)
                    {                                            
                        cout << "Ya existe un jugador con ese nickname! \n";
                        cout << "Desea cancelar(0) o reintentar (1) \n";
                        cin >> opcion;
                        if(opcion !=0)
                        {
                            cout << "Ingrese el nuevo nickname \n";
                            leerString(nickname);
                            a = IContUsuario->datosJugador(nickname,descripcion);
                        }
                        else
                        {
                            system("clear");
                            cout << "Operacion cancelada\n" << endl;
                            IContUsuario->cancelar();
                        }
                    }             
                }
                break;
            default:
                throw invalid_argument("No existe el tipo seleccionado\n");
                break;
        }

        cout << "Acepta(1) o Rechaza(0)?\n";
        cin >> tipo;
        
        if(tipo == 1){
            IContUsuario->altaUsuario();
            system("clear");
            cout <<"Usuario ingresado \n" << endl;        
        }else{
            system("clear"); 
            cout << "Operacion cancelada\n" << endl;   
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
        cout << "----------------------------------------------" << endl;
        cout << "----------Ya hay una sesion iniciada----------" << endl;
        cout << "----------------------------------------------" << endl;
        
    }else{
        
        cout << "----------------------------------------------" << endl;
        cout << "________________Iniciar sesión________________" << endl;
        cout << "----------------------------------------------" << endl;
        
        
        cout<< "Ingrese email: \n"<< endl;
        leerString(email);
        IContSesion->ingresaEmail(email);
        cout<< "Ingrese contraseña: \n"<< endl;
        leerString(pass);
        contra = IContSesion->verificarPass(pass);

        if(IContSesion->iniciarSesion())
        {
            cout << "------------------------------------------" << endl;
            cout << "Sesion iniciada ANASHEY" << endl; //*GRITO EXCLAMANDO* 
            cout << "------------------------------------------" << endl;
            
        }else
        {
            cout << "------------------------------------------" << endl;
            cout << "Contraseña o usuario incorrecto anasheyn't!\n" << endl;//14/06/22
            cout << "Reintentar(1), Cancelar(0)" << endl;
            cout << "------------------------------------------" << endl;            
            cin >> opcion;
            if(opcion==0)
            {
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
        cout << "----------------------------------------------" << endl;
        cout << "________________Sesión cerrada________________" << endl;
        cout << "----------------------------------------------" << endl;   
    }else{ 
        cout << "----------------------------------------------" << endl;
        cout << "----------No hay una sesión iniciada----------" << endl;
        cout << "----------------------------------------------" << endl;    
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
        cout << "----------------------------------------------" << endl;
        cout << "----------El usuario no es desarrollador----------" << endl;
        cout << "----------------------------------------------" << endl;    
    }else{

        categorias = IContCategoria->listarCategorias();

        for(map<string,DTCategoria*>::iterator it = categorias.begin(); it != categorias.end(); it++){
            cout << *(it->second) << "\n" << endl;
        }
    
        cout<< "Ingrese genero: \n"<< endl;
        leerString(genero);
        cout<< "Ingrese plataforma: \n"<< endl;
        leerString(plataforma);
        cout<< "Ingrese descripcion: \n"<< endl;
        leerString(desc);

        IContCategoria->ingresarGenero(genero);
        IContCategoria->ingresarPlataforma(plataforma);
        IContCategoria->ingresarDesc(desc);

        int caso;
        cout << "Acepta(1) o Rechaza(0)?\n";
        cin >> caso;
        
        if(caso == 1)
        {
            if(IContCategoria->agregarCategoria())
            {
                system("clear");
                cout <<"Categoria ingresada\n" << endl; 
            }
            else
            {
                system("clear");
                cout <<"Ya existe esa categoria, operacion cancelada\n" << endl; 
            }       
        }
        else
        {
            system("clear"); 
            cout << "Operacion cancelada\n" << endl;   
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
        cout << "----------------------------------------------" << endl;
        cout << "----------El usuario no es desarrollador----------" << endl;
        cout << "----------------------------------------------" << endl;    
    }else{

        dtcat = IContCategoria->listarCategorias();

        if(dtcat.empty()){
            system("clear");
            cout << "-------------------------------------------------------" << endl;
            cout << "----------No existen categorias en el sistema----------" << endl;//Hoy es  16/06/22
            cout << "-------------------------------------------------------" << endl;    
        }else{
            //xd
            string nombre, descripcion, id_cat;
            int costo;

            system("clear");
            cout<< "Ingrese Nombre del Videojuego: \n"<< endl;
            leerString(nombre);
            cout<< "Ingrese descripcion: \n"<< endl;
            leerString(descripcion);
            cout<< "Costo: \n"<< endl;
            cin >> costo;

            IContVideojuego->ingresarNombre(nombre);
            IContVideojuego->ingresarDescripcion(descripcion);
            IContVideojuego->ingresarCosto(costo);

            
            int stop = 1;
            while (stop!=0){
                    cout << "----------------------------------------------" << endl;
                    cout << "------------Categorias del sistema------------" << endl;
                    cout << "----------------------------------------------" << endl;   

                    for(map<string,DTCategoria*>::iterator it = dtcat.begin(); it != dtcat.end(); it++){
                        cout << *(it->second) << "\n" << endl;
                    }
                        
                    cout<< "Seleccione la categoria: \n"<< endl;
                    leerString(id_cat);

                if(IContVideojuego->ingresarCategoria(id_cat)){

                    DTCategoria* dta = new DTCategoria(id_cat);
                    dtcatag.insert({id_cat, dta});
                    
                    system("clear");
                    cout << "----------------------------------------------" << endl;
                    cout << "--------------Categoria agregada--------------" << endl;
                    cout << "----------------------------------------------\n" << endl;   

                    cout<< "Quiere ingresar otra categoria? \n"<< endl;
                    cout<< " Si(1) No(0)  \n"<< endl;
                    cin >> stop;    
                }else{
                    system("clear");
                    cout << "---------------------------------------------------" << endl;
                    cout << "-----No existe la categoria, o ya fue agregada-----" << endl;
                    cout << "---------------------------------------------------\n" << endl;

                    cout<< "Quiere ingresar otra categoria? \n"<< endl;
                    cout<< " Si(1) No(0)  \n"<< endl;
                    cin >> stop;
                }
            }

            cout << "---------------------------------------------" << endl;
            cout << "----------Informacion de videojuego----------" << endl;
            cout << "---------------------------------------------\n" << endl;   

            cout << "Nombre: " << nombre << "\n" << endl;
            cout << "Descripcion: " << descripcion << "\n" << endl;
            cout << "Costo: " << costo << "\n" << endl;
            cout << "Email de desarrolador: " << ses->getUser()->getEmail() << "\n" << endl;
            cout << "Categorias: " << "\n" << endl;
            
            for(map<string,DTCategoria*>::iterator it = dtcatag.begin(); it != dtcatag.end(); it++){
                        cout << *(it->second) << "\n" << endl;
            }
            cout<< "Acepta la creacion del videojuego? \n"<< endl;
            cout<< "Si(1) No(0)  \n"<< endl;
            cin >> stop; 
            if(stop==0){
                IContVideojuego->cancelar();
            }else{
                if(IContVideojuego->agregarVideojuego()){
                    system("clear");
                    cout << "---------------------------------------------" << endl;
                    cout << "------Videojuego agregado correctamente------" << endl;
                    cout << "---------------------------------------------\n" << endl;  
                    
                }else{
                    system("clear");
                    cout << "--------------------------------------------------------" << endl;
                    cout << "--------- No se puedo agregar el videojuego :c ---------" << endl;
                    cout << "--------------------------------------------------------\n" << endl;   
                }
           }
      }
    }



}


int main() {

    //DEJAR AFUERA DEL WHILE

    Factorio = Fabrica::getInstancia();

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
              
                break;
            case 7:
                system("clear");
              
                break;
            case 8:
                system("clear");
              
                break;
            case 9:
                system("clear");
              
                break;
            case 10:
                system("clear");
              
                break;
            case 11:
                system("clear");
              
                break;
            case 12:
                system("clear");
              
                break;
            case 13:
                system("clear");
              
                break;
            case 14:
                system("clear");
              
                break;
            case 15:
                system("clear");
              
                break;
                
            default:
                cout << "\nSeleccione una opcion valida\n" << endl;
                break;
        }
            menu();
            cin.clear();
            cin >> opcion;
              }
       cout << "\033[0;31mS̷͉͐ė̷͔ǵ̷̭m̶̠̚e̶͍̍n̷̙͋t̵͓͊á̸̫t̵̨̓i̸̊͜o̵͔̽ṉ̴͐ ̸̮̑F̸͖̈́a̴̧̽u̷͉̓l̷̼̋t̸̰͗ ̸̦̃(̶̝͝C̴̳͊o̸̝̔r̵̘̍e̵̘͝ ̷̨͊D̶͖͘ų̸͆m̸̺̌p̵̩̃ȅ̴͇d̸̘̃)̴̡̃ \033[0;31m\n" << endl; //debadelai
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};

