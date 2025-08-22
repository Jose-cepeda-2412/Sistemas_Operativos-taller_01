/*
* Fecha: 21 agosto 2025
* Autor: José Jesús Cepeda Vargas
* Materia: Sistemas Operativos
* Temas: memoria dinamica
* Objetivo: documentar codigo, corregir o arreglar errores
* challenge 3
*/

#include <stdio.h>//biblioteca estandar de entrada y salidad de datos
#include <stdlib.h>//biblioteca para memoeria dinamica 
//funcion principal
int main() {
    //se declara un puntero de tipo entero 
    int *ptr;  
    //se hace la reserva de memoria para 15 enteros
    ptr = malloc(15 * sizeof (*ptr)); 
    //si el ptr es distinto de null, se asigno correctamaente la memoria dinamica,
    //se asigna 480 en la posicion 6 del arreglo
    if (ptr != NULL) {
        //se asigna 480 al sexto entero del bloque
        *(ptr + 5) = 480;
    }
        
    //se muestra el mensaje para saber si en la posicion 6 se guardo correctarmente el dato 480
    printf("value of the 6th integer is %d\n", ptr[5]);
    
    // se libera la memoria que se reservo
    free(ptr);
    //fin de programa
    return 0; 
}