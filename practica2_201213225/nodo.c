#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
Nodo *incertar_nodo(Nodo *raiz, int info){
    if(raiz->info == 0){
        raiz->info = info;
        raiz->der = malloc(sizeof(Nodo));
        raiz->izq = malloc(sizeof(Nodo));
    }else{
        if(raiz->info < info){
            raiz->der = incertar(raiz->der, info);
        }else if(raiz->info > info){
            raiz->izq = incertar(raiz->izq, info);
        }
    }
    return raiz;
}
