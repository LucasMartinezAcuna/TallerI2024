#ifndef ALERTAS_H_INCLUDED
#define ALERTAS_H_INCLUDED

 #include <iostream>
 #include <stdio.h>
 #include "Fecha.h"
 #include "Cadena.h"
 #include "ListaAlertas.h"
 #include "Alerta.h"


const int CantCubeta_alertas=4;

typedef Lista_alertas Hash_Alertas[CantCubeta_alertas];

void crear_alertas(Hash_Alertas &h);

int dispersion_alertas(int al);

bool pertenece_alertas(Hash_Alertas h, Alerta al);

void insertar_alertas(Hash_Alertas &h, Alerta al);
Alerta obtener_alertas (Hash_Alertas h, int codigoId);

void eliminar_alertas(Hash_Alertas &h, int codigoId);

void desplegarHash_alertas(Hash_Alertas h);

#endif // ALERTAS_H_INCLUDED
