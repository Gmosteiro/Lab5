#ifndef VIDEOJUEGO
#define VIDEOJUEGO
#include <string>

using namespace std;

class Videojuego{
private:
    string nombre, desc;
    int costo, totalHoras;
public:
    Videojuego();
    Videojuego(string nombre, string desc, int costo, int totalHoras);
    string getNombre();
    void setNombre(string nombre);
    string getDesc();
    void setDesc(string desc);
    int getCosto();
    void setCosto(int costo);
    int getTotalHoras();
    void setTotalHoras(int totalHoras);
    ~Videojuego();   
};
#endif