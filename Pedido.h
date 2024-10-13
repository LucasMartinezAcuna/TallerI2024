#ifndef PEDIDO_H_INCLUDED
#define PEDIDO_H_INCLUDED

#include "Cadena.h"
#include "Fecha.h"
#include "Productos.h"
#include "ListaProductoExistente.h"

  typedef struct {
          int codigoId;
          Fecha fecha_pedido;
          int cantidad;
          float monto;
          cadena moneda;
          int clienteId;
          ListaProductoExistente productos_existentes;
        } nodo111;

 typedef nodo111 *Pedido;

 // Operaciones primitivas
 Pedido crearPedido(int codigoId,Fecha fecha_pedido,int idcliente,int cantidad, float monto, cadena moneda, ListaProductoExistente productos_existentes);
 int darcodigoId(Pedido p);
 Fecha darfechapedido(Pedido p);
 int darcantidad(Pedido p);
 cadena darmoneda(Pedido p);
 int darclienteid(Pedido p);
 float darmonto(Pedido p);
 ListaProductos darlistaproductos(Pedido p);
 void modificarcodigoId(Pedido p, int codigoId);
 void modificarfechapedido(Pedido p, Fecha fecha);
 void modificarcantidad(Pedido p, int cantidad);
 void modificarmoneda(Pedido p, cadena moneda);
 void modificaridcliente(Pedido p, int id);
 void modificarlistaproductos(Pedido p, ListaProductos productos);
 void modificarmonto(Pedido p, float monto);
 void destruirPedido(Pedido p);

 #endif // PEDIDO_H_INCLUDE


