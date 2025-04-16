#include <stdio.h>
#include "funciones.h"
#include <math.h>

void convertir_a_grises(unsigned char* imagen, int ancho, int alto, int nuevo_ancho, int* nuevo_alto_salida) {
    //Escalar imagen par aque quepa en la terminal

    float escala = (float)nuevo_ancho / ancho; //Estandar de escala reduccion en horizontal
    int nuevo_alto = (int)(alto * escala * 0.5); //Se multiplica por 0.5 porque en la terminal los caracteres son mas altos que anchos
    *nuevo_alto_salida = nuevo_alto; //Se guarda el nuevo alto en el nuevo alto de salida

    //Convertir a escala de grises

    unsigned char* gris = (unsigned char*)malloc(ancho * alto); //Arreglo para guardar un byte por pixel

    for (int i = 0; i < ancho * alto; i++){
        int r = imagen[i * 3 + 0];
        int g = imagen[i * 3 + 1];
        int b = imagen[i * 3 + 2];
        gris[i] = (unsigned char)(0.3 * r + 0.59 * g + 0.11 * b); //formula para copnvertir a escala de grises
    }

}