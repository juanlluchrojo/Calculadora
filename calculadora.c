/*
Autor: Juan Lluch Rojo
Fecha:13/08/2024
Motivo:Crear mi primera calculadora en C
Licencia:GNU Public License
*/


/*
Se declaran las librerias a usar, stdio.h
y math.h, stdio.h es la librería que permite
entrada y salida de datos, math.h es la libreria
que permite operaciones matemáticas
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*Declaramos las variables a utilizar*/

int a;
int b;
int resultado;


/*Función Main*/
int main(){

    /*
    Imprimimos en la pantalla el prompt
    de entrada de datos
    el programa, acto seguido lo almacena
    en la variable a y en la variable b
    */
   printf("Ponga un numero entero: ");
   scanf("%d",&a);
   printf("Introduzca un segundo numero entero: ");
   scanf("%d",&b);

   /*Calculamos el resultado de a + b*/
   printf("\n %d + %d = %d\n", a, b, a + b);


   /*
   Esperamos a que el usuario presione una tecla para terminar
   */
  fflush(stdin);

   system("pause");
  
   /*
   Termina la ejecución del programa
   */
   return 0;
   
}



