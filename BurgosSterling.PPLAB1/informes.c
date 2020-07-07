#include "burgos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int subMenuInformes()
{
    int opcion;
    system("cls");
    printf("Sub menu informes\n\n1)Mostrar mascotas por color.");
    printf("\n2)Mostrar mascotas de un tipo.\n3)Informar la o las mascotas menor de edad.\n");
    printf("4)Listar las mascotas separadas por tipo.\n5)Elegir un color y un tipo y contar cuantas mascotas hay de ese color y tipo.");
    printf("\n6)Mostrar el o los colores con mas cantidad de mascotas.\n7)Pedir una mascota y mostrar todos los trabajos que se le hicieron a la misma.");
    printf("\n8)Pedir una mascota e informar la suma de los importes de los servicios que se\n  le hicieron a la misma.\n");
    printf("9)Pedir un servicio y mostrar las mascotas a las que se les realizo ese servicio  y la fecha.\n");
    printf("10)Pedir una fecha y mostrar todos los servicios realizados en la misma.\n0)SALIR\n\nIngrese opcion: ");
    scanf("%d",&opcion);
    fflush(stdin);
    return opcion;
}

int mostrarMascotasPorColor(eMascota*mascotas,eColor*colores,int length,eCliente*clientes)
{
    int auxInt,i,flag=0;

    system("cls");
    listarColores(colores,5);
    printf("\n\nIngrese el ID del color que desea mostrar: ");
    scanf("%d",&auxInt);
    fflush(stdin);
    printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaIdColor==auxInt && mascotas[i].mascotaIdColor!=-1)
        {
            listarMascota(mascotas,i,clientes);
            flag++;
        }
    }
    printf("\n");
    if(flag==0)
    {
        printf("\nNo hay mascotas del color ingresado\n");
    }
    system("pause");
    return 1;
}

int mostrarMascotasPorTipo(eMascota*mascotas,eTipo*tipos,int length,eCliente*clientes)
{
    int auxInt,i,flag=0;

    system("cls");
    listarTipos(tipos,5);
    printf("\n\nIngrese el ID del tipo que desea mostrar: ");
    scanf("%d",&auxInt);
    fflush(stdin);
    printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaIdTipo==auxInt && mascotas[i].mascotaId!=-1)
        {
            listarMascota(mascotas,i,clientes);
            flag++;
        }
    }
    printf("\n");
    if(flag==0)
    {
        printf("\nNo hay mascotas del tipo ingresado\n");
    }
    system("pause");
    return 1;
}

int informarMascotaMenorEdad(eMascota*mascotas,int length,eCliente*clientes)
{
    int i,auxIntMenor=30000,flag=0;
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaEdad<=auxIntMenor && mascotas[i].mascotaId!=-1)
        {
            auxIntMenor=mascotas[i].mascotaEdad;
            flag++;
        }
    }
    if(flag==0)
    {
        printf("\nSe debe dar de alta una mascota antes de acceder.\n");
        system("pause");
        return 0;
    }
    printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaEdad==auxIntMenor)
        {
            listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    system("pause");
    return 1;
}

int listarSeparadasTipo(eMascota*mascotas,int length,int flagAlta,eCliente*clientes)
{
    int i,auxFlag=0;
    if(flagAlta==0)
    {
        printf("\nSe debe dar de alta al menos una mascota para acceder a esta opcion\n");
        system("pause");
        return 0;
    }
    //////////
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1000)
            auxFlag++;
    }
    if(auxFlag!=0)
    {
        printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
        for(i=0;i<length;i++)
        {
            if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1000)
                listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    ////////////
    auxFlag=0;
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1001)
            auxFlag++;
    }
    if(auxFlag!=0)
    {
        printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
        for(i=0;i<length;i++)
        {
            if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1001)
                listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    ////////////
    auxFlag=0;
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1002)
            auxFlag++;
    }
    if(auxFlag!=0)
    {
        printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
        for(i=0;i<length;i++)
        {
            if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1002)
                listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    /////////
    auxFlag=0;
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1003)
            auxFlag++;
    }
    if(auxFlag!=0)
    {
        printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
        for(i=0;i<length;i++)
        {
            if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1003)
                listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    /////////////
    auxFlag=0;
    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1004)
            auxFlag++;
    }
    if(auxFlag!=0)
    {
        printf("\nID               NOMBRE   TIPO  COLOR EDAD DUENIO");
        for(i=0;i<length;i++)
        {
            if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdTipo==1004)
                listarMascota(mascotas,i,clientes);
        }
    }
    printf("\n");
    system("pause");
    return 1;
}

int contarColorTipo(eColor*colores,eTipo*tipos,eMascota*mascotas,int length,int flagAlta)
{
    if(flagAlta==0)
    {
        printf("\nSe debe dar de alta al menos una mascota para acceder a esta opcion\n");
        system("pause");
        return 0;
    }

    int auxColor,auxTipo,flagContador=0,i;
    system("cls");
    listarColores(colores,5);
    printf("\nIngrese el ID del color: ");
    scanf("%d",&auxColor);
    fflush(stdin);
    if(auxColor!=5000 && auxColor!=5001 && auxColor!=5002 && auxColor!=5003 && auxColor!=5004)
    {
        printf("\nEl ID ingresado no corresponde\n");
        system("pause");
        return 0;
    }

    listarTipos(tipos,5);
    printf("\nIngrese el ID del tipo: ");
    scanf("%d",&auxTipo);
    fflush(stdin);
    if(auxTipo!=1000 && auxTipo!=1001 && auxTipo!=1002 && auxTipo!=1003 && auxTipo!=1004)
    {
        printf("\nEl ID ingresado no corresponde\n");
        system("pause");
        return 0;
    }

    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1 && mascotas[i].mascotaIdColor==auxColor && mascotas[i].mascotaIdTipo==auxTipo)
        {
            flagContador++;
        }
    }
    printf("\nHay %d mascotas de color ",flagContador);
    for(i=0;i<5;i++)
    {
        if(auxColor==colores[i].colorId)
        {
            printf("%s",colores[i].colorNombre);
        }
    }
    for(i=0;i<5;i++)
    {
        if(auxTipo==tipos[i].tipoId)
        {
            printf(" y de tipo %s",tipos[i].tipoDescripcion);
        }
    }
    printf("\n");
    system("pause");
    return 1;
}

int mostrarColorMasMascotas(eMascota*mascotas,eColor*colores,int length,int flagAlta)
{
    if(flagAlta==0)
    {
        printf("\nSe debe dar de alta al menos una mascota para acceder a esta opcion\n");
        system("pause");
        return 0;
    }
    int i,auxMax=-1;
    int flagColor[5]={0,0,0,0,0};

    for(i=0;i<length;i++)
    {
        if(mascotas[i].mascotaId!=-1)
        {
            if(mascotas[i].mascotaIdColor==5000)
            {
                flagColor[0]++;
            }
            if(mascotas[i].mascotaIdColor==5001)
            {
                flagColor[1]++;
            }
            if(mascotas[i].mascotaIdColor==5002)
            {
                flagColor[2]++;
            }
            if(mascotas[i].mascotaIdColor==5003)
            {
                flagColor[3]++;
            }
            if(mascotas[i].mascotaIdColor==5004)
            {
                flagColor[4]++;
            }
        }
    }

    for(i=0;i<5;i++)
    {
        if(flagColor[i]>auxMax)
        {
            auxMax=flagColor[i];
        }
    }
    printf("\nEl/Los colores con mas mascotas: ");
    printf("\n\n  ID              NOMBRE\n");
    for(i=0;i<5;i++)
    {
        if(flagColor[i]==auxMax)
        {
            printf("%4d%20s\n",colores[i].colorId,colores[i].colorNombre);
        }
    }
    printf("\n");
    system("pause");
    return 1;
}

int listarTrabajosPorMascota(eTrabajo*trabajos,int length,eMascota*mascotas, eTipo*tiposMascota, eColor*coloresMasc, eServicio*servicios,int flagAlta,eCliente*clientes)
{

    if(flagAlta==0)
    {
        printf("\nSe debe dar de alta al menos una mascota para acceder a esta opcion\n");
        system("pause");
        return 0;
    }

    int auxId,i,j;
    int flagPrimeraVez=0;

    system("cls");
    printf("Trabajos hechos a una mascota\n");
    listarMascotas(flagAlta,mascotas,length,clientes);
    printf("\nIngrese ID mascota: ");
    scanf("%d",&auxId);
    fflush(stdin);
    for(i=0;i<length;i++)
    {
        if(trabajos[i].trabajoIdMascota==auxId && auxId!=0)
        {
            if(flagPrimeraVez==0)
            {
                printf("\n\n  ID   | MASCOTA |   SERVICIO   | FECHA");
                flagPrimeraVez++;
            }
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
    if(flagPrimeraVez==0)
    {
       printf("\nEl ID ingresado no corresponde\n");
    }
    system("pause");
    return 0;
}

int mostrarImporteMascota(int flagAltaMascota,int flagAltaTrabajos,eMascota*mascotas,int length,eCliente*clientes,eTrabajo*trabajos)
{
    int i,auxId;
    if(flagAltaMascota==0 || flagAltaTrabajos==0)
    {
        printf("\nSe debe dar de alta al menos una instancia para acceder a esta opcion\n");
        system("pause");
        return 0;
    }
    listarMascotas(flagAltaMascota,mascotas,length,clientes);
    printf("\nIngrese ID mascota: ");
    scanf("%d",&auxId);
    fflush(stdin);
    for(i=0;i<length;i++)
    {
        if(trabajos[i].trabajoIdMascota==auxId)
        {
            if(trabajos[i].trabajoIdServicio==20000)
            {

            }
        }
    }
    return 1;
}
