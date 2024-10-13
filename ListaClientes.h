#ifndef LISTACLIENTES_H_INCLUDED
#define LISTACLIENTES_H_INCLUDED

#include "Cadena.h"
#include "Producto.h"
#include "Cliente.h"

//para la lista de clientes
typedef struct nodo3
{
    Cliente dato;
    nodo3 *sig;
} nodo4;
typedef nodo4 *Lista_clientes;

//para la lista de clientes
void crearLista_clientes(Lista_clientes &l);
bool vaciarLista_clientes(Lista_clientes l);
void resto_clientes(Lista_clientes &l);
void insFront_clientes(Lista_clientes &l, Cliente c);
void desplegarLista_clientes(Lista_clientes l);
bool perteneceLista_clientes(Lista_clientes l, Cliente e);
Cliente obtenerLista_clientes(Lista_clientes l, int e);
void borrarLista_clientes(Lista_clientes &l,int e);

#endif // LISTACLIENTES_H_INCLUDED
