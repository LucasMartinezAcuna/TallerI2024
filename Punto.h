#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED
#include <stdbool.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Cadena.h"
#include "ProductoExistente.h"
#include "ListaClientes.h"
#include "ListaAlertas.h"
#include "ListaPedidos.h"
#include "ListaProductoExistente.h"


typedef struct{
      int id;
      bool esVenta;
      cadena ciudad;
      cadena continente;
      cadena direccion;
      cadena pais;
      Lista_clientes listaClientes_DePunto;
      Lista_alertas alertas_generadas;
      Lista_pedidos listaPedidos_DePunto;
      ListaProductoExistente stock;
 }pun;

 typedef pun *Punto;

// Operaciones primitivas
Punto crearPunto(int idPunto,bool esVenta,Lista_alertas alertas_generadas,cadena ciudad,cadena continente,
                 cadena direccion,cadena pais,Lista_clientes listaClientes_DePunto,
                 Lista_pedidos listaPedidos_DePunto,ListaProductoExistente stock);
int darIdPunto(Punto p);
bool darEsVenta(Punto p);
Lista_alertas darAlertas_generadas(Punto p);
cadena darCiudad(Punto p);
cadena darContinente(Punto p);
cadena darDireccion(Punto p);
cadena darPais(Punto p);
Lista_clientes darListaClientes(Punto p);
Lista_pedidos darListaPedidos(Punto p);
ListaProductoExistente darStock(Punto p);



void modificarIdPunto(Punto p, int Id);
void modificarEsVenta(Punto p, bool esVenta);
void modificarAlertas_generadas(Punto p, Lista_alertas alertas_generadas);
void modificarContinente(Punto p, cadena continente);
void modificarPais(Punto p, cadena pais);
void modificarCiudad(Punto p, cadena ciudad);
void modificarDireccion(Punto p, cadena direccion);
void modificarListaClientes_DePunto(Punto p, Lista_clientes listaClientes_DePunto);
void modificarListaPedidos_DePunto(Punto p,Lista_pedidos listaPedidos_DePunto);
void modificarStock(Punto p, ListaProductoExistente stock);


void destruirPunto(Punto p);




#endif // PUNTO_H_INCLUDED
