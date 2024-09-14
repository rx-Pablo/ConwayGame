#include "../libs/funciones.h"

int main()
{
    int mapa[TAMF][TAMC];

    inicializaMatCero(mapa, TAMC);

    harcodeoUnos(mapa, TAMC);

    imprimirMapa(mapa, TAMC);


    return 0;
}
