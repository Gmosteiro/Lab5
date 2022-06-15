#ifndef CATEGORIA
#define CATEGORIA
#include <string>
#include "../Datatypes/DTCategoria.h"

using namespace std;

class Categoria{
private:
    string id, genero, plataforma, desc;
public:
    Categoria();
    Categoria(string id, string genero, string plataforma, string desc);
    string getId();
    void setId(string id);
    string getGenero();
    void setGenero(string genero);
    string getPlataforma();
    void setPlataforma(string plataforma);
    string getDesc();
    void setDesc(string desc);
    DTCategoria* getDTCategoria();
    ~Categoria();   
};
#endif