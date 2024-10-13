#ifndef CADENA_H_INCLUDED
#define CADENA_H_INCLUDED


  const int MAX = 80;
  typedef char *cadena;


  typedef struct personas{int edad;
  cadena nombre;
 }per;

 // Crear un string vacío
 void strcrear(cadena &s);

 // Liberar la memoria usada por el string
 void strdestruir(cadena &s);

 // Devuelve el largo de la cadena, saque const
 int strlar(cadena s);

 // Copia el contenido de una cadena a otra
 void strcop(cadena &s2, const cadena s1);

 // Lee un string desde el teclado
 void scan(cadena &s);

 // Concatena el contenido de s1 al final de s2, saque const
 void strcon(cadena s1, cadena &s2);

 // Intercambia los contenidos de s1 y s2
 void strswp(cadena &s1, cadena &s2);

 //imprime el string por pantalla
 void print(cadena s);

 // Devuelve verdadero si s1 es alfabéticamente menor que s2
 bool strmen( cadena s1, cadena s2);


 // Devuelve verdadero si s1 y s2 son iguales
 bool streq( cadena s1, cadena s2);


 #endif // CADENA_H_INCLUDED

