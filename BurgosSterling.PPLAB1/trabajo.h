#include "fecha.h"

#ifndef TRABAJO_H
#define TRABAJO_H
struct {
    int trabajoId;
    int trabajoIdMascota;
    int trabajoIdServicio;
    eFecha trabajoFecha;
}typedef eTrabajo;

int altaTrabajo(int flagMascotas,int*flagAlta,int*flagId,eMascota*mascotas,eServicio*servicios,eTrabajo*trabajos,int mascotaLength,eCliente*clientes);
int listarTrabajos(eTrabajo*trabajos,int length,eMascota*mascotas,eServicio*servicios);
#endif
