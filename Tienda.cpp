//
// Created by felipe on 11/22/2024.
// Mejorado por Leonardo 
//
#include <iostream>
using namespace std;
#include "Tienda.h"
#include "Libro.h"

string Tienda::getNombre()
{
    return nombre;
}
//metodo set de nombre: en este se verifica que el nombre ingresado no sea una sola letra
void Tienda::setNombre()
{
    cout<<" Ingrese su nombre, solo uno por favor"<<endl;
    string nombreEntrada;
    do
    {
        cin>>nombreEntrada;

        if (nombreEntrada.length()==1)
        {
            cout<<"Nombre inexistente"<<endl;
            cout<<"Ingrese su nombre"<<endl;
        }
    } while (nombre.length() <= 1);
    this -> nombre = nombreEntrada;
}

//metodo en el que mostramos el nombre del usuario y los libros comprados
void Tienda::imprimirTicket()
{
    int libroComprar= Libro::getLibrosComprados();

    cout << "\nLibros comprados por " <<nombre<< ": "<<libroComprar;
}
/*---------------------------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------------------------*/
void Tienda::ticket()
//Acá te imprime el total de la compra del usuario
{
    int total= Libro::getLibrosComprados()*200;
    cout<<"\nEl total de su compra es de $"<<total<<endl;
}
int Tienda::comprarLibros(){
    int op = 0;
    int librosComprado = Libro::getLibrosComprados();
    do {
        cout << "Ingrese cuantos libros quiere comprar: ";
        cin >> librosComprado; // Se ingresa la cantidad de libros que se quieren comprar
        
        int disponible = getNumeroDeLibros();

        if (librosComprado > 0 && librosComprado <= disponible) {
            // Válida la compra realizada
            int disponible = getNumeroDeLibros();
            disponible -= librosComprado; //Resta lo que se compro de libros del total
            setNumeroDeLibros(disponible);
            cout << "Compra realizada" <<  endl;
            op = 10;  // Para salir del ciclo
        }
        else if (librosComprado <= disponible) {
            // Inválida la compra debido a que se compraron más libros de los que hay en stock
            cout << "Cantidad ingresada mayor a " << disponible << ", que son los libros actuales." << endl;
            cout << "Ingrese una cantidad menor de " << disponible << endl;
        }
        else {
            cout << "\nIngrese una cantidad mayor a 0." << endl;
        }

    } while (op != 10); //Evita que el usuario compre más de x libros

    return librosComprado;
}




