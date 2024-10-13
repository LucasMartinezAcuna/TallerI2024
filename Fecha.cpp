#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Fecha.h"

void crearFecha (Fecha &f)
{
    f=NULL;

}

Fecha crearFecha()
{
    Fecha f;
    f=new nodo;
    return f;

}

Fecha cargarFecha(int d, int m, int a)
{
    Fecha aux;
    aux=new nodo;
    aux ->d=d;
    aux ->m=m;
    aux ->a=a;

    return aux;
}
void cargar(Fecha &f, int d, int m, int a)
{
    Fecha aux;
    aux=new nodo;
    aux ->d=d;
    aux ->m=m;
    aux ->a=a;
    f=aux;
}
int darDia(Fecha f)
{
    return f->d;
}

int darMes(Fecha f)
{
    return f->m;
}
int darAnio(Fecha f)
{
    return f->a;
}
void modificarDia(Fecha &f, int d)
{
    f->d=d;
}
void modificarMes(Fecha &f, int m)
{
    f->m=m;
}
void modificarAnio(Fecha &f, int a)
{
    f->a=a;
}

void desplegarFecha(Fecha f)
{
    printf("\n %d/%d/%d \n",f->d,f->m,f->a);
}
