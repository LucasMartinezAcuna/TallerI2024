#include <iostream>
#include <stdio.h>
#include "Cliente.h"
#include "Cadena.h"

Cliente crearCliente(int docId, cadena nombre, cadena apellido, cadena direccion, cadena pais, int telefono)
{
    Cliente c = new nodo13;
    c->docId = docId;

    strcrear(c->nombre);
    strcop(c->nombre, nombre);

    strcrear(c->apellido);
    strcop(c->apellido, apellido);

    strcrear(c->direccion);
    strcop(c->direccion, direccion);

    strcrear(c->pais);
    strcop(c->pais, pais);

    c->telefono = telefono;
    return c;
}

int dardocId(Cliente c)
{
    return c->docId;
}

cadena darnombre(Cliente c)
{
    return c->nombre;
}

cadena darapellido(Cliente c)
{
    return c->apellido;
}

cadena dardireccion(Cliente c)
{
    return c->direccion;
}

cadena darpais(Cliente c)
{
    return c->pais;
}

int dartelefono(Cliente c)
{
    return c->telefono;
}

void modificardocId(Cliente c, int docId)
{
    c->docId = docId;
}

void modificarnombre(Cliente c, cadena nombre)
{
    strcop(c->nombre, nombre);
}

void modificarapellido(Cliente c, cadena apellido)
{
    strcop(c->apellido, apellido);
}

void modificardireccion(Cliente c, cadena direccion)
{
    strcop(c->direccion, direccion);
}

void modificarpais(Cliente c, cadena pais)
{
    strcop(c->pais, pais);
}

void modificartelefono(Cliente c, int telefono)
{
    c->telefono = telefono;
}

void destruirCliente(Cliente c)
{
    strdestruir(c->nombre);
    strdestruir(c->apellido);
    strdestruir(c->direccion);
    strdestruir(c->pais);

    delete c;
    c = nullptr;
}
