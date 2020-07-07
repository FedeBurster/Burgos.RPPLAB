#include "burgos.h"
#include <stdio.h>
#include <stdlib.h>
int listarClientes(eCliente*clientes)
{
    int i;
    printf("\n ID  SEXO NOMBRE");
    for(i=0;i<5;i++)
    {
        printf("\n%d  %c    %s",clientes[i].clienteId,clientes[i].clienteSexo,clientes[i].clienteNombre);
    }

    return 1;
}
