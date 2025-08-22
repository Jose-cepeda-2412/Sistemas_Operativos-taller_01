/*
* Fecha: 21 agosto 2025
* Autor: José Jesús Cepeda Vargas
* Materia: Sistemas Operativos
* Temas: memoria dinamica
* Objetivo: documentar codigo, corregir o arreglar errores
* challenge 2
*/
#include <stdio.h> //biblioteca estandar de entrada y salidad de datos
#include <stdlib.h>//biblioteca para memoria dinamica 
#include<string.h>//biblioteca para strcpy

//funcion principal
int main(){
    //declarar un puntero de tipo char e inicializarlo en null
    char *q = NULL;
    //muestra un mensaje que se pedira memoria para la cadena de caracteres 
    printf("Requesting space for \"Goodbye\" \n");
    //reserva de memoria dinamica con malloc para almacenar Goodbye 
    q = (char *)malloc(strlen("Goodbye")+1);
    //verifica si no se pudo hacer la reserva de memoria con el apuntador q
    if(!q){
        //imprime mensaje de error por que fallo malloc
        perror("failed to allocate space because");
        //termina el programa
        exit(1);
    }
    //mensaje antes de copiar la cadena de caracteres en la memoria reservada
    printf("About to copy \"Goodbye\" to q at address %p\n", q);
    //se copia la cadena goodbye dentro del espacio de memoria
    strcpy(q, "Goodbye");
    //mensaje de confirmacion para saber que se copio la cadena
    printf("String copied\n");
    //se imprime la cadena almacenada en q
    printf("%s\n",q);
    //se libera la memoria que se reservo 
    free(q);
    //fin del programa
    return 0;
}