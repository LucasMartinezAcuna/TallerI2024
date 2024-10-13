#include "Pedidos.h"
#include "Pedido.h"

void crear_pedidos(Hash_pedidos &h){
    for (int i = 0; i < CantCubeta_pedidos; ++i)
    {
        h[i]=NULL;
    }
}
//tomamos el tipo de moneda para agrupar los pedidos
int dispersion_pedidos(cadena moneda){
    int a=0;

    if( streq(moneda,"UYU")){
        a = 1;
    }else if(streq(moneda,"EGP")){
        a = 2;
    }else if(streq(moneda,"USD")){
        a = 3;
     }else if(streq(moneda,"EURO")){
        a = 4;
}

    return a;
}

 bool pertenece_pedidos(Hash_pedidos h, Pedido p){
    int cubeta = dispersion_pedidos(p->moneda);
    return perteneceLista_pedidos(h[cubeta], p);
 }

void insertar_pedidos(Hash_pedidos &h, Pedido p){

    int cubeta = dispersion_pedidos(p->moneda);
    insFront_pedidos(h[cubeta], p);
}
Pedido obtener_pedidos (Hash_pedidos h, int codigoId){
    Pedido p;

    for(int i=0; i<CantCubeta_pedidos; i++)
    {
        p = (Pedido) (obtenerLista_pedidos(h[i], codigoId));

        if( p != NULL)
            break;
    }
    return p;
}

void eliminar_pedidos(Hash_pedidos &h, int codigoId){
    int cubeta = -1;
    Pedido p;
    //buscamos la cubeta del pedido a eliminar
    for(int i=0; i<CantCubeta_pedidos; i++)
    {
        p = (Pedido) (obtenerLista_pedidos(h[i], codigoId));

        if( p != NULL){
            cubeta = i;
            break;
        }
    }
    //verificamos que se haya encontrado el pedido
    if( cubeta != -1){

        borrarLista_pedidos(h[cubeta], codigoId);
    }
}

  void desplegarHash_pedidos(Hash_pedidos h){
    for(int i=0; i<CantCubeta_pedidos; i++)
    {
        printf("\n******** cubeta %d *************\n", i);
        desplegarLista_pedidos(h[i]);
    }

/*
int conversion(int costo, cadena ciudad){
    int res=-1;
     if (streq(ciudad, "Montevideo"))
       res=costo*40;
      else
     if (streq(ciudad, "El Cairo"))
        res=costo*48;
      else
     if (streq(ciudad, "Moscú"))
        res=costo*91;
      else
     if (streq(ciudad, "Houston"))
       res=costo;

    return res;
}

cadena monedaPedido(cadena ciudad){
    cadena res;
    strcrear(res);
    if (streq(ciudad, "Montevideo"))
        res="UYU";
    else
    if (streq(ciudad, "El Cairo"))
        res="EGP";
    else
    if (streq(ciudad, "Moscú"))
        res="RUB";
    else
    if (streq(ciudad, "Houston"))
        res="USD";

    return res;
}

*/



}
