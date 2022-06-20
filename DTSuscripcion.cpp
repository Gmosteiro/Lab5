#include "./Datatypes/DTSuscripcion.h"

DTSuscripcion::DTSuscripcion(){}
DTSuscripcion::DTSuscripcion(string nombre, int costo){
    this->nombre = nombre;
    this->costo = costo;
}
string DTSuscripcion::getNombre(){
    return this->nombre;
}
void DTSuscripcion::setNombre(string nombre){
    this->nombre = nombre;
}
int DTSuscripcion::getCosto(){
    return this->costo;
}
void DTSuscripcion::setCosto(int costo){
    this->costo = costo;
}
DTSuscripcion::~DTSuscripcion(){}

ostream& operator <<(ostream& salida,DTSuscripcion& dts){
    cout << "   Nombre: " << dts.nombre << " - Costo: " << dts.costo;
    return salida;
}