#ifndef LISTAPEDIDOS_H_INCLUDED
#define LISTAPEDIDOS_H_INCLUDED

#include "Cadena.h"
#include "Pedido.h"

//para la lista de pedidos
typedef struct nodo5
{
    Pedido dato;
    nodo5 *sig;
} nodo6;
typedef nodo6 *Lista_pedidos;

//para la lista de pedidos
void crearLista_pedidos(Lista_pedidos &l);
bool vaciarLista_pedidos(Lista_pedidos l);
void resto_pedidos(Lista_pedidos &l);
void insFront_pedidos(Lista_pedidos &l, Pedido c);
void desplegarLista_pedidos(Lista_pedidos l);
bool perteneceLista_pedidos(Lista_pedidos l, Pedido e);
Pedido obtenerLista_pedidos(Lista_pedidos l, int e);
void borrarLista_pedidos(Lista_pedidos &l,int e);

#endif // LISTAPEDIDOS_H_INCLUDED
