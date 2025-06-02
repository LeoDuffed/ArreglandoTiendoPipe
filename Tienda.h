//
// Created by Felipe on 11/22/2024.
// Mejorado por Leonardo 
//

#ifndef TIENDA_H
#define TIENDA_H
#include<string>
#include "Libro.h"


using namespace std;

class Tienda : public Libro{
private:
    string nombre;
public:
    // Construcotores 
    Tienda()
    {
        nombre = "";
    };
    Tienda(int librosComprados,int numeroDeLibros, string nombreN,string nombre):
    ::Libro(librosComprados,numeroDeLibros,nombreN)
    {
        nombre = "";
        this->nombre = nombreN;
    };
    ~Tienda(){}

    // Getter
    string getNombre();

    // Setter
    void setNombre();

    // Funciones
    int comprarLibros() const override;
    void imprimirTicket();
    void ticket();

};



#endif
