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

}

void recorreMapa(int mapa[TAMF][TAMC], size_t tam) {

/*       0 celula muerta, 1 celula viva, 2 apunto de nacer, 3 muere en el siguiente           */
    int i,j,x,y;

    for (i = 0; i < TAMF; i++) {
        for (j = 0; j < TAMC; j++) {
            int vecinosVivos = 0;
            for (x = -1; x <= 1; x++) {
                for (y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) continue;
                    int ni = i + x;
                    int nj = j + y;
                    if (ni >= 0 && ni < TAMF && nj >= 0 && nj < TAMC) {
                        if(mapa[ni][nj] == 1 || mapa[ni][nj] == 3) {
                            vecinosVivos++;
                        }
                    }
                }
            }
            if (mapa[i][j] == 1 && (vecinosVivos < 2 || vecinosVivos > 3)) {
                mapa[i][j] = 3;
            } else if (mapa[i][j] == 0 && vecinosVivos == 3) {
                mapa[i][j] = 2;
            }
        }
    }
}

void actualizarMapa(int mapa[TAMF][TAMC], size_t tam) {
    for (int i = 0; i < TAMF; i++) {
        for (int j = 0; j < TAMC; j++) {
            if (mapa[i][j] == 2) {
                mapa[i][j] = 1;
            } else if (mapa[i][j] == 3) {
                mapa[i][j] = 0;
            }
        }
    }
}
