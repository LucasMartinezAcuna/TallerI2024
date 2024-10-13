#include "Producto.h"
#include "Cadena.h"

Producto crearProducto(int codigoId, cadena descripcion, cadena tipo, float precio)
{
    Producto p = new nodo11;
    p->codigoId = codigoId;

    strcrear(p->descripcion);
    strcop(p->descripcion, descripcion);

    strcrear(p->tipo);
    strcop(p->tipo, tipo);

    p->precio = precio;
    return p;
}

int darcodigoId(Producto p)
{
    return p->codigoId;
}

cadena dardescripcion(Producto p)
{
    return p->descripcion;
}

cadena dartipo(Producto p)
{
    return p->tipo;
}

float darprecio(Producto p)
{
    return p->precio;
}

void modificarcodigoId(Producto p, int codigoId)
{
    p->codigoId = codigoId;
}

void modificardescripcion(Producto p, cadena descripcion)
{
    strcop(p->descripcion, descripcion);
}

void modificartipo(Producto p, cadena tipo)
{
    strcop(p->tipo, tipo);
}

void modificarprecio(Producto p, float precio)
{
    p->precio = precio;
}

void destruirProducto(Producto p)
{
    strdestruir(p->descripcion);
    strdestruir(p->tipo);
    delete p;
    p = nullptr;
}
