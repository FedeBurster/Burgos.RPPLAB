#ifndef INFORMES_H
#define INFORMES_H

int mostrarMascotasPorColor(eMascota*mascotas,eColor*colores,int length,eCliente*clientes);
int mostrarMascotasPorTipo(eMascota*mascotas,eTipo*tipos,int length,eCliente*clientes);
int informarMascotaMenorEdad(eMascota*mascotas,int length,eCliente*clientes);
int listarSeparadasTipo(eMascota*mascotas,int length,int flagAlta,eCliente*clientes);
int contarColorTipo(eColor*colores,eTipo*tipos,eMascota*mascotas,int length,int flagAlta);
int mostrarColorMasMascotas(eMascota*mascotas,eColor*colores,int length,int flagAlta);
int subMenuInformes();
int listarTrabajosPorMascota(eTrabajo*trabajos,int length,eMascota*mascotas, eTipo*tiposMascota, eColor*coloresMasc, eServicio*servicios,int flagAlta,eCliente*clientes);




#endif
