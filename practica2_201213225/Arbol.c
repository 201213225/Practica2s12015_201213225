#include <stdio.h>
#include <stdlib.h>
#include "Arbol.h"
#include "nodo.h"

Arbol *incertar(Arbol *raiz, int info){
    raiz->raiz = incertar_nodo(raiz->raiz, info);
    return raiz;
}
