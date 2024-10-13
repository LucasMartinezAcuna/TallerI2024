#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED
#include "Cadena.h"

typedef struct{
    int docId;
    cadena nombre;
    cadena apellido;
    cadena direccion;
    cadena pais;
    int telefono;
} nodo13;

typedef nodo13 *Cliente;

// Operaciones primitivas
Cliente crearCliente(int docId, cadena nombre, cadena apellido, cadena direccion, cadena pais, int telefono);
int dardocId(Cliente c);
cadena darnombre(Cliente c);
cadena darapellido(Cliente c);
cadena dardireccion(Cliente c);
cadena darpais(Cliente c);
int dartelefono(Cliente c);
void modificardocId(Cliente c, int docId);
void modificarnombre(Cliente c, cadena nombre);
void modificarapellido(Cliente c, cadena apellido);
void modificardireccion(Cliente c, cadena direccion);
void modificarpais(Cliente c, cadena pais);
void modificartelefono(Cliente c, int telefono);
void destruirCliente(Cliente c);




#endif // CLIENTE_H_INCLUDED
