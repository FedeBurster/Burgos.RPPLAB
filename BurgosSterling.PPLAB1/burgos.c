#include "burgos.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int mainMenu()
{
    int opcion=-1;
    system("cls");
    printf("Menu principal:\n\t1)Alta mascota\n\t2)Modificar mascota\n\t3)Baja mascota\n\t4)Listar mascotas");
    printf("\n\t5)Listar tipos\n\t6)Listar colores\n\t7)Listar servicios\n\t8)Alta trabajo\n\t9)Listar trabajos\n\t10)Menu informes");
    printf("\n\t0)SALIR\n\nIngrese Opcion: ");
    scanf("%d",&opcion);
    fflush(stdin);
    return opcion;
}

int hardCodeoEjemplos(eCliente*clientes,eMascota*mascotas,eTrabajo*trabajos,int*flagAltaMascotas,int*flagAltaTrabajos)
{
    clientes[0].clienteId=3000;
    clientes[0].clienteSexo='M';
    strcpy(clientes[0].clienteNombre,"Fede");
    clientes[1].clienteId=3001;
    clientes[1].clienteSexo='F';
    strcpy(clientes[1].clienteNombre,"Zoe");
    clientes[2].clienteId=3002;
    clientes[2].clienteSexo='F';
    strcpy(clientes[2].clienteNombre,"Uma");
    clientes[3].clienteId=3003;
    clientes[3].clienteSexo='M';
    strcpy(clientes[3].clienteNombre,"Patricio");
    clientes[4].clienteId=3004;
    clientes[4].clienteSexo='M';
    strcpy(clientes[4].clienteNombre,"Pancho");

    mascotas[0].mascotaId=1;
    mascotas[0].mascotaIdTipo=1000;
    mascotas[0].mascotaIdColor=5000;
    strcpy(mascotas[0].mascotaNombre,"Bruja");
    mascotas[0].mascotaEdad=3;
    mascotas[0].mascotaIdCliente=3000;
    mascotas[1].mascotaId=2;
    mascotas[1].mascotaIdTipo=1001;
    mascotas[1].mascotaIdColor=5001;
    strcpy(mascotas[1].mascotaNombre,"Argos");
    mascotas[1].mascotaEdad=10;
    mascotas[1].mascotaIdCliente=3001;
    mascotas[2].mascotaId=3;
    mascotas[2].mascotaIdTipo=1002;
    mascotas[2].mascotaIdColor=5002;
    strcpy(mascotas[2].mascotaNombre,"Coco");
    mascotas[2].mascotaEdad=2;
    mascotas[2].mascotaIdCliente=3002;
    mascotas[3].mascotaId=4;
    mascotas[3].mascotaIdTipo=1003;
    mascotas[3].mascotaIdColor=5003;
    strcpy(mascotas[3].mascotaNombre,"Oz");
    mascotas[3].mascotaEdad=11;
    mascotas[3].mascotaIdCliente=3003;
    mascotas[4].mascotaId=5;
    mascotas[4].mascotaIdTipo=1004;
    mascotas[4].mascotaIdColor=5004;
    strcpy(mascotas[4].mascotaNombre,"Max");
    mascotas[4].mascotaEdad=2;
    mascotas[4].mascotaIdCliente=3004;
    mascotas[5].mascotaId=6;
    mascotas[5].mascotaIdTipo=1000;
    mascotas[5].mascotaIdColor=5003;
    strcpy(mascotas[5].mascotaNombre,"Lobo");
    mascotas[5].mascotaEdad=12;
    mascotas[5].mascotaIdCliente=3000;
    mascotas[6].mascotaId=7;
    mascotas[6].mascotaIdTipo=1004;
    mascotas[6].mascotaIdColor=5003;
    strcpy(mascotas[6].mascotaNombre,"Leon");
    mascotas[6].mascotaEdad=3;
    mascotas[6].mascotaIdCliente=3002;

    trabajos[0].trabajoId=10000;
    trabajos[0].trabajoIdMascota=2;
    trabajos[0].trabajoIdServicio=20000;
    trabajos[0].trabajoFecha.fechaAnio=2019;
    trabajos[0].trabajoFecha.fechaMes=10;
    trabajos[0].trabajoFecha.fechaDia=1;
    trabajos[1].trabajoId=10001;
    trabajos[1].trabajoIdMascota=2;
    trabajos[1].trabajoIdServicio=20001;
    trabajos[1].trabajoFecha.fechaAnio=2019;
    trabajos[1].trabajoFecha.fechaMes=10;
    trabajos[1].trabajoFecha.fechaDia=1;
    trabajos[2].trabajoId=10002;
    trabajos[2].trabajoIdMascota=1;
    trabajos[2].trabajoIdServicio=20002;
    trabajos[2].trabajoFecha.fechaAnio=2020;
    trabajos[2].trabajoFecha.fechaMes=10;
    trabajos[2].trabajoFecha.fechaDia=1;
    trabajos[3].trabajoId=10003;
    trabajos[3].trabajoIdMascota=4;
    trabajos[3].trabajoIdServicio=20002;
    trabajos[3].trabajoFecha.fechaAnio=2018;
    trabajos[3].trabajoFecha.fechaMes=3;
    trabajos[3].trabajoFecha.fechaDia=18;
    trabajos[4].trabajoId=10004;
    trabajos[4].trabajoIdMascota=7;
    trabajos[4].trabajoIdServicio=20000;
    trabajos[4].trabajoFecha.fechaAnio=2020;
    trabajos[4].trabajoFecha.fechaMes=6;
    trabajos[4].trabajoFecha.fechaDia=22;

    *flagAltaMascotas=7;
    *flagAltaTrabajos=5;
    return 1;
}

int hardcodeoTiposColoresServicio(eTipo *tipos,eColor *colores,eServicio *servicios)
{
    tipos[0].tipoId=1000;
    strcpy(tipos[0].tipoDescripcion,"Ave");
    tipos[1].tipoId=1001;
    strcpy(tipos[1].tipoDescripcion,"Perro");
    tipos[2].tipoId=1002;
    strcpy(tipos[2].tipoDescripcion,"Gato");
    tipos[3].tipoId=1003;
    strcpy(tipos[3].tipoDescripcion,"Roedor");
    tipos[4].tipoId=1004;
    strcpy(tipos[4].tipoDescripcion,"Pez");
    colores[0].colorId=5000;
    strcpy(colores[0].colorNombre,"Negro");
    colores[1].colorId=5001;
    strcpy(colores[1].colorNombre,"Blanco");
    colores[2].colorId=5002;
    strcpy(colores[2].colorNombre,"Gris");
    colores[3].colorId=5003;
    strcpy(colores[3].colorNombre,"Rojo");
    colores[4].colorId=5004;
    strcpy(colores[4].colorNombre,"Azul");
    servicios[0].servicioId=20000;
    strcpy(servicios[0].servicioDescripcion,"Corte");
    servicios[0].servicioPrecio=250;
    servicios[1].servicioId=20001;
    strcpy(servicios[1].servicioDescripcion,"Desparasitado");
    servicios[1].servicioPrecio=300;
    servicios[2].servicioId=20002;
    strcpy(servicios[2].servicioDescripcion,"Castrado");
    servicios[2].servicioPrecio=400;

    return 1;
}

int inicializarArrays(eTrabajo*trabajos,eMascota*mascotas,int length)
{
    int i;
    for(i=0;i<length;i++)
    {
        mascotas[i].mascotaId=-1;
    }
    for(i=0;i<length;i++)
    {
        trabajos[i].trabajoId=-1;
    }
    return 1;
}

/** \brief valida si una cadena esta compuesta unicamente de caracteres alfabeticos
 *
 * \param message char* mensaje pide el ingreso de la cadena a validar
 * \param messageError char* mensaje de error si la cadena ingresada no cumple con los criterios
 * \param maxLengthString int cantidad maxima de caracteres que puede tener la cadena
 * \param auxString char* cadena de caracteres donde se guarda una vez validada
 * \return devuelve 1 si se pudo guardar la cadena de caracteres, 0 de lo contrario
 *
 */
int validateString(char* message, char* messageError, int maxLengthString, char* auxString)
{
    int okay = 0,auxInt;
    char aux[500];

    printf("%s", message);
    fflush(stdin);
    gets(aux);
    auxInt = atoi(aux) ;
    if(strlen(aux)<=maxLengthString || auxInt == 0)
    {
        okay = 1;
    }
    while(strlen(aux)>maxLengthString || auxInt != 0 )
    {
        printf("%s", messageError);
        fflush(stdin);
        gets(aux);
        auxInt = atoi(aux) ;
        if(strlen(aux)<=maxLengthString || auxInt == 0)
        {
            okay = 1;
        }
    }
    strcpy(auxString,aux);
    return okay;
}

int validarStringIdColor(char stringInt[])
{
    if(stringInt[0] < '1' || stringInt[0] > '5')
           return 0;

    if(strlen(stringInt)>1)
         return 0;

    return 1;
}

int validarStringInt(char stringInt[])
{
    int i=0;
    while(stringInt[i] != '\0')
    {
        if(stringInt[i] < '0' || stringInt[i] > '9')
           return 0;

        i++;
    }
    return 1;
}

int getInt(char message[], char messageError[], int limiteMin, int limiteMax)
{
    int numero1;

    printf("%s", message);
    scanf("%d", &numero1);
    while(numero1 < limiteMin || numero1 > limiteMax)
    {
        printf("%s", messageError);
        scanf("%d", &numero1);
    }

    return numero1;
}
