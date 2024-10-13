#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Productos.h"
#include "Producto.h"
#include "Cadena.h"

void crear(hashProductos &h)
{
    for (int i = 0; i < CantCubeta; ++i)
    {
        h[i]=NULL;
    }
}

int dispersion(cadena categoria)
{
    int a=0;

    if( streq(categoria,"Limpieza") == true){
        a = 1;
    }else if( streq(categoria,"Comestible") == true){
        a = 2;
    }else if( streq(categoria,"Bebidas") == true){
        a = 3;
    }else if( streq(categoria,"Electrodomesticos") == true){
        a = 0;
    }else{
        a = 4;
    }

    return a;
}

bool pertenece(hashProductos h, Producto p)
{
    int cubeta = dispersion(p->tipo);
    return perteneceLista(h[cubeta], p);
}

void insertar(hashProductos &h, Producto p, int cantidad)
{
    int cubeta = dispersion(p->tipo);
    insFrontLista(h[cubeta], p, cantidad);
}
Producto obtener(hashProductos h, int codigoId)
{
    Producto p;
    for(int i=0; i<CantCubeta; i++)
    {
        p = (Producto) (obtenerLista(h[i], codigoId));

        if( p != NULL)
            break;
    }
    return p;
}

void eliminar(hashProductos &h, int codigoId)
{

    int cubeta = -1;
    Producto p;
    //buscamos la cubeta del producto a eliminar
    for(int i=0; i<CantCubeta; i++)
    {
        p = (Producto) (obtenerLista(h[i], codigoId));

        if( p != NULL){
            cubeta = i;
            break;
        }
    }
    //verificamos que se haya encontrado el producto
    if( cubeta != -1){

        borrarLista(h[cubeta], codigoId);
    }
}

void desplegarHash(hashProductos h)
{
    for(int i=0; i<CantCubeta; i++)
    {
        printf("\n cubeta %d\n", i);
        desplegarLista(h[i]);
    }
}
