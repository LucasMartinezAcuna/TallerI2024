#include <iostream>
#include <stdio.h>
#include <conio.h>"
#include "Clientes.h"
#include "Cliente.h"

void crear_clientes(Hash_clientes &h)
{
    for (int i = 0; i < CantCubeta_clientes; ++i)
    {
        h[i]=NULL;
    }
}

int dispersion_clientes(cadena pais)
{
    int a=0;

    if( streq(pais,"Montevideo") == true){
        a = 0;
    }else if( streq(pais,"El Cairo") == true){
        a = 1;
    }else if( streq(pais,"Houston") == true){
        a = 2;
    }else{
        a = 3;
    }

    return a;
}

bool pertenece_clientes(Hash_clientes h, Cliente c)
{
    int cubeta = dispersion_clientes(c->pais);
    return perteneceLista_clientes(h[cubeta], c);
}

void insertar_clientes(Hash_clientes &h, Cliente c)
{
    int cubeta = dispersion_clientes(c->pais);
    insFront_clientes(h[cubeta], c);
}
Cliente obtener_clientes(Hash_clientes h, int codigoId)
{
    Cliente c;

    for(int i=0; i<CantCubeta_clientes; i++)
    {
        c = (Cliente) (obtenerLista_clientes(h[i], codigoId));

        if( c != NULL){
            break;
        }
    }
    return c;
}

void eliminar_clientes(Hash_clientes &h, int codigoId)
{
      int cubeta = -1;
      Cliente c;
    //buscamos la cubeta del producto a eliminar
    for(int i=0; i<CantCubeta_clientes; i++)
    {
        c = (Cliente) (obtenerLista_clientes(h[i], codigoId));

        if( c != NULL){
            cubeta = i;
            break;
        }
    }
    //verificamos que se haya encontrado el producto
    if( cubeta != -1){

        borrarLista_clientes(h[cubeta], codigoId);
    }
}

void desplegarHash_clientes(Hash_clientes h)
{
    for(int i=0; i<CantCubeta_clientes; i++)
    {
        printf("\n********cubeta %d *************\n", i);
        desplegarLista_clientes(h[i]);
    }
}
