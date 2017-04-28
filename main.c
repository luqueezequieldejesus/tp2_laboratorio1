#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define A 20



int main()
{

    ePersonas misPersonas[A];//estructura el primer alumono de 20.

    int opcion=0;
    int seguir='s';
    int i;

    for(i=0; i<A; i++)
    {
        misPersonas[i].estado=0;//Se utilizará el campo de estado para indicar si el ítem del array esta ocupado o no.

    }


    while(seguir=='s')
    {

        printf("°-------------------------------------------------°");
        printf("\n1- Agregar persona\n");
        printf("°-------------------------------------------------°");
        printf("\n2- Borrar persona\n");
        printf("°-------------------------------------------------°");
        printf("\n3- Imprimir lista ordenada por  nombre\n");
        printf("°-------------------------------------------------°");
        printf("\n4- Imprimir grafico de edades\n");
        printf("°-------------------------------------------------°");
        printf("\n5- Salir\n");
        printf("°-------------------------------------------------°");
        printf("\n- Ingrese una opcion -\n");
        scanf("%d",&opcion);





        switch(opcion)
        {



        case 1:

            crearPersona(misPersonas,A);
            break;
        case 2:
            borrarPersona(misPersonas,A);
            break;
        case 3:
            ordenarPersonasPorNombre(misPersonas,A);
            break;
        case 4:
            buscarPorDni(misPersonas,A);
            break;
        case 5:
            seguir='n';
            break;
        }//cierre del switch


    }



}//cierre del while
//cierre del main












