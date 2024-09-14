#include "../libs/funciones.h"

void inicializaMatCero(int mapa[TAMF][TAMC], size_t tam){
    for (int i = 0; i < TAMF; i++) {
        for (int j = 0; j < TAMC; j++) {
            mapa[i][j] = 0;
        }
    }
}

void imprimirMapa(int mapa[TAMF][TAMC], size_t tam) {
    for (int i = 0; i < TAMF; i++) {
        for (int j = 0; j < TAMC; j++) {
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
}


void harcodeoUnos(int mapa[TAMF][TAMC], size_t tam){
    mapa[2][3]= 2;
    mapa[3][3]= 2;
    mapa[4][4]= 2;
}
