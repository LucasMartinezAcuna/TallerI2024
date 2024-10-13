#ifndef CLIENTES_H_INCLUDED
#define CLIENTES_H_INCLUDED

 #include <iostream>
 #include <conio.h>
 #include <stdio.h>
 #include "Fecha.h"
 #include "Cadena.h"
 #include "Cliente.h"
 #include "ListaClientes.h"

const int CantCubeta_clientes=4;

typedef Lista_clientes Hash_clientes[CantCubeta_clientes];

void crear_clientes(Hash_clientes &h);
int dispersion_clientes(int cl);

 bool pertenece_clientes(Hash_clientes h, Cliente p);

void insertar_clientes(Hash_clientes &h, Cliente p);
    Cliente obtener_clientes (Hash_clientes h, int codigoId);

void eliminar_clientes(Hash_clientes &h, int codigoId);

void desplegarHash_clientes(Hash_clientes h);

#endif // CLIENTES_H_INCLUDED

