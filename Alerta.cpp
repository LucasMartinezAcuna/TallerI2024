#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include "Cadena.h"
#include "Fecha.h"
#include "ProductoExistente.h"
#include "Punto.h"

Alerta crearAlerta(int id, Fecha fechaAlerta,ProductoExistente productosEnFalta,cadena pais, cadena continente, int idPunto,cadena ciudad,bool activa){
    Alerta a = new aler;
    a->id = id;
    strcrear(a->pais);
    strcop(a->pais, pais);

    strcrear(a->ciudad);
    strcop(a->ciudad, ciudad);

    strcrear(a->continente);
    strcop(a->continente, continente);
    a->fechaAlerta=fechaAlerta;
    a->productosEnFalta=productosEnFalta;
    a->activa=activa;
    a->idPunto=idPunto;

    return a;
}

int darIdAlerta(Alerta a){
    return a->id;
}

cadena darPaisAlerta(Alerta a){
    return a->pais;
}

cadena darContinenteAlerta(Alerta a)
{
    return a->continente;
}

cadena darCiudadAlerta(Alerta a)
{
    return a->ciudad;
}

bool darActiva(Alerta a)
{
    return a->activa;
}

int idPunto(Alerta a){
    return a->idPunto;
}

Fecha darFechaAlerta(Alerta a)
{
    return a->fechaAlerta;
}
ProductoExistente darProductosEnFalta(Alerta a)
{
    return a->productosEnFalta;
}




void modificarIdAlerta(Alerta a, int Id)
{
    a->id = Id;
}

void modificarCiudadAlerta(Alerta a, cadena ciudad)
{
    a->ciudad = ciudad;
}
void modificarPaisAlerta(Alerta a, cadena pais)
{
    a->pais = pais;
}
void modificarContinenteAlerta(Alerta a, cadena continente)
{
    a->continente = continente;
}
void modificarActiva(Alerta a, bool activa)
{
    a->activa = activa;
}
void modificarIdPunto(Alerta a, int idPunto)
{
    a->idPunto = idPunto;
}
void modificarFechaAlerta(Alerta a, Fecha fecha){
    a->fechaAlerta = fecha;
}
void modificarProductoEnFalta(Alerta a,ProductoExistente ProductoEnFalta)
{
    a->productosEnFalta = ProductoEnFalta;
}

void destruirAlerta(Alerta a)
{
    strdestruir(a->ciudad);
    strdestruir(a->continente);
    strdestruir(a->pais);

    delete a;
    a = nullptr;
}
