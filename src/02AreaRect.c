#include <stdio.h>
/**
 * @author Kevin Peñafiel
 * @date 6.dic.2022
 * @details Determinar el area de un rectángulo
*/
int main()
{   //declarar e inicializar las variables
    int longitud =10, ancho =4, rta =0;

    printf("\n << Cual es el area del rectangulo? >> \n");
    printf("Ingrese la longitud: ");
    scanf("%i", &longitud);

    printf("Ingrese el ancho: ");
    scanf("%i", &ancho);
    rta = longitud * ancho;

    printf("El area es:%i \n",rta);
    printf("El area del rectangulo con longitud %i y ancho %i es %i \n" ,longitud, ancho, rta);

    return 0;
}