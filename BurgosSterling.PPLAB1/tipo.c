#include <stdio.h>
#include <stdlib.h>
#include "burgos.h"

int listarTipos(eTipo *tipos,int length)
{
    int i;
    printf("\n  ID         DESCRIPCION\n");
    for(i=0;i<length;i++)
    {
        printf("%4d%20s\n",tipos[i].tipoId,tipos[i].tipoDescripcion);
    }
    return 1;
}
