#include "Lista.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
#include "Fecha.h"
#include "Cadena.h"
#include "ListaAlertas.h"
#include "Alerta.h"

void crearLista_alertas(Lista_alertas &l)
{
    l=NULL;
}

bool vaciarLista_alertas(Lista_alertas l)
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
void resto_alertas(Lista_alertas &l)
{
    Lista_alertas aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFront_alertas(Lista_alertas &l, Alerta a)
{
    Lista_alertas nuevoNodo = new nodo17;
    nuevoNodo->dato = a;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}
void desplegarLista_alertas(Lista_alertas l)
{
    while (l != NULL)
    {

        printf("------ \nCodigo: %d \n", darIdAlerta(l->dato));
        printf("\nCiudad: ");
        print(darCiudadAlerta(l->dato));
        printf("\nPais: ");
        print(darPaisAlerta(l->dato));
        printf("\nContinente: ");
        print(darContinenteAlerta(l->dato));
        printf("\nActiva 0 si es falso y 1 si es verdadero : ");
        printf("%d\n",darActiva(l->dato));

        l = l->sig;
    }
       printf("\n dentro de desplegarLista_clientes \n");
}
bool perteneceLista_alertas(Lista_alertas l, Alerta a)
{
    while (l != NULL)
    {
        if (darIdAlerta(l->dato) == darIdAlerta(a))
        {
            return true;
        }
        l = l->sig;
    }
    return false;
}
Alerta obtenerLista_alertas(Lista_alertas l, int cod)
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
void borrarLista_alertas(Lista_alertas &l,int cod)
{
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->id == cod) {
        Lista_alertas temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    Lista_alertas anterior = l;
    Lista_alertas actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
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
