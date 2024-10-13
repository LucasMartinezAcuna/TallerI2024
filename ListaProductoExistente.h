#ifndef LISTAPRODUCTOEXISTENTE_H_INCLUDED
#define LISTAPRODUCTOEXISTENTE_H_INCLUDED

#include "ProductoExistente.h"

//para la lista de productos existentes
typedef struct nodo20{
    ProductoExistente dato;
    nodo20 *sig;
}nodo15;
typedef nodo15 *ListaProductoExistente;

//para la lista de productos
void crearListaProductoExistente(ListaProductoExistente &l);
bool vaciarListaProductoExistente(ListaProductoExistente l);
void restoListaProductoExistente(ListaProductoExistente &l);
void insFrontListaProductoExistente(ListaProductoExistente &l, ProductoExistente p);
void desplegarListaProductoExistente(ListaProductoExistente l);
bool perteneceListaProductoExistente(ListaProductoExistente l, ProductoExistente id);
ProductoExistente obtenerListaProductoExistente(ListaProductoExistente l, int id);
void borrarListaProductoExistente(ListaProductoExistente &l, int id);



#endif // LISTAPRODUCTOEXISTENTE_H_INCLUDED
