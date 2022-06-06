#include "DTFechaHora.h"

        DTFechaHora::DTFechaHora(){}
        DTFechaHora::DTFechaHora(int dia, int mes, int anio, int hora, int minuto){
            this->dia = dia;
            this->mes = mes;
            this->anio = anio;
            this->hora = hora;
            this->minuto = minuto;
        }
        int DTFechaHora::getDia(){
            return this->dia;
        }
        void DTFechaHora::setDia(int dia){
            this->dia=dia;
        }
        int DTFechaHora::getMes(){
            return this->mes;
        }
        void DTFechaHora::setMes(int mes){
            this->mes = mes;
        }
        int DTFechaHora::getAnio(){
            return this->anio;
        }
        void DTFechaHora::setAnio(int anio){
            this->anio=anio;
        }
        int DTFechaHora::getHora(){
            return this->hora;
        }
        void DTFechaHora::setHora(int hora){
            this->hora=hora;
        }
        int DTFechaHora::getMinuto(){
            return this->minuto;
        }
        void DTFechaHora::setMinuto(int minuto){
            this->minuto=minuto;
        }
        DTFechaHora::~DTFechaHora(){}

        ostream& operator <<(ostream& salida,DTFechaHora& dtfh){
            cout << dtfh.dia << "/" << dtfh.mes << "/" << dtfh.anio << " - " << dtfh.hora << ":" << dtfh.minuto;
        return salida;
        }