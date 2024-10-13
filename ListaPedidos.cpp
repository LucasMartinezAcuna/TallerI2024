#include "Lista.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Fecha.h"
#include "Cadena.h"
#include "ListaPedidos.h"
#include "Pedido.h"

void crearLista_pedidos(Lista_pedidos &l)
{
    l=NULL;
}

bool vaciarLista_pedidos(Lista_pedidos l)
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
void resto_pedidos(Lista_pedidos &l)
{
    Lista_pedidos aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFront_pedidos(Lista_pedidos &l, Pedido p)
{
    Lista_pedidos nuevoNodo = new nodo6;
    nuevoNodo->dato = p;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}
void desplegarLista_pedidos(Lista_pedidos l)
{
    while (l != NULL)
    {
        printf("------ \nCodigo: %d \n", darcodigoId(l->dato));
        printf("Fecha: ");
        desplegarFecha(darfechapedido(l->dato));
        printf("Cantidad: %d", darcantidad(l->dato));
        printf("\nMonto: %d", darmonto(l->dato));
        printf("\nMoneda: ");
        print(darmoneda(l->dato));
        printf("\nCliente ID: %d \n", darclienteid(l->dato));
        l = l->sig;
    }
}
bool perteneceLista_pedidos(Lista_pedidos l, Pedido e)
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
Pedido obtenerLista_pedidos(Lista_pedidos l, int cod)
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
void borrarLista_pedidos(Lista_pedidos &l,int cod)
{
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->codigoId == cod) {
        Lista_pedidos temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    Lista_pedidos anterior = l;
    Lista_pedidos actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
    while (actual != NULL) {
        if (actual->dato->codigoId == cod) {
            anterior->sig = actual->sig;  //saltamos el nodo actual
            delete actual;  //borramos el nodo
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
}
