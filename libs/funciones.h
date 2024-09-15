#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define TAMC 38
#define TAMF 20
#include <stdio.h>
#include <stdlib.h>X

void inicializaMatCero(int mapa[][TAMC], size_t);
void imprimirMapa(int mapa[][TAMC], size_t);
void harcodeoUnos(int mapa[][TAMC], size_t);
void recorreMapa(int mapa[][TAMC], size_t);
void actualizarMapa(int mapa[][TAMC], size_t);

#endif // FUNCIONES_H_INCLUDED
