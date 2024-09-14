#include "../libs/funciones.h"

int main()
{
    //int mapa[TAMF][TAMC];

    int mapa[TAMF][TAMC] = {{0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,1,0,0,0,0},
                            {0,0,0,1,1,1,0,0,0},
                            {0,0,0,0,1,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0,0}};

    for (int iteracion = 0; iteracion < 10; iteracion++) {
        recorreMapa(mapa, TAMC);
        actualizarMapa(mapa, TAMC);
        imprimirMapa(mapa, TAMC);
        printf("\n");
    }

    return 0;
}
