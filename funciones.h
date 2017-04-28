#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#define A 20
typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

} ePersonas;


/** \brief obtiene la estructura
 *
 * \param cada parte de la estructura obtiene un valor
 *
 * \return retorna a las variables.
 *
 */


 void crearPersona(ePersonas[], int);



/** \brief buscar un lugar en 0 osea vasio
 *
 * \param carga dato donde esta 0
 * \return el valor 0 en la posicion borrada
 *
 */
void borrarPersona(ePersonas[],int);

/** \brief ordena los datos alfaveticamente
 *
 *
 * \param los nombre de las estructuras
 * \return muestra la tabal con las personas ingresadas
 *
 */

void ordenarPersonasPorNombre(ePersonas[],int);


/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */



int buscarPorDni(ePersonas[], int);















#endif // FUNCIONES_H_INCLUDED
