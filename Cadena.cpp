#include <iostream>
#include <stdio.h>
#include<conio.h>
#include "Cadena.h"
void strcrear(cadena &s)
{
    s = new char[MAX];
    s[0] = '\0'; // Inicializamos la cadena como vacía
}
void strdestruir(cadena &s)
{
    delete[] s;
    s = nullptr;
}

int strlar(cadena s)
{
    int i =0;
    while (s[i] !='\0')
    {
        i++;
    }
    return i;
}

void strcop(cadena &s1, const cadena s2)
{
    int i=0;
    int largo=strlar(s2) +1;
    delete [] s1;
    s1 =new char[largo];
    while(s2[i] !='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0';
}

void scan(cadena &s)
{
    cadena aux=new char [MAX];
    int i=0;
    char c;
    scanf("%c", &c);

    while(c!='\n'&&i<MAX-1)
    {
        aux[i]=c;
        i++;
        scanf("%c",&c);
    }
    aux[i]='\0';
    strcop(s,aux);
    strdestruir(aux);
}

void print(cadena s)
{

    int i=0;
    while (s[i]!='\0')
    {
        printf("%c",s[i]);
        i++;
    }

}

void strcon(cadena s1, cadena &s2)
{
    cadena aux;
    strcrear (aux);
    strcop(aux,s2);
    int largo=strlar(s1)+ strlar(s2) +1;
    if (largo>MAX)
    {
        largo=MAX;
    }
    delete[]s2;
    s2 = new char [largo];

    //aqui copiamos lo que contiene aux en s2
    int i=0;
    while
    (aux[i] !='\0')
    {
        s2[i]=aux[i];
        i++;
    }

    //y aqui copiamos lo que tiene s1 en s2
    int j =0; //contador pra s1
    while(s1[j]!='\0' && i< (largo-1))
    {
        s2[i]=s1[j];
        j++;
        i++; //contador para s2
    }
    s2[i] = '\0'; //cierre de la cadena
}
bool strmen(const cadena s1, const cadena s2)
{
    int i = 0;

    //comparamos carácter por carácter
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            return true;  // s1 es menor alfabéticamente
        }
        else if (s1[i] > s2[i])
        {
            return false; // s1 es mayor alfabéticamente
        }
        i++;
    }

    //si se recorrieron ambas cadenas y son iguales hasta ahora,
    // la cadena más corta se considera menor.
    if (s1[i] == '\0' && s2[i] != '\0')
    {
        return true;  // s1 es menor porque es más corta
    }
    else
    {
        return false; // s1 es mayor o son iguales
    }
}

bool streq(cadena s1,cadena s2)
{
    int i =0;
    bool iguales=true;

    //obtenemos el tamaño de cada cadena
    int tam1 =strlar(s1);
    int tam2 = strlar(s2);

    //verificamos que sean del mismo tamaño
    if( tam1 == tam2)
    {
        //recorremos caracter por caracter
        while(iguales&&(s1[i]!='\0')&&(s2[i]!='\0'))
        {
            if(s1[i]!=s2[i])
            {
                iguales=false;
            }
            i++;
        }
        if ((s1[i]!='\0')|| (s2[i]!='\0'))
        {
            iguales=false;
        }
    }
    else
    {
        iguales = false;
    }


    return iguales;
}

void strswp(cadena &s1, cadena &s2)
{

    cadena aux;
    aux=s1;
    s1=s2;
    s2=aux;

}
