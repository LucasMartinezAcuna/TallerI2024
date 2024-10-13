#include "ListaProductoExistente.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Fecha.h"
#include "Cadena.h"
#include "ProductoExistente.h"
#include "Cliente.h"

void crearListaProductoExistente(ListaProductoExistente &l)
{
    l=NULL;
}

bool vaciarListaProductoExistente(ListaProductoExistente l)
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

void restoListaProductoExistente(ListaProductoExistente &l)
{
    ListaProductoExistente aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFrontListaProductoExistente(ListaProductoExistente &l, ProductoExistente p){
    ListaProductoExistente nuevoNodo = new nodo20;
    nuevoNodo->dato = p;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}

void desplegarListaProductoExistente(ListaProductoExistente l)
{
    while (l != NULL)
    {
        printf("Codigo: %d \n", darcodigoIdProducto(l->dato));
        printf("Cantidad: %d \n", darcantidadProducto(l->dato));

        l = l->sig;
    }
}

bool perteneceListaProductoExistente(ListaProductoExistente l, ProductoExistente e)
{
    while (l != NULL)
    {
        if (darcodigoIdProducto(l->dato) == darcodigoIdProducto(e))
        {
            return true;
        }
        l = l->sig;
    }
    return false;
}

ProductoExistente obtenerListaProductoExistente(ListaProductoExistente l, int id){
    bool seguir = true;
    while (l != NULL && seguir){
        if( l->dato->codigoIdProducto == id){
            seguir = false;
            }else{
            l = l->sig;
           }
       }
      if (l != NULL){
        return l->dato;
       }else{
        return NULL; // Manejar este caso adecuadamente en el uso de la función
    }
}

void borrarListaProductoExistente(ListaProductoExistente &l, int id) {
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->codigoIdProducto == id) {
        ListaProductoExistente temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    ListaProductoExistente anterior = l;
    ListaProductoExistente actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
    while (actual != NULL) {
        if (actual->dato->codigoIdProducto == id) {
            anterior->sig = actual->sig;  //saltamos el nodo actual
            delete actual;  //borramos el nodo
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
}


