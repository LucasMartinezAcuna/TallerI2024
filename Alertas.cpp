#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Cadena.h"
#include "Alertas.h"
#include "Alerta.h"


void crear_alertas(Hash_Alertas &h){
    for (int i = 0; i < CantCubeta_alertas; ++i){
        h[i]=NULL;
    }
}

int dispersion_alertas(cadena pais){
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

bool pertenece_alertas(Hash_Alertas h, Alerta a){
    int cubeta = dispersion_alertas(a->pais);
    return perteneceLista_alertas(h[cubeta], a);
}

void insertar_alertas(Hash_Alertas &h, Alerta a){
    int cubeta = dispersion_alertas(a->pais);
    insFront_alertas(h[cubeta], a);
}


Alerta obtener_alertas(Hash_Alertas h, int codigoId){
    Alerta a;
     for(int i=0; i<CantCubeta_alertas; i++){
        a = (Alerta) (obtenerLista_alertas(h[i], codigoId));

        if( a != NULL){
            break;
        }
    }
    return a;
}

void eliminar_alertas(Hash_Alertas &h, int codigoId){
    int cubeta = -1;
    Alerta a;
    //buscamos la cubeta del producto a eliminar

    for(int i=0; i<CantCubeta_alertas; i++){
        a = (Alerta) (obtenerLista_alertas(h[i], codigoId));
           if( a != NULL){
            cubeta = i;
            break;
           }
    }
    //verificamos que se haya encontrado el producto
    if( cubeta != -1){
      borrarLista_alertas(h[cubeta], codigoId);
    }
}

void desplegarHash_alertas(Hash_Alertas h){
    for(int i=0; i<CantCubeta_alertas; i++){
        printf("\n********cubeta %d *************\n", i);
        desplegarLista_alertas(h[i]);
    }
}
