#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Cadena.h"
#include "Ruta.h"
#include "ListaRutas.h"

struct nodo_rutas{
    Ruta dato;
    nodo_rutas *sig;
};

void crearLista_Rutas(Lista_Rutas &l){
    l=NULL;
}

bool esVaciaListaRutas(Lista_Rutas l){
    return l==NULL;
}
void resto_Puntos(Lista_Rutas &l){
    if l!=NULL{
        Lista_Rutas aux;
        aux=l;
        l=l->sig;
        delete aux;
    }
}

void insFront_Puntos(Lista_Rutas &l, Ruta r){
    Lista_Rutas nuevoNodo = new nodo_rutas;
    nuevoNodo->dato = r;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}

void desplegarLista_Rutas(Lista_Rutas l)
{
    printf("*-_*_-*-_*_-*-_*_-*-_* DESPLEGANDO LISTA_RUTAS *-_*_-*-_*_-*-_*_-*-_*");
    while (l != NULL){
        printf("IdPunto1: %d \n", darIdPunto1(l->dato));
        printf("\nIdPunto2: ");
        printf("IdPunto1: %d \n", darIdPunto2(l->dato));
        l = l->sig;
    }
       printf("\n *-_*_-*-_*_-*-_*_-*-_**-_*_-*-_*_-*-_*_-*-_**-_*_-*-_*_-*-_*_-*-_**-_*_-*-_*_-*-_*_-*-_* \n");
}

bool perteneceLista_Rutas(Lista_Rutas l, Ruta r){

    while (l != NULL && darIdPunto1(l->dato) == darIdPunto1(r) && darIdPunto2(l->dato)==darIdPunto2(r)){
        l = l->sig;
    }
    return l!=NULL;
}

void borrarLista_Rutas(Lista_Rutas &l,int idp1, int idp2)
{
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->id == cod) {
        Lista_Rutas temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    Lista_Rutas anterior = l;
    Lista_Rutas actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
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
