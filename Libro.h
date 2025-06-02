//
// Created by Felipe on 11/22/2024.
// Mejorado por Leonardo 
//

#ifndef LIBRO_H
#define LIBRO_H
#include <string>
using namespace std;


class Libro{
private:
    string nombreN;
    int librosComprados;
    int numeroDeLibros;
public:

    Libro();
    Libro(int librosComprados,int numeroDeLibros, string nombreN);
    virtual ~Libro() = default;

    // Getters
    string getNombreN();
    int getNumeroDeLibros();
    int getLibrosComprados();

    // Setters
    void setNombreN(string nombreN);
    void setLibrosComprados(int librosComprados);
    void setNumeroDeLibros(int numeroDeLibros);

    virtual int comprarLibros() const
    {
        return librosComprados;
    };
    void mostrarLibros();

};



#endif //LIBRO_H
