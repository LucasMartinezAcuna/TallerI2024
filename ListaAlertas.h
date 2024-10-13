#ifndef LISTAALERTAS_H_INCLUDED
#define LISTAALERTAS_H_INCLUDED
#include "Alerta.h"
#include "Cadena.h"
#include "Producto.h"


//para la lista de alertas
typedef struct nodo16{
    Alerta dato;
    nodo16 *sig;
} nodo17;
typedef nodo17 *Lista_alertas;

//para la lista de alertas
void crearLista_alertas(Lista_alertas &l);
bool vaciarLista_alertas(Lista_alertas l);
void resto_alertas(Lista_alertas &l);
void insFront_alertas(Lista_alertas &l, Alerta a);
void desplegarLista_alertas(Lista_alertas l);
bool perteneceLista_alertas(Lista_alertas l, Alerta a);
Alerta obtenerLista_alertas(Lista_alertas l, int a);
void borrarLista_alertas(Lista_alertas &l,int a);

#endif // LISTAALERTAS_H_INCLUDED
