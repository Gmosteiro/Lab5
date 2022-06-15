#ifndef DTCATEGORIA
#define DTCATEGORIA
#include <string>
#include <iostream>

using namespace std;

class DTCategoria{
    private:
        string id;
    public:
        DTCategoria();
        DTCategoria(string id);
        string getId();
        void setId(string id);
        ~DTCategoria();

        friend ostream& operator <<(ostream&,DTCategoria&);
};

#endif