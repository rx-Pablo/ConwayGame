#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "../libs/funciones.h"
#define TAMC 50
#define TAMF 50
#include <stdio.h>
#include <stdlib.h>

void inicializaMatCero(int mapa[][TAMC], size_t);
void imprimirMatriz(int mapa[][TAMC], size_t);
void harcodeoUnos(int mapa[][TAMC], size_t);

#endif // FUNCIONES_H_INCLUDED
