#ifndef _VALIDACION_H_
#define _VALIDACION_H_

#include <stdio.h>
#include "idioma.h"

#define SALTO_DE_LINEA '\n'

/*Tipo Booleano*/
typedef enum
{
	True = 1,
	False = 0
}bool_t;

/*Prototipo de funciones*/
bool_t verificar_argumentos_linea_comando (int argc, const char * argv[]);
bool_t abrir_archivo (FILE ** ptr_archivo, const char * nombre_archivo,const char * modo_apertura);
void cerrar_archivo (FILE ** ptr_archivo);

#endif
