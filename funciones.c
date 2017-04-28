#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define A 20

void crearPersona(ePersonas laPersona[], int tam)

{
    int i;



    for(i=0; i<A; i++)
    {

        if(laPersona[i].estado==0)
        {


            printf("Ingrese nombre:");//pido datos.
            fflush(stdin);
            gets(laPersona[i].nombre);

            printf("ingrese edad :");
            scanf("%d",&laPersona[i].edad);

            while(laPersona[i].edad>101 || laPersona[i].edad<0)
            {
                printf("la edad solo puede estar dentro de los parametros 1-100 ");
                scanf("%d",&laPersona[i].edad);
            }


            printf("Ingrese d.n.i:");
            scanf("%d",&laPersona[i].dni);

            laPersona[i].estado=1;//se utilizará el campo de estado para indicar si el ítem del array esta ocupado o no.



            return laPersona;

        }//cierredelif

    }//cierre del for



}

void borrarPersona(ePersonas laPersona[],int tam)

{

    int i;
    int auxDni;
    int respuesta;
    int flagCapacidad=0;
    printf("Ingrese el dni del eliminado: ");
    scanf("%d", &auxDni);

    for(i=0; i<A; i++)
    {
        if(laPersona[i].estado==1 &&auxDni == laPersona[i].dni)//encontro la serie
        {



            printf("Esta seguro de eliminar? ");
            respuesta = getche();
            if(respuesta=='s')
            {
                printf("Persona eliminada. Muchas gracias");
                laPersona[i].estado=0;
            }
            else
            {
                printf("Accion cancelada por el usuario");
            }
            flagCapacidad=1;
            break;
        }
    }
    if(flagCapacidad==0)
    {
        printf("La Persona es inexistente!");
    }








    for(i=0; i<A; i++)
    {
        if(laPersona[i].estado==1)
        {

            printf("nombre%s\t\t%d\t\t %d\n",laPersona[i].nombre,laPersona[i].edad,laPersona[i].dni);

        }

    }







//            int buscarPorDni(Epersona[], int );

}

void ordenarPersonasPorNombre(ePersonas laPersona[],int tam)

{
    int i,j;
    ePersonas auxNombre;


    for(i=0; i<A-1; i++)
    {
        for(j=i+1; j<A; j++)
        {
            if(strcmp(laPersona[i].nombre,laPersona[j].nombre)>0)
            {
                auxNombre = laPersona[i];
                laPersona[i] = laPersona[j];
                laPersona[j] = auxNombre;
            }
        }
    }





    for(i=0; i<A; i++)
    {
        if(laPersona[i].estado==1)
        {
            printf("\nnombre         edad              dni\n");
            printf("%s\t\t%d\t\t %d\n",laPersona[i].nombre,laPersona[i].edad,laPersona[i].dni);
        }

    }

    printf("\n");








}
int buscarPorDni(ePersonas laPersona[], int tam)
{



    int max=0;
    int contadorMayor=0;
    int contadorMenor=0;
    int contadorIntermedio=0;
    int i , j ;
    int tabla [3];
    for(i=0; i<A; i++)
    {



        if(laPersona[i].edad<18 && laPersona[i].estado==1 )
        {
            contadorMenor++;

        }//Menores de 18• De 19 a 35• Mayores de 35.
        else if(laPersona[i].edad>35 && laPersona[i].estado==1)
        {
            contadorMayor++;
        }
        else if(laPersona[i].edad>17 && laPersona[i].edad<36 && laPersona[i].estado==1)
        {
            contadorIntermedio++;
        }


    }


    tabla[0]=contadorMenor;
    tabla[1]=contadorIntermedio;
    tabla[2]=contadorMayor;

    //tabla[0]=;
    //tabla[1]=;
    //tabla[2]=;


    for (i=0; i<3; i++)
    {
        if (tabla[i]>max)
        {

            max=tabla[i];

        }

    }

    /* Procesamos cada uno de los valores filas */
    for (i = max; i >0; i--)
    {


        /* Imprimimos cada una de las columnas (unidades) */
        for (j = 0; j < 3; j++)

        {



            if(tabla[j]>=i)


            {
                printf("         *       ");
            }

            else
            {
                printf("   ");
            }
        }
        printf("\n\n");
    }
    printf(" <18         19-35           35 >");//cierre del for




}
