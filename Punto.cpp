#include <stdbool.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Cadena.h"
#include "ProductoExistente.h"
#include "ListaAlertas.h"
#include "ListaPedidos.h"
#include "ListaClientes.h"
#include "ListaProductoExistente.h"
#include "Punto.h"


// Operaciones primitivas
Punto crearPunto(int idPunto,bool esVenta,Lista_alertas alertas_generadas,cadena ciudad,cadena continente,cadena direccion,cadena pais,Lista_clientes listaClientes_DePunto,Lista_pedidos listaPedidos_DePunto,ListaProductoExistente stock ){

 Punto p = new pun;
    p->id = idPunto;

    strcrear(p->pais);
    strcop(p->pais, pais);

    strcrear(p->ciudad);
    strcop(p->ciudad, ciudad);

    strcrear(p->continente);
    strcop(p->continente, continente);

     strcrear(p->direccion);
    strcop(p->direccion, direccion);

    p->esVenta=esVenta;
    p->alertas_generadas=alertas_generadas;
    p->listaClientes_DePunto=listaClientes_DePunto;
    p->listaPedidos_DePunto=listaPedidos_DePunto;
    p->stock=stock;
 }
int darIdPunto(Punto p){
return p->id;
}
bool darEsVenta(Punto p){
return p->esVenta;
}
Lista_alertas darAlertas_generadas(Punto p){
return p->alertas_generadas;
}
cadena darCiudad(Punto p){
return p->ciudad;
}
cadena darContinente(Punto p){
return p->continente;
}
cadena darDireccion(Punto p){
return p->direccion;
}
cadena darPais(Punto p){
return p->pais;
}
Lista_clientes darListaClientes(Punto p){
return p->listaClientes_DePunto;
}
Lista_pedidos darListaPedidos(Punto p){
return p->listaPedidos_DePunto;
}
ListaProductoExistente darStock(Punto p){
return p->stock;
}



void modificarIdPunto(Punto p, int Id){
     p->id=Id;
}
void modificarEsVenta(Punto p, bool esVenta){
    p->esVenta=esVenta;
}
void modificarAlertas_generadas(Punto p, Lista_alertas alertas_generadas){
    p->alertas_generadas=alertas_generadas;
}
void modificarContinente(Punto p, cadena continente){
    p->continente=continente;
}
void modificarPais(Punto p, cadena pais){
    p->pais=pais;
}
void modificarCiudad(Punto p, cadena ciudad){
    p->ciudad=ciudad;
}
void modificarDireccion(Punto p, cadena direccion){
    p->direccion=direccion;
}


void modificarListaClientes_DePunto(Punto p, Lista_clientes listaClientes_DePunto){
    p->listaClientes_DePunto=listaClientes_DePunto;
}
void modificarListaPedidos_DePunto(Punto p,Lista_pedidos listaPedidos_DePunto){
    p->listaPedidos_DePunto=listaPedidos_DePunto;
}
void modificarStock(Punto p, ListaProductoExistente stock){
    p->stock=stock;
}


void destruirPunto(Punto p){
    strdestruir(p->ciudad);
    strdestruir(p->continente);
    strdestruir(p->pais);
    strdestruir(p->direccion);


    delete p;
    p = nullptr;
}
