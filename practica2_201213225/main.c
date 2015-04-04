/*
 * File:   main.c
 * Author: alex
 *
 * Created on 3 de abril de 2015, 15:45
 */

#include <stdio.h>
#include <stdlib.h>
#include "Arbol.h"
#include "nodo.h"

/*
 * 
 */
int main(int argc, char** argv) {
    Arbol *a = malloc(sizeof(Arbol));
    a->raiz = malloc(sizeof(Nodo));
    a = incertar(a,5);
    Nodo *aux = a->raiz;
    printf("%d\n",aux->info);
    /*Nodo *a = malloc(sizeof(Nodo));
    a = incertar(a,1);
    a = incertar(a,2);
    Nodo *aux=a;
    printf("%d\n",aux->info);
    aux = aux->der;
    printf("%d\n",aux->info);
    /*printf("%d\n",a->info);
    printf("%d\n",a->info);
    printf("%d\n",a->info);*/
    return 0;
}

