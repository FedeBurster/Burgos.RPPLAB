#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "burgos.h"

int altaTrabajo(int flagMascotas,int*flagAlta,int*flagId,eMascota*mascotas,eServicio*servicios,eTrabajo*trabajos,int mascotaLength,eCliente*clientes)
{
    if(flagMascotas==0)
    {
        printf("\nSe debe dar de alta al menos una mascota para acceder a esta opcion\n");
        system("pause");
        return 0;
    }
    int i,auxInt,j,k;
    char buff[100];
    time_t now = time(0);
    struct tm now_t = *localtime(&now);
    strftime (buff, 100, "%d-%m-%Y %H:%M:%S", &now_t);

    listarMascotas(flagMascotas,mascotas,mascotaLength,clientes);
    printf("\nIngrese el id de la mascota: ");
    scanf("%d",&auxInt);
    fflush(stdin);
    for(i=0;i<mascotaLength;i++)
    {
        if(auxInt!=-1 && auxInt==mascotas[i].mascotaId)
        {
            listarServicios(servicios);
            printf("\nIngrese el ID del servicio: ");
            scanf("%d",&auxInt);
            fflush(stdin);
            for(j=0;j<3;j++)
            {
                if(servicios[j].servicioId==auxInt)
                {
                    for(k=0;k<mascotaLength;k++)
                    {
                        if(trabajos[k].trabajoId==-1)
                        {
                            *flagAlta=*flagAlta+1;
                            *flagId=*flagId+1;
                            trabajos[k].trabajoFecha.fechaAnio = now_t.tm_year + 1900; // years since 1900
                            trabajos[k].trabajoFecha.fechaMes = now_t.tm_mon +1;  // months since January [0-11]
                            trabajos[k].trabajoFecha.fechaDia = now_t.tm_mday;  // day of month [1-31]
                            trabajos[k].trabajoId=*flagId;
                            trabajos[k].trabajoIdMascota=mascotas[i].mascotaId;
                            trabajos[k].trabajoIdServicio=servicios[j].servicioId;
                            system("cls");
                            printf("  ID   | ID MASCOTA | ID SERVICIO | FECHA");
                            printf("\n%5d %11d %11d      ",trabajos[k].trabajoId,trabajos[k].trabajoIdMascota,trabajos[k].trabajoIdServicio);
                            printf("%d/%d/%d\n",trabajos[k].trabajoFecha.fechaDia,trabajos[k].trabajoFecha.fechaMes,trabajos[k].trabajoFecha.fechaAnio);
                            printf("Se cargo el trabajo con exito.\n");
                            system("pause");
                            return 0;
                        }
                    }
                }
            }
            printf("\nEl ID ingresado no corresponde\n");
            system("pause");
            return 0;
        }
    }
    printf("\nEl ID ingresado no corresponde\n");
    system("pause");
    return 0;
}

int listarTrabajos(eTrabajo*trabajos,int length,eMascota*mascotas,eServicio*servicios)
{
    int i,j;
    printf("\n\n  ID   | MASCOTA |   SERVICIO   | FECHA");
    for(i=0;i<length;i++)
    {
        if(trabajos[i].trabajoId!=-1)
        {
            printf("\n%5d",trabajos[i].trabajoId);
            for(j=0;j<length;j++)
            {
                if(trabajos[i].trabajoIdMascota==mascotas[j].mascotaId)
                {
                    printf("%10s",mascotas[j].mascotaNombre);
                }
            }
            for(j=0;j<3;j++)
            {
                if(trabajos[i].trabajoIdServicio==servicios[j].servicioId)
                {
                    printf("%15s",servicios[j].servicioDescripcion);
                }
            }
            printf("%5d/%d/%d\n",trabajos[i].trabajoFecha.fechaDia,trabajos[i].trabajoFecha.fechaMes,trabajos[i].trabajoFecha.fechaAnio);
        }
    }

    return 1;
}
