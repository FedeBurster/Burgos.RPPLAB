#include <stdio.h>
#include <stdlib.h>
#include "burgos.h"

int listarColores(eColor *colores,int length)
{
    int i;
    printf("\n  ID              NOMBRE\n");
    for(i=0;i<length;i++)
    {
        printf("%4d%20s\n",colores[i].colorId,colores[i].colorNombre);
    }

    return 1;
}
