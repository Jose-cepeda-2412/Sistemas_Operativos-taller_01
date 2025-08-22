/*
* Fecha: 21 agosto 2025
* Autor: José Jesús Cepeda Vargas
* Materia: Sistemas Operativos
* Temas: memoria dinamica
* Objetivo: documentar codigo, corregir o arreglar errores
* challenge 4
*/

#include <stdio.h>//biblioteca estandar de entrada y salidad de datos
#include <stdlib.h>//biblioteca para memoeria dinamica
//funcion principal
int main(){
    //se inicializan la variables n, i, ptr, sum, n es el tamaño, i es el iterador, 
    //ptr es el apuntador y sum es una variable para ir guardando la suuma de los numeros
    int n, i, *ptr, sum = 0;
    //se pide ingresar el numero de elemntos
    printf("Enter number of elements: ");
    //se guardan los elemntos
    scanf("%d", &n);
    //se hace la reserva de memoria para los numero de tipo int
    ptr = (int*) calloc(n, sizeof(int));
    //si el apuntador devuelve NULL despues de reservar la memoria se 
    if(ptr == NULL){
        // muestra un mensaje de error para saber que fallo 
        printf("Error! memory not allocated");
        //termina el programa
        exit(0);
    }
    //ciclo que empieza en i = 0, hasta que i sea < n y se suma uno cada vez que se complete el ciclo
    for(i = 0; i < n; i++){
        //pide el numero uno por uno
        printf("Enter elements %d: ", i + 1);
        //guarda el elemtno en la posicion ptr + i
        scanf("%d", ptr + i);
        //realiza la suma con todos los numeros que se agregan
        sum += *(ptr + i);
    }
    //muestra la suma de todos los numeros que se 
    printf("sum =  %d", sum);
    //se libera la memoria que se reservo en el puntero ptr
    free(ptr);
    return 0;
}