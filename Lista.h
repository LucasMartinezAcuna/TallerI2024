#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED
#include "Cadena.h"
#include "Producto.h"
#include "Cliente.h"

//para la lista de productos existentes
typedef struct nodo1{
    Producto dato;
    int cantidad;
    nodo1 *sig;
} nodo2;
typedef nodo2 *ListaProductos;

//para la lista de productos
void crearLista(ListaProductos &l);
bool esVaciaLista(ListaProductos l);
void restoLista(ListaProductos &l);
void insFrontLista(ListaProductos &l, Producto p, int cantidad);
void desplegarLista(ListaProductos l);
bool perteneceLista(ListaProductos l, Producto e);
Producto obtenerLista(ListaProductos l, int e);
void borrarLista(ListaProductos &l,int e);

#endif // LISTA_H_INCLUDED
