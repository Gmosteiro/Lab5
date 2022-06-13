#include <iostream>

#include "./Headers/Fabrica.h"
#include "./Headers/ICCategoria.h"
#include "./Headers/ICSesion.h"
#include "./Headers/ICUsuario.h"
#include "./Headers/ICVideojuego.h"



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


//Iniciar sesión
void menuIniciarSesion() {
    cout << "----------------------------------------------" << endl;
    cout << "________________Iniciar sesión________________" << endl;
    cout << "----------------------------------------------" << endl;

    cout << "->  Ahora la Contraseña: ";

    cout << "---------------------------" << endl;
    cout << "Se inicio sesión ANASHEY!" << endl;
    cout << "---------------------------" << endl;


    cout << "------------------------------------------" << endl;
    cout << "Contraseña incorrecta o usuario no existe!" << endl;
    cout << "------------------------------------------" << endl;
}

void menuAltaDeUsuario() {
    
    IContUsuario = Factorio->getICUsuario();
    

    cout << "----------------------------------------------" << endl;
    cout << "______________Alta de usuario_________________" << endl;
    cout << "----------------------------------------------" << endl;

    try
    {
        string pass, email;
        cout<< "Ingrese email: \n"<< endl;
        leerString(email);
        cout<< "Ingrese contraseña: \n"<< endl;
        leerString(pass);
        IContUsuario->datosComunes(email, pass);

        int tipo;
        cout << "Es desarrollador(1) o Usuario (2)? \n";
        cin >> tipo;
        switch (tipo)
        {
        case 1:{
                string empresa;
                cout << "Ingrese nombre de empresa: \n";
                leerString(empresa);
                IContUsuario->datosEmpresa(empresa);
                IContUsuario->altaUsuario();
            }
            break;        
        case 2:{
                string nickname, descripcion;
                cout << "Ingrese nickname \n";
                leerString(nickname);
                cout << "Ingrese decripcion \n";
                leerString(descripcion);
                bool a = IContUsuario->datosJugador(nickname,descripcion);
                 while(a)
                 {
                 int opcion = 1;
                    cout << "Ya existe un jugador con ese nickname! \n";
                    cout << "Desea cancelar(0) o reintentar (1) \n";
                    cin >> opcion;
                    if(opcion !=0){
                        
                        leerString(nickname);
                        a = IContUsuario->datosJugador(nickname,descripcion);

                    }
                    //cancelar hacelo sanit.jpg
                    break;   
                 }
                    IContUsuario->altaUsuario();
                }
            break;
        default:
            throw invalid_argument("No existe el tipo " + tipo);
            break;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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
         
                break;
            case 3:
                system("clear");
        
                break;
            case 4:
                system("clear");
            
                break;
            case 5:
                system("clear");
              
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
       
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};

