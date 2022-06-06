#ifndef DTCATEGORIA
#define DTCATEGORIA
#include <string>

using namespace std;

class DTCategoria{
    private:
        string genero, plataforma;
    public:
        DTCategoria();
        DTCategoria(string genero, string plataforma);
        string getGenero();
        void setGenero(string genero);
        string getPlataforma();
        void setPlataforma(string plataforma);
        ~DTCategoria();
};

#endif