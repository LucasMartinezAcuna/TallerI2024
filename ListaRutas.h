#ifndef LISTARUTAS_H_INCLUDED
#define LISTARUTAS_H_INCLUDED
#include "Ruta.h"

typedef struct nodo_rutas *Lista_Rutas;

void crearLista_Rutas(Lista_Rutas &p);
bool esVaciaListaRutas(Lista_Rutas p);
void resto_Rutas(Lista_Rutas &p);
void insFront_Rutas(Lista_Rutas &l, Ruta p);
void desplegarLista_Rutas(Lista_Rutas l);
bool perteneceLista_Rutas(Lista_Rutas l, Ruta p);
void borrarLista_Rutas(Lista_Rutas &l,int idpun1,int idpun2);
lklk
#endif // LISTARUTAS_H_INCLUDED
