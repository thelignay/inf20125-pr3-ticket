#include <stdio.h>

int main(void)
{
    int hojas_iniciales = 0;
    int hojas_cargadas = 0;
    int hojas_utilizadas = 0;
    int hojas_disponibles = 0;

    if (scanf("%d %d %d",
              &hojas_iniciales,
              &hojas_cargadas,
              &hojas_utilizadas) != 3)
    {
        return 1;
    }

    hojas_disponibles = hojas_iniciales + hojas_cargadas + hojas_utilizadas;

    printf("Hojas disponibles: %d\n", hojas_disponibles);
    return 0;
}
