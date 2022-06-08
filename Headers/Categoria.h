#ifndef CATEGORIA
#define CATEGORIA
#include <string>

using namespace std;

class Categoria{
private:
    int id;
    string genero, plataforma, desc;
public:
    Categoria();
    Categoria(int id, string genero, string plataforma, string desc);
    int getId();
    void setId(int id);
    string getGenero();
    void setGenero(string genero);
    string getPlataforma();
    void setPlataforma(string plataforma);
    string getDesc();
    void setDesc(string desc);
    ~Categoria();   
};
#endif