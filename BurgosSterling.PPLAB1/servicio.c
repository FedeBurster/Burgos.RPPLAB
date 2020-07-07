#include <stdio.h>
#include <stdlib.h>
#include "burgos.h"

int listarServicios(eServicio *servicios)
{
    int i;
    printf("\n  ID               DESCRIPCION PRECIO\n");
    for(i=0;i<3;i++)
    {
        printf("%4d%25s %3.2f\n",servicios[i].servicioId,servicios[i].servicioDescripcion,servicios[i].servicioPrecio);
    }
    return 1;
}
