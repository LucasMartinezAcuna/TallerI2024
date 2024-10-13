#ifndef ALERTA_H_INCLUDED
#define ALERTA_H_INCLUDED
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "Cadena.h"
#include "Fecha.h"

#include "ProductoExistente.h"



  typedef struct{
      int id;
      Fecha fechaAlerta;
      ProductoExistente productosEnFalta;
      cadena pais;
      cadena continente;
      bool activa;
      int idPunto;
      cadena ciudad;
 }aler;

 typedef aler *Alerta;

// Operaciones primitivas
Alerta crearAlerta(int id, Fecha fechaAlerta,ProductoExistente productosEnFalta, cadena pais, cadena continente, int idPunto,cadena ciudad,bool activa);

int darIdAlerta(Alerta a);
cadena darCiudadAlerta(Alerta a);
cadena darPaisAlerta(Alerta a);
cadena darContinenteAlerta(Alerta a);
bool darActiva(Alerta a);
int darIdPunto(Alerta a);
Fecha darFechaAlerta(Alerta a);
ProductoExistente darProductosEnFalta(Alerta a);

void modificarIdAlerta(Alerta a, int Id);
void modificarCiudadAlerta(Alerta a, cadena ciudad);
void modificarPaisAlerta(Alerta a, cadena pais);
void modificarContinenteAlerta(Alerta a, cadena continente);
void modificarActiva(Alerta a, bool activa);
void modificarIdPunto(Alerta a, int idPunto);
void modificarFechaAlerta(Alerta a, Fecha fecha);
void modificarProductoEnFalta(Alerta a,ProductoExistente ProductoEnFalta);

void destruirAlerta(Alerta a);



#endif // ALERTA_H_INCLUDED
