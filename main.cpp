//Felipe Gutierrez Herrera
// Mejorado por Leonardo 
//A01662377
//Hecho el 28/11/2024
#include <iostream>
#include "Libro.h"
#include "Tienda.h"
#include <string>
using namespace std;

int main()
{
    Tienda t; //Aca determinamos cuantos compradores van a ser
    Tienda t1;
    Tienda t2;
    Tienda t3;
    Tienda t4;
    Tienda t5;
    Tienda t6;
    Tienda t7;


    int menu=0; // Determinamos los géneros de libros, la cantidad que hay y el nombre del género
    Libro l(0,1000,"Terror");
    Libro l1(0,1000,"Terror");
    Libro l2(0,1000,"suspenso");
    Libro l3(0,1000,"suspenso");
    Libro l4(0,1000,"ciencia ficcion");
    Libro l5(0,1000,"ciencia ficcion");
    Libro l6(0,1000,"Romance");
    Libro l7(0,1000,"Romance");
    while(menu!=-1)
    {
        string opcion= "";
        cout<<"\n----------------------------------------------------"<<endl;
        cout<<"|         Bienvenido a la tienda de libros         |\n|--------------------------------------------------|\n|                   El milagro                     |\n|--------------------------------------------------|\n|-Solo pueden comprar dos personas por cada tipo   |\n|de libro una disculpa (~w~)-                      |\n|--------------------------------------------------|"<<endl;
        cout<<"| ¿Que tipo de libros deseas comprar?             |\n|   *1.Libros de terror ( * ~ *)                   |\n|   *2.Libros de suspenso (* 0 * )                 |\n|   *3.Libros de ciencia ficcion (o~~o)            |\n|   *4.Libros de Romance (^ v ^)                   |\n|   * -1.salir                                     |\n|--------------------------------------------------|"<<endl;
        cin>>menu; // Aca el usuario introduce la opción que quiera
        if(menu==1)
        {
            while(true)
            {   cout<<"\n Libros de terror:";
                cout<<"\n Ingrese su nombre y cuantos libros quiere comprar"<<endl;
                t.setNombre();//Llama la función para guardar el nombre
                t.comprarLibros();// Llama la  función para comprar libros
                t.imprimirTicket(); // Llama la función para imprimir lo que se compró en cantidad de libros
                t.ticket(); // Llama la función para impirmir cuanto es el total
// Esto se aplica para todas las demás opciones
                cout<<"\n¿Deseas seguir comprando libros de terror?: (s/n): "<<endl;
                cin>>opcion;
                if(opcion=="s") //Esto de acá permite a otro usuario ingres
                {
                    cout<<"\n ¡Nuevo cliente! ";
                    t1.setNombre();
                    t1.comprarLibros();
                    t1.imprimirTicket();
                    t1.ticket();
                }
                else
                    {break;}
                break;

            }

        }
        else if(menu==2)
        {
            while(true)
            {

                cout<<"\n Libros de suspenso:";
                cout<<"\n Ingrese su nombre y cuantos libros quiere comprar"<<endl;
                t2.setNombre();
                t2.comprarLibros();
                t2.imprimirTicket();
                t2.ticket();
                cout<<"\n¿Deseas seguir comprando libros de suspenso?: (s/n): "<<endl;
                cin>>opcion;
                if(opcion=="s")
                {
                    cout<<"\n¡Nuevo cliente! ";
                    t3.setNombre();
                    t3.comprarLibros();
                    t3.imprimirTicket();
                    t3.ticket();
                }
                else{break;}


                break;
            }

        }
        else if(menu==3)
        {
            while(true)
            {

                cout<<"\nLibros de ciencia ficción:3";
                cout<<"\nIngrese su nombre y cuantos libros quiere comprar"<<endl;
                t4.setNombre();
                t4.comprarLibros();
                t4.imprimirTicket();
                t4.ticket();
                cout<<"\n¿Deseas seguir comprando libros de ciencia ficcion?: (s/n): "<<endl;
                cin>>opcion;
                if(opcion=="s")
                {
                    cout<<"\n¡Nuevo cliente! ";
                    l5.getNombreN();
                    t5.setNombre();
                    t5.comprarLibros();
                    t5.imprimirTicket();
                    t5.ticket();
                }
                else{break;}


                break;
            }
        }
        else if(menu==4)
        {
            while(true)
            {
                cout<<"\n Libros de romance:";
                cout<<"\n Ingrese su nombre y cuantos libros quiere comprar"<<endl;
                t6.setNombre();
                t6.comprarLibros();
                t6.imprimirTicket();
                t6.ticket();
                cout<<"\n¿Deseas seguir comprando libros de romance?: (s/n): "<<endl;
                cin>>opcion;
                if(opcion=="s")
                {
                    cout<<"\n ¡Nuevo cliente! ";
                    l7.getNombreN();
                    t7.setNombre();
                    t7.comprarLibros();
                    t7.imprimirTicket();
                    t7.ticket();
                }
                else{break;}


                break;
            }
        }


    }
    Libro lArray[8]={l,l1,l2,l3,l4,l5,l6,l7};
    Tienda tArray[8]={t,t1,t2,t3,t4,t5,t6,t7};
    for (int i=0; i<8; i++)
    {
        if(tArray[i].getNombre()!= "")
        {
            tArray[i].imprimirTicket();
            if (i==0 or i==1)
            {
                lArray[i].mostrarLibros();

            }
            else if (i==2 or i==3)
            {
                lArray[i].mostrarLibros();

            }
            else if (i==4 or i==5)
            {
                lArray[i].mostrarLibros();
            }
            else if (i==6 or i==7)
            {
                lArray[i].mostrarLibros();
            }
        }


    }

    return 0;
}
