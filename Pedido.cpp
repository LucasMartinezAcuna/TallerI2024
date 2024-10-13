#include "Pedido.h"
#include "Cadena.h"
#include "ListaProductoExistente.h"
#include "ProductoExistente.h"
#include "Lista.h"

//creamos un pedido con los atributos dados
Pedido crearPedido(int codigoId,Fecha fecha_pedido,int idcliente, int cantidad, float monto, cadena moneda, ListaProductoExistente productos_existentes){

    Pedido p = new nodo111;
    p->codigoId = codigoId;
    p->cantidad = cantidad;
    p->fecha_pedido = fecha_pedido;
    p->clienteId = idcliente;
    p->moneda = moneda;
    p->monto = monto;
    p->productos_existentes= productos_existentes;
    return p;
}
 int darcodigoId(Pedido p){
    return p->codigoId;
 }
 Fecha darfechapedido(Pedido p){
    return p->fecha_pedido;
 }
 int darcantidad(Pedido p){
    return p->cantidad;
 }
 cadena darmoneda(Pedido p){
    return p->moneda;
 }
 int darclienteid(Pedido p){
    return p->clienteId;
 }
 float darmonto(Pedido p){
    return p->monto;
 }
 ListaProductoExistente darListaProductos(Pedido p){
    return p->productos_existentes;
 }
 void modificarcodigoId(Pedido p, int codigoId)
 {
     p->codigoId = codigoId;
 }
 void modificarfechapedido(Pedido p, Fecha fecha){
    p->fecha_pedido = fecha;
 }
 void modificarcantidad(Pedido p, int cantidad){
    p->cantidad = cantidad;
 }
 void modificarmoneda(Pedido p, cadena moneda)
 {
    p->moneda = moneda;
 }
 void modificaridcliente(Pedido p, int id){
    p->clienteId = id;
 }
 void modificarlistaproductos(Pedido p, ListaProductoExistente productos){
    p->productos_existentes = productos;
 }
 void modificarmonto(Pedido p, float monto){
    p->monto = monto;
 }
 void destruirPedido(Pedido p){
    strdestruir(p->moneda);
    delete p;
    p = nullptr;
 }
