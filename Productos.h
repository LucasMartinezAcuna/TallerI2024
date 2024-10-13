#ifndef PRODUCTOS_H_INCLUDED
#define PRODUCTOS_H_INCLUDED

 #include <iostream>
 #include <conio.h>
 #include <stdio.h>
 #include "Fecha.h"
 #include "Cadena.h"
 #include "Producto.h"
 #include "Lista.h"

 const int CantCubeta=5;

 typedef ListaProductos hashProductos[CantCubeta];

 void crear(hashProductos &h);
 int dispersion(int cl);

 bool pertenece(hashProductos h, Producto p);

 void insertar(hashProductos &h, Producto p, int cantidad);
    Producto obtener (hashProductos h, int codigoId);

 void eliminar(hashProductos &h, int codigoId);

 void desplegarHash(hashProductos h);

#endif // PRODUCTOS_H_INCLUDED

