#ifndef CATEGORIA
#define CATEGORIA
#include <string>

using namespace std;

class Categoria{
private:
    string genero, plataforma, desc;
public:
    Categoria();
    Categoria(string genero, string plataforma, string desc);
    string getGenero();
    void setGenero(string genero);
    string getPlataforma();
    void setPlataforma(string plataforma);
    string getDesc();
    void setDesc(string desc);
    ~Categoria();   
};
#endif