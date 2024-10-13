#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED

#include "cadena.h"

  typedef struct {
          int codigoId;
          cadena descripcion;
          cadena tipo;
          float precio;

        } nodo11;

 typedef nodo11 *Producto;

 // Operaciones primitivas
 Producto crearProducto(int codigoId, cadena descripcion, cadena tipo, float precio);
 int darcodigoId(Producto p);
 cadena dardescripcion(Producto p);
 cadena dartipo(Producto p);
 float darprecio(Producto p);
 void modificarcodigoId(Producto p, int codigoId);
 void modificardescripcion(Producto p, cadena descripcion);
 void modificartipo(Producto p, cadena tipo);
 void modificarprecio(Producto p, float precio);
 void destruirProducto(Producto p);

 #endif // PRODUCTO_H_INCLUDE


