#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <conio.h>

  typedef struct {
          int d;
          int m;
          int a;
    }nodo;

 typedef nodo *Fecha;

 void crearFecha(Fecha &f);
 Fecha crearFecha();
 Fecha cargarFecha( int d, int m, int a);
 void cagar(Fecha &f, int d, int m, int a);
 int darDia(Fecha f);
 int darMes(Fecha f);
 int darAnio(Fecha F);
 void modificarDia(Fecha &f, int d);
 void modificarMes(Fecha &f, int m);
 void modificarAnio(Fecha &f, int a);
 void desplegarFecha(Fecha f);


#endif // FECHA_H_INCLUDED
