#include <iostream>
#include <stdio.h>
#include <conio.h>"
#include "Puntos.h"
#include "Punto.h"
#include "Cadena.h"

void crear_puntos(Hash_puntos &h){
    for (int i = 0; i < CantCubeta_puntos; ++i){
        h[i]=NULL;
    }
}

int dispersion_puntos(cadena pais){
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

bool pertenece_puntos(Hash_puntos h, Punto p){
    int cubeta = dispersion_puntos(p->pais);
    return perteneceLista_Puntos(h[cubeta], p);
}

void insertar_puntos(Hash_puntos &h, Punto p){
    int cubeta = dispersion_puntos(p->pais);
    insFront_Puntos(h[cubeta], p);
}


Punto obtener_puntos(Hash_puntos h, int codigoId){
    Punto p;
     for(int i=0; i<CantCubeta_puntos; i++){
        p = (Punto) (obtenerLista_Puntos(h[i], codigoId));

        if( p != NULL){
            break;
        }
    }
    return p;
}

void eliminar_puntos(Hash_puntos &h, int codigoId){
    int cubeta = -1;
    Punto p;
    //buscamos la cubeta del producto a eliminar
    for(int i=0; i<CantCubeta_puntos; i++){
        p = (Punto) (obtenerLista_Puntos(h[i], codigoId));
           if( p != NULL){
            cubeta = i;
            break;
           }
    }
    //verificamos que se haya encontrado el producto
    if( cubeta != -1){
      borrarLista_Puntos(h[cubeta], codigoId);
    }
}

void desplegarHash_puntos(Hash_puntos h){
    for(int i=0; i<CantCubeta_puntos; i++){
        printf("\n********cubeta %d *************\n", i);
        desplegarLista_Puntos(h[i]);
    }
}
