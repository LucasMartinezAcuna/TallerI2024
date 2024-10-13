#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Fecha.h"
#include "Cadena.h"
#include "Producto.h"
#include "Lista.h"
#include "Productos.h"
#include "Cliente.h"
#include "Clientes.h"
#include "Pedido.h"
#include "Pedidos.h"
#include "ListaPedidos.h"
#include "ListaClientes.h"
#include "ListaProductoExistente.h"
#include "Alerta.h"
#include "Alertas.h"
#include "Punto.h"
#include "Puntos.h"
using namespace std;

int main(){

    /*ListaProductos catalogo;
    crearLista(catalogo);

    Producto prod=crearProducto(1, "Detergente Nevex", "Limpieza", 27.99);
    insFrontLista(catalogo, prod, 100);
    */

    printf("primer texto");
    cadena s1, s2, s3;
    strcrear(s1);
    strcrear(s2);
    strcrear(s3);


    Fecha fech = cargarFecha(10,5,2024);
    Producto p,p2,p3;  // TDA Producto (tipo puntero)
    ListaProductos listaProductos; // Declarar la lista de productos
    crearLista(listaProductos); // Inicializar la lista

    hashProductos h;
    crear(h);
    Cliente c,c1,c2,c3;
    c = crearCliente(1,"Pedro","Rosas","camino las tropas","Montevideo",46346);
    c1 = crearCliente(2,"Lujan","Rosas","camino las tropas","URU",6743654);
    c2 = crearCliente(3,"Juan","Rosas","camino las tropas","URU",76543);
    c3 = crearCliente(4,"Ana","Rosas","camino las tropas","URU",346576);

    printf("-----------------------------------------------------------------------------------------\n");
    p = crearProducto(1, "Detergente Nevex", "Limpieza", 27.99);
    p2 = crearProducto(2, "Jabón Astral", "Limpieza", 99.99);
    p3 = crearProducto(3, "Heladera James", "Electrodomesticos", 87.99);
    insertar(h, p, 50);
    insertar(h, p2,29);
    insertar(h, p3,15);

    printf("Productos insertados en el hash.\n");
    desplegarHash(h);

    //probamos la concatenacion
    strcop(s1,"mana");
    strcop(s2,"hola");
    printf("cadena %s\n",s2);
    strcon(s1,s2);
    printf("cadena %s\n",s2);
    printf("\n LUCIANA 1 \n ");
    //probamos la igualdad
    printf("iguales: %i\n",streq("hrehreh","hola"));

    //probamos el intercambio
    strswp(s1,s2);
    printf("cadena %s-%s\n",s1,s2);

    //probamos el si s1 es menor a s2
    printf("s1 menor que s2: %i\n",strmen("zfjeigjg","hola"));
    Producto obtenido = obtener(h, 3);
    if (obtenido != NULL)
    {
        printf("Producto con codigo 3 \n");
        printf("Codigo: %d\n", darcodigoId(obtenido));
        printf("Descripcion: ");
        print(dardescripcion(obtenido));
        printf("\nTipo: ");
        print(dartipo(obtenido));
        printf("\nPrecio: %.2f\n", darprecio(obtenido));
    }
    eliminar(h, 2);
    printf("\n despues de eliminar:\n ");

    desplegarHash(h);
    printf("\n despues de desplegar:\n ");

    //probando el hash de clientes
    Lista_clientes listaClientes; // Declarar la lista de productos
    crearLista_clientes(listaClientes); // Inicializar la lista

    Hash_clientes hc;
    crear_clientes(hc);

    insertar_clientes(hc, c);
    insertar_clientes(hc, c1);
    insertar_clientes(hc, c2);
    insertar_clientes(hc, c3);

    printf("Clientes insertados en el hash.\n");
    desplegarHash_clientes(hc);
    printf("despues de desplegar clientes 1 luciana.\n");
    eliminar_clientes(hc, 2);
    printf("\n despues de eliminar lujan: ");
    desplegarHash_clientes(hc);

    //probando hash de pedidos

    Pedido pd,pd2,pd3,pd4;  // TDA Producto (tipo puntero)

    Lista_pedidos listaPedidos; // Declarar la lista de productos
    crearLista_pedidos(listaPedidos); // Inicializar la lista
     // crear_pedidos(hp);


    Hash_pedidos hp;

    ListaProductoExistente pe;

     crearListaProductoExistente(pe);
     ProductoExistente pex1=crearProductoExistente(1,200);
     ProductoExistente pex2=crearProductoExistente(2,300);
     ProductoExistente pex3=crearProductoExistente(3,400);
     insFrontListaProductoExistente(pe, pex1);
     insFrontListaProductoExistente(pe, pex2);
     insFrontListaProductoExistente(pe, pex3);
     printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
     desplegarListaProductoExistente(pe);



   /* pd = crearPedido(1,fech,1,7, 2500,"UYU", Lista_producto);
    pd2= crearPedido(2,fech,3,5, 3300,"USD", Lista_producto);
    pd3= crearPedido(3,fech,1,3, 7800,"EGP", Lista_producto);
    pd4= crearPedido(4,fech,3,9, 4996,"USD", Lista_producto);
    insFront_pedidos(listaPedidos,  pd);
    insFront_pedidos(listaPedidos,  pd2);
    insFront_pedidos(listaPedidos,  pd3);
    insFront_pedidos(listaPedidos,  pd4);
     */

    printf("Pedidos insertados en el hash PEDIDOS.\n");
    printf("VER LUCIANA1 \n");
  //  desplegarHash_pedidos(hp);
     printf("VER LUCIANA2 \n");
   // eliminar_pedidos(hp, 2);
   // printf("\n despues de eliminar: ");
   // desplegarHash_pedidos(hp);
    printf("VER LISTA DE PRODUCTOS EXISTENTES \n");
    ListaProductoExistente listaProductosExistentes;
    crearListaProductoExistente(listaProductosExistentes);

    ProductoExistente pe1, pe2, pe3;
    pe1 = crearProductoExistente(darcodigoId(p), 50);
    pe2 = crearProductoExistente(darcodigoId(p2), 29);
    pe3 = crearProductoExistente(darcodigoId(p3), 15);

    printf("hola ver id producto  %d\n", darcodigoIdProducto(pe1));
    printf("hola ver id producto  %d\n", darcodigoIdProducto(pe1));

    insFrontListaProductoExistente(listaProductosExistentes, pe1);
    insFrontListaProductoExistente(listaProductosExistentes, pe2);
    insFrontListaProductoExistente(listaProductosExistentes, pe3);

    pd = crearPedido(1,fech,1,7, 2500,"UYU", listaProductosExistentes);
    pd2 = crearPedido(2,fech,3,5, 3300,"USD", listaProductosExistentes);
    pd3 = crearPedido(3,fech,1,3, 7800,"EGP", listaProductosExistentes);
    pd4 = crearPedido(4,fech,3,9, 4996,"USD", listaProductosExistentes);

    crear_pedidos(hp);

    insertar_pedidos(hp, pd);
    insertar_pedidos(hp, pd2);
    insertar_pedidos(hp, pd3);
    insertar_pedidos(hp, pd4);

    printf("*****LISTA DE PEDIDOS *****************\n");
    desplegarHash_pedidos(hp);

    printf("El mundo es un mejor lugar con PROGRAMACION\n");
    printf("Lista de productos existentes: jajajajajajajajaja--------------------------------------\n");
    desplegarListaProductoExistente(listaProductosExistentes);

    ProductoExistente pe4 = crearProductoExistente(2, 0);
    if (perteneceListaProductoExistente(listaProductosExistentes, pe4)) {
        printf("El producto con ID 2 pertenece a la lista.\n");
    }

    ProductoExistente p5 = obtenerListaProductoExistente(listaProductosExistentes, 3);
    if (p5 != NULL) {
        printf("Producto 2: Codigo %d, Cantidad %d\n", darcodigoIdProducto(pe2), darcantidadProducto(pe2));

    }

    borrarListaProductoExistente(listaProductosExistentes, 2);
    printf("Lista después de eliminar el producto con ID 2:\n");
    desplegarListaProductoExistente(listaProductosExistentes);

    if (vaciarListaProductoExistente(listaProductosExistentes)) {
        printf("La lista está vacía.\n");
    } else {
        printf("La lista no está vacía.\n");
    }









    destruirProductoExistente(pe1);
    destruirProductoExistente(pe2);
    destruirProductoExistente(pe3);
    destruirProductoExistente(pe4);




    //cout << conversion(200, "Montevideo") << endl;
    //cout << monedaPedido("Montevideo") << endl;

/*
        int opcion;

        do {
            printf("\n");
            printf("Menu de Operaciones:\n\n");
            printf("1.  Crear y mostrar una fecha\n");
            printf("2.  Leer e imprimir cadenas\n");
            printf("3.  Copiar cadena 1 en cadena 3\n");
            printf("4.  Concatenar cadena 2 a cadena 1\n");
            printf("5.  Intercambiar cadena 1 y cadena 2\n");
            printf("6.  Comparar cadenas\n");
            printf("7.  Verificar si las cadenas son iguales\n");
            printf("8.  Crear y mostrar un Producto\n");
            printf("9.  Modificar datos de Producto\n");
            printf("10. Modificar fecha actual\n");
            printf("11. Crear lista\n");
            printf("12. Verificar si la lista esta vacia\n");
            printf("13. Eliminar primer elemento de la lista\n");
            printf("14. Insertar producto al frente de la lista\n");
            printf("15. Mostrar lista de productos\n");
            printf("16. Verificar si un producto está en la lista\n");
            printf("17. Obtener un producto de la lista\n");
            printf("18. Borrar un producto de la lista\n");
            printf("19. Salir\n");
            printf("Seleccione una opcion: ");
            scanf("%d", &opcion);
            fflush(stdin);
Fecha a;
            switch(opcion) {
                case 1:
                    a = crearFecha();
                    a = cargarFecha(25, 7, 2024);
                    desplegarFecha(a);
                    break;

                case 2:
                    printf("Ingrese la primera cadena: ");
                    scan(s1);
                    fflush(stdin);
                    printf("Ingrese la segunda cadena: ");
                    scan(s2);
                    fflush(stdin);
                    printf("Cadena 1: ");
                    print(s1);
                    printf("\n");
                    printf("Cadena 2: ");
                    print(s2);
                    break;

                case 3:
                    strcop(s3, s1);
                    printf("Cadena 3 (copia de cadena 1): ");
                    print(s3);
                    break;

                case 4:
                    strcon(s1, s2);
                    printf("Cadena 1 despues de concatenar con cadena 2: ");
                    print(s1);
                    break;

                case 5:
                    strswp(s1, s2);
                    printf("Despues de intercambiar:\n");
                    printf("Cadena 1: ");
                    print(s1);
                    printf("\n");
                    printf("Cadena 2: ");
                    print(s2);
                    break;

                case 6:
                    if (strmen(s1, s2)) {
                        printf("Cadena 1 es alfabeticamente menor que Cadena 2\n");
                    } else {
                        printf("Cadena 1 no es alfabeticamente menor que Cadena 2\n");
                    }
                    break;

                case 7:
                    if (streq(s1, s2)) {
                        printf("Cadena 1 y Cadena 2 son iguales\n");
                    } else {
                        printf("Cadena 1 y Cadena 2 no son iguales\n");
                    }
                    break;

                case 8:
                    p = crearProducto(123, "Producto Cargado ", "Tipo A", 99.99);
                    printf("Producto creado:\n");
                    printf("Codigo: %d \n", darcodigoId(p));
                    printf("Descripcion: ");
                    print(dardescripcion(p));
                    printf("\nTipo: ");
                    print(dartipo(p));
                    printf("\nPrecio: %.2f\n", darprecio(p));
                    break;

                case 9:
                    modificarcodigoId(p, 456);
                    modificardescripcion(p, "Producto modificado");
                    modificartipo(p, "Tipo B");
                    modificarprecio(p, 149.99);
                    printf("Producto modificado:\n");
                    printf("Codigo: %d\n", darcodigoId(p));
                    printf("Descripcion: ");
                    print(dardescripcion(p));
                    printf("\nTipo: ");
                    print(dartipo(p));
                    printf("\nPrecio: %.2f\n", darprecio(p));
                    break;

                case 10:
                    if (a == NULL) {
                        printf("\nPrimero debe de crear una fecha.\n");
                    } else {
                        int nuevoDia, nuevoMes, nuevoAnio;
                        printf("Modificar Fecha:\n");
                        printf("Ingrese el nuevo dia: ");
                        scanf("%d", &nuevoDia);
                        modificarDia(a, nuevoDia);

                        printf("Ingrese el nuevo mes: ");
                        scanf("%d", &nuevoMes);
                        modificarMes(a, nuevoMes);

                        printf("Ingrese el nuevo anio: ");
                        scanf("%d", &nuevoAnio);
                        modificarAnio(a, nuevoAnio);

                        printf("Fecha modificada:\n");
                        desplegarFecha(a);
                    }
                    break;

                case 11:
                    crearLista(listaProductos);
                    printf("Lista creada (vacia).\n");
                    break;

                case 12:
                    if (esVaciaLista(listaProductos)) {
                        printf("La lista esta vacia.\n");
                    } else {
                        printf("La lista no esta vacia.\n");
                    }
                    break;

                case 13:
                    if (!esVaciaLista(listaProductos)) { // Verificar si la lista NO está vacía
                        //restoListaProductoExistente(listaProductos);
                        printf("Primer producto eliminado de la lista.\n");
                    } else {
                        printf("La lista esta vacía, no se puede eliminar ningun producto.\n");
                    }
                    break;
                case 14:
                    p = crearProducto(789, "Producto en lista", "Tipo C", 199.99);
                    insFrontListaProductoExistente(listaProductos, p);
                    printf("Producto insertado al frente de la lista.\n");
                    break;

                case 15:
                    printf("Lista de productos:\n");
                    desplegarLista(listaProductos);
                    break;

                case 16: {
                    int codigoBusqueda;
                    printf("Ingrese el codigo del producto a buscar: ");
                    scanf("%d", &codigoBusqueda);
                    Producto buscado = crearProducto(codigoBusqueda, "", "", 0.0);
                    if (perteneceLista(listaProductos, buscado)) {
                        printf("El producto con codigo %d esta en la lista.\n",codigoBusqueda);
                    } else {
                        printf("El producto con codigo %d no esta en la lista.\n",codigoBusqueda);
                    }
                    destruirProducto(buscado);
                    break;
                }

                case 17: {
                    int posicion;
                    printf("Ingrese la posicion del producto a obtener: ");
                    scanf("%d", &posicion);

                    Producto obtenido = obtenerLista(listaProductos, posicion);
                    if (obtenido != NULL) {
                        printf("Producto en la posicion %d:\n", posicion);
                        printf("Codigo: %d\n", darcodigoId(obtenido));
                        printf("Descripcion: ");
                        print(dardescripcion(obtenido));
                        printf("\nTipo: ");
                        print(dartipo(obtenido));
                        printf("\nPrecio: %.2f\n", darprecio(obtenido));
                    } else {
                        printf("No hay producto en la posicion %d.\n", posicion);
                    }
                    break;
                }

                case 18: {
                    int posicionBorrar;
                    printf("Ingrese la posicion del producto a borrar: ");
                    scanf("%d", &posicionBorrar);
                    borrarLista(listaProductos, posicionBorrar);
                    printf("Producto en la posicion %d borrado de la lista.\n", posicionBorrar);
                    break;
                }

                case 19:
                    printf("Saliendo...\n");
                    break;

                default:
                    printf("Opcion no valida. Por favor, intente de nuevo.\n");
            }
        } while (opcion != 19);

        // Liberar la memoria del producto creado
        destruirProducto(p);
        // Liberar memoria de la lista
        while (!esVaciaLista(listaProductos)) {
            restoListaProductoExistente(listaProductos);
        }
*/
    // Liberar memoria de Cadena
    strdestruir(s1);
    strdestruir(s2);
    strdestruir(s3);

    return 0;
}


