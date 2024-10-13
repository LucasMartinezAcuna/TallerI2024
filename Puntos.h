#ifndef PUNTOS_H_INCLUDED
#define PUNTOS_H_INCLUDED

 #include <iostream>
 #include <conio.h>
 #include <stdio.h>
 #include "Fecha.h"
 #include "Cadena.h"
 #include "ListaPuntos.h"
 #include "Punto.h"

const int CantCubeta_puntos=4;

typedef Lista_Puntos Hash_puntos[CantCubeta_puntos];

void crear_puntos(Hash_puntos &h);
int dispersion_puntos(int cl);

 bool pertenece_puntos(Hash_puntos h, Punto p);

void insertar_puntos(Hash_puntos &h, Punto p);
    Punto obtener_puntos(Hash_puntos h, int codigoId);

void eliminar_puntos(Hash_puntos &h, int codigoId);

void desplegarHash_puntos(Hash_puntos h);

#endif // PUNTOS_H_INCLUDED
