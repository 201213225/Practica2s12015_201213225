/* 
 * File:   Arbol.h
 * Author: alex
 *
 * Created on 3 de abril de 2015, 23:49
 */
#ifndef ARBOL_H
#define	ARBOL_H

    typedef struct arbol{
        struct Nodo *raiz;
    }Arbol;
    Arbol *incertar(Arbol *raiz, int info);
#endif	/* ARBOL_H */

