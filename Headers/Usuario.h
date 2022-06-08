#ifndef USUARIO
#define USUARIO
#include <string>

using namespace std;

class Usuario{
private:
    string email, pass;
public:
    Usuario();
    Usuario(string email, string pass);
    string getEmail();
    void setEmail(string email);
    string getPass();
    void setPass(string pass);
    ~Usuario();   
};
#endif