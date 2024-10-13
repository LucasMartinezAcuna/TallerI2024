#ifndef PEDIDOS_H_INCLUDED
#define PEDIDOS_H_INCLUDED

 #include <iostream>
 #include <conio.h>
 #include <stdio.h>
 #include "Fecha.h"
 #include "Cadena.h"
 #include "Pedido.h"
 #include "ListaPedidos.h"

const int CantCubeta_pedidos=4;

typedef Lista_pedidos Hash_pedidos[CantCubeta_pedidos];

void crear_pedidos(Hash_pedidos &h);
int dispersion_pedidos(cadena moneda);
bool pertenece_pedidos(Hash_pedidos h, Pedido p);
void insertar_pedidos(Hash_pedidos &h, Pedido p);
Pedido obtener_pedidos (Hash_pedidos h, int codigoId);
void eliminar_pedidos(Hash_pedidos &h, int codigoId);
void desplegarHash_pedidos(Hash_pedidos h);



//int conversion(int costo, cadena ciudad);
//cadena monedaPedido(cadena ciudad);
#endif // PEDIDOS_H_INCLUDED


