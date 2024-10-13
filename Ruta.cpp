#include <iostream>
#include <stdio.h>
#include "Ruta.h"

struct rut{
    int idPunto1;
    int idPunto2;
};

Ruta crearRuta(){
    Ruta r = new rut;
    return r;

}
int darIdPunto1(Ruta ru){
    return ru->idPunto1;
}
int darIdPunto2(Ruta ru){
    return ru->idPunto2;
}
void modificardocarIdPunto1(Ruta ru, int idPunto1){
     ru->idPunto1 =idPunto1;
}

void modificardocarIdPunto2(Ruta ru, int idPunto2){
     ru->idPunto2 =idPunto2;
}

void destruirCliente(Ruta r)
{
    delete r;
    r = nullptr;
}
