
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Cadena.h"
#include "Punto.h"
#include "ListaPuntos.h"

void crearLista_Puntos(Lista_Puntos &l)
{
    l=NULL;
}

bool vaciarLista_Puntos(Lista_Puntos l)
{
    if(l==NULL)
    {
        return true;
    }
    else
    {
        return false;

    }
}
void resto_Puntos(Lista_Puntos &l)
{
    Lista_Puntos aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFront_Puntos(Lista_Puntos &l, Punto p)
{
    Lista_Puntos nuevoNodo = new nodo43;
    nuevoNodo->dato = p;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}
void desplegarLista_Puntos(Lista_Puntos l)
{
    while (l != NULL)
    {
        printf("------ \nCodigo: %d \n", darIdPunto(l->dato));
        printf("\nCiudad: ");
        print(darCiudad(l->dato));
        printf("\nContinente: ");
        print(darContinente(l->dato));
        printf("\nDireccion: ");
        print(darDireccion(l->dato));
        printf("\nPais: ");
        print(darPais(l->dato));
        printf("\nEsVenta si es 0 es falso y 1 si es verdadero : %d \n",darEsVenta(l->dato));

        l = l->sig;
    }
       printf("\n dentro de desplegarLista_puntos \n");
}
bool perteneceLista_Puntos(Lista_Puntos l, Punto p)
{
    while (l != NULL)
    {
        if (darIdPunto(l->dato) == darIdPunto(p))
        {
            return true;
        }
        l = l->sig;
    }
    return false;
}
Punto obtenerLista_Puntos(Lista_Puntos l, int cod)
{
    bool seguir = true;
    while (l != NULL && seguir)
    {
        if( l->dato->id == cod)
            seguir = false;
        else
            l = l->sig;
    }
    if (l != NULL)
    {
        return l->dato;
    }
    else
    {
        return NULL; // Manejar este caso adecuadamente en el uso de la función
    }
}
void borrarLista_Puntos(Lista_Puntos &l,int cod)
{
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->id == cod) {
        Lista_Puntos temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    Lista_Puntos anterior = l;
    Lista_Puntos actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
    while (actual != NULL) {
        if (actual->dato->id == cod) {
            anterior->sig = actual->sig;  //saltamos el nodo actual
            delete actual;  //borramos el nodo
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
}
