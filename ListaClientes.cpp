#include "Lista.h"
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Fecha.h"
#include "Cadena.h"
#include "ListaClientes.h"
#include "Cliente.h"

void crearLista_clientes(Lista_clientes &l)
{
    l=NULL;
}

bool vaciarLista_clientes(Lista_clientes l)
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
void resto_clientes(Lista_clientes &l)
{
    Lista_clientes aux;
    aux=l;
    l=l->sig;
    delete aux;

}
void insFront_clientes(Lista_clientes &l, Cliente c)
{
    Lista_clientes nuevoNodo = new nodo4;
    nuevoNodo->dato = c;
    nuevoNodo->sig = l;
    l = nuevoNodo;
}
void desplegarLista_clientes(Lista_clientes l)
{
    while (l != NULL)
    {
        printf("------ \nCodigo: %d \n", dardocId(l->dato));
        printf("Nombre: ");
        print(darnombre(l->dato));
        printf("\nApellido: ");
        print(darapellido(l->dato));
        printf("\nDireccion: ");
        print(dardireccion(l->dato));
        printf("\nPais: ");
        print(darpais(l->dato));
        printf("\nTelefono: %d \n", dartelefono(l->dato));
        l = l->sig;
    }
       printf("\n dentro de desplegarLista_clientes \n");
}
bool perteneceLista_clientes(Lista_clientes l, Cliente e)
{
    while (l != NULL)
    {
        if (dardocId(l->dato) == dardocId(e))
        {
            return true;
        }
        l = l->sig;
    }
    return false;
}
Cliente obtenerLista_clientes(Lista_clientes l, int cod)
{
    bool seguir = true;
    while (l != NULL && seguir)
    {
        if( l->dato->docId == cod)
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
void borrarLista_clientes(Lista_clientes &l,int cod)
{
    //si el primer nodo es el que debe borrarse
    if (l != NULL && l->dato->docId == cod) {
        Lista_clientes temp = l;
        l = l->sig;  //cambia la cabeza de la lista
        delete temp;  //borra el nodo que era la cabeza
        return;
    }
    Lista_clientes anterior = l;
    Lista_clientes actual = (l != NULL) ? l->sig : NULL;  //nos aseguramos que 'actual' no sea NULL
    while (actual != NULL) {
        if (actual->dato->docId == cod) {
            anterior->sig = actual->sig;  //saltamos el nodo actual
            delete actual;  //borramos el nodo
            return;
        }
        anterior = actual;
        actual = actual->sig;
    }
}
