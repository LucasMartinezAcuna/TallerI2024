#include "ProductoExistente.h"
#include "Cadena.h"

ProductoExistente crearProductoExistente(int codigoIdProducto, int cantidadProducto)

{
    ProductoExistente p = new ProductoExi;
    p->codigoIdProducto = codigoIdProducto;
    p->cantidadProducto = cantidadProducto;


    return p;
}

int darcodigoIdProducto(ProductoExistente p)

{
    return p->codigoIdProducto;
}

int darcantidadProducto(ProductoExistente p)
{
    return p->cantidadProducto;
}



void modificarcodigoIdProducto(ProductoExistente p, int codigoIdProducto)
{
    p->codigoIdProducto = codigoIdProducto;
}


void modificarcantidadProducto(ProductoExistente p, int cantidadProducto)
{
    p->cantidadProducto = cantidadProducto;
}




void destruirProductoExistente(ProductoExistente p)
{

    delete p;
    p = nullptr;
}










