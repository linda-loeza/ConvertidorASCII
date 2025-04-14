#ifndef FUNCIONES_H
#define FUNCIONES_H

// Declaraciones de carga_imagen.c (Victor)
unsigned char* cargar_imagen(const char* ruta, int* ancho, int* alto);

// Declaraciones de procesamiento.c (Kevin)
void convertir_a_grises(unsigned char* imagen, int ancho, int alto);

// Declaraciones de ascii.c (Natalia)
char** convertir_a_ascii(unsigned char* imagen, int ancho, int alto);

// Declaraciones de guardado.c (Roberto)
void guardar_ascii(char** arte_ascii, int ancho, int alto, const char* ruta_salida);

#endif