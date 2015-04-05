/* 
 * File:   nodo.h
 * Author: alex
 *
 * Created on 3 de abril de 2015, 20:36
 */

#ifndef NODO_H
#define	NODO_H

    typedef struct nodo{
        struct Nodo *izq;
        struct Nodo *der;
        int info;
        int h;
    }Nodo;
    Nodo *incertar_nodo(Nodo *raiz, int info);
    int actualizar_fe(Nodo *raiz);
#endif	/* NODO_H */

