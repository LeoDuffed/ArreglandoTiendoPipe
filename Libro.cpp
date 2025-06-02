//
// Created by felipe on 11/22/2024.
// Mejorado por Leonardo 
//
#include "Libro.h"
#include <iostream>
#include <string>
using namespace std;
//*---------------------------------------------------------------------------------------------------------*
Libro ::Libro(){numeroDeLibros = 1000;nombreN="";librosComprados = 0; } //constructor por definicion
//*---------------------------------------------------------------------------------------------------------*
Libro::Libro(int librosComprados,int numeroDeLibros, string nombreN){ //Cosntructor con parámetros
    this->numeroDeLibros = numeroDeLibros;
    this->librosComprados = librosComprados;
    this->nombreN = nombreN;
}
/*---------------------------------------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------------------------------------*/
int Libro::getNumeroDeLibros(){ //Método getter del número de libros
    return numeroDeLibros;
}
/*---------------------------------------------------------------------------------------------------------*/
void Libro::setNumeroDeLibros(int numeroDeLibros){ //Método setter para el número de libros
    if (numeroDeLibros <= 0)
    {
        cout<<"Ya no quedan libros por vender"<<endl;
        numeroDeLibros += 100; //Reabastecimiento de libros en caso de que se acaben
        cout<<"Se han reabastecido "<<numeroDeLibros<<" libros"<<endl;
    }
    this->numeroDeLibros = numeroDeLibros;
}
/*---------------------------------------------------------------------------------------------------------*/
string Libro::getNombreN(){return nombreN;}
void Libro::setNombreN(string nombreN)
{
    this->nombreN = nombreN;
}
/*---------------------------------------------------------------------------------------------------------*/

int Libro::getLibrosComprados(){return librosComprados;}
void Libro::mostrarLibros()//muestra los tipos de libros
{
    string pip= getNombreN();
    cout<<" libros de "<<pip;
}

