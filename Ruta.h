#ifndef RUTA_H_INCLUDED
#define RUTA_H_INCLUDED
#include "Cadena.h"

typedef struct rut * Ruta;

// Operaciones primitivas
Ruta crearRuta(int Id1, int Id2);

int darIdPunto1(Ruta ru);
int darIidPunto2(Ruta ru);

void modificardocarIdPunto1(Ruta ru, int docId);
void modificarIdPunto2(Ruta ru, int docId);




#endif // RUTA_H_INCLUDED
