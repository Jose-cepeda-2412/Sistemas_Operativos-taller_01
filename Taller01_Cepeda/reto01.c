/*
* Fecha: 21 agosto 2025
* Autor: José Jesús Cepeda Vargas
* Materia: Sistemas Operativos
* Temas: memoria dinamica
* Objetivo: documentar codigo, corregir o arreglar errores
* challenge 1
*/
#include <stdio.h> //biblioteca estandar de entrada y salidad de datos
#include <stdlib.h>//biblioteca para memoria dinamica
#include<string.h>//biblioteca para strcpy
//funcion principal
int main(){
    //se declara un puntero de tipo char
    char *p; 
    //se declara otro puntero de tipo char incializado con null
    char *q = NULL;

    //se debe reservar memoria, ya que sale el error (zsh: bus error)
    p = (char*)malloc(45 * sizeof (*p));
    //se debe reservar memoria, ya que sal el error (zsh: bus error)
    q= (char*)malloc(45 * sizeof (*q));
    //imprime la direccion que apunta p,
    printf("Address of p = %p\n", p);
    //copia la cadena en la memoria apuntada
    strcpy(p, "Hello, I'm the best in operating systems!!!");
    //imprime la cadena que se copio con strcpy (linea 26)
    printf("%s\n", p);
    //Mensaje para avisar que se copiara otro mensaje
    printf("About to copy \"Goodbye\" to q\n");
    //copia la cadena Goodbye en la direccion de memoria q
    strcpy(q, "Goodbye");
    //se muestra un mensaje de confirmacion, para saber que se copio la cadena
    printf("String copied\n");
    //imprime la cadea Goodbye que se copio con strcpy (lineq 32)
    printf("%s\n", q);

    //liberar la memoria que se reservo con el puntero p
    free(p);
    //se libera la memoria que se reservo con el puntero q
    free(q);

    //fin de programa
    return 0;
}