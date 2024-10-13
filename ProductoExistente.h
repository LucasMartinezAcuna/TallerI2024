#ifndef PRODUCTOEXISTENTE_H_INCLUDED
#define PRODUCTOEXISTENTE_H_INCLUDED

typedef struct {
          int codigoIdProducto;
          int cantidadProducto;


        } ProductoExi;

 typedef ProductoExi *ProductoExistente;

 // Operaciones primitivas
 ProductoExistente crearProductoExistente(int codigoIdProducto,  int cantidadProducto);
 int darcodigoIdProducto(ProductoExistente p);
 int darcantidadProducto(ProductoExistente p);
 void modificarcodigoIdProducto(ProductoExistente p, int codigoIdProducto);
 void modificarcantidadIdProducto(ProductoExistente p, int cantidadIdProducto);
 void destruirProductoExistente(ProductoExistente p);


#endif // PRODUCTOEXISTENTE_H_INCLUDED
