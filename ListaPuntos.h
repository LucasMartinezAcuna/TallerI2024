#ifndef LISTAPUNTOS_H_INCLUDED
#define LISTAPUNTOS_H_INCLUDED
#include "Punto.h"
typedef struct nodo34{
    Punto dato;
    nodo34 *sig;
} nodo43;
typedef nodo43 *Lista_Puntos;


void crearLista_Puntos(Lista_Puntos &p);
bool vaciarLista_Puntos(Lista_Puntos p);
void resto_Puntos(Lista_Puntos &p);
void insFront_Puntos(Lista_Puntos &l, Punto p);
void desplegarLista_Puntos(Lista_Puntos l);
bool perteneceLista_Puntos(Lista_Puntos l, Punto p);
Punto obtenerLista_Puntos(Lista_Puntos l, int p);
void borrarLista_Puntos(Lista_Puntos &l,int p);

#endif // LISTAPUNTOS_H_INCLUDED
