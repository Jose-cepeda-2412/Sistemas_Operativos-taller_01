/*
* Fecha: 21 agosto 2025
* Autor: José Jesús Cepeda Vargas
* Materia: Sistemas Operativos
* Temas: memoria dinamica
* Objetivo: documentar codigo, corregir o arreglar errores
* challenge 5
*/

#include <stdio.h>//biblioteca estandar de entrada y salidad de datos
#include <stdlib.h>//biblioteca para memoeria dinamica
//funcion principal
int main(){
    //se inciializan las variables ptr, i, n1, n2, ptr es un apuntador para 
    //reserva de memoriua dinamica, i es el iterador para los ciclos, n1 es el 
    //primer tamaño que se pide para crear 
    int *ptr, i, n1, n2;
    //se pide ingresar el tamaño del primero (n1)
    printf("Enter size: ");
    //se guarda el dato en n1
    scanf("%d", &n1);
    //se hace la reserva de memoria para los numero de tipo int
    ptr = (int*) malloc(n1 *sizeof(int));
    //
    printf("Addresses of previously allocated memory: ");
    //ciclo que empieza en i = 0, hasta que i sea < n1 y se suma uno cada vez que se complete el ciclo
    for(i = 0; i < n1; i++){
        //se muestran las posiciones de memoria que se estan reservando con el primer tamaño ingresado
        printf("\n\np = %p\n", ptr+1);
    }
    //se pide el nuevo tamaño para redimensionar el arreglo dinamico
    printf("\nEnter the new size: ");
    //se guarda el tamaño nuevo en la variable n2
    scanf("%d", &n2);
    //rellocating the memory
    //se reasigna la memoria dinamica con realloc
    ptr = realloc(ptr, n2* sizeof(int));
    //
    printf("addresses of newly allocated memory: ");
    //ciclo que empieza en i = 0, hasta que i sea < n2 y se suma uno cada vez que se complete el ciclo
    for(i = 0; i < n2; i++){
        //se muestran las posiciones de memoria que se estan reservando con el nuevo tamaño
        printf("\n\np = %p\n", ptr+1);
    }
    //se libera la memoria 
    free(ptr);
    //finalizar el programa
    return 0;
}