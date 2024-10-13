#include "Lista.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Fecha.h"
#include "Cadena.h"
#include "Producto.h"
#include "Cliente.h"

void crearLista(ListaProductos &l)
{
    l=NULL;
}

bool esVaciaLista(ListaProductos l)
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

void restoLista(ListaProductos &l)
{
    ListaProductos aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFrontLista(ListaProductos &l, Producto p,int cantidad)
{
    ListaProductos nuevoNodo = new nodo2;
    nuevoNodo->dato = p;
    nuevoNodo->cantidad = cantidad;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}

void desplegarLista(ListaProductos l)
{
     printf("dentro de esplegar lista \n");
    while (l != NULL)
    {
        printf("Codigo: %d \n", darcodigoId(l->dato));
        printf("Cantidad: %d \n",l->cantidad);
        printf("Descripcion: ");
        print(dardescripcion(l->dato));
        printf("\nTipo: ");
        print(dartipo(l->dato));
        printf("\nPrecio: %.2f\n\n", darprecio(l->dato));
        l = l->sig;
    }
}

bool perteneceLista(ListaProductos l, Producto e)
{
    while (l != NULL)
    {
        if (darcodigoId(l->dato) == darcodigoId(e))
        {
            return true;
        }
        l = l->sig;
    }
    return false;
}

Producto obtenerLista(ListaProductos l, int cod)
{
    bool seguir = true;
    while (l != NULL && seguir)
    {
        if( l->dato->codigoId == cod)
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

void borrarLista(ListaProductos &l, int cod) {
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->codigoId == cod) {
        ListaProductos temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    ListaProductos anterior = l;
    ListaProductos actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
    while (actual != NULL) {
        if(actual->dato->codigoId == cod) {
            anterior->sig = actual->sig;  //saltamos el nodo actual
            delete actual;  //borramos el nodo
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
}
