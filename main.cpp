/*
 * Universidad de las Fuerzas Armadas "ESPE"
 * Enunciado: Recursividad Multiple(MCD)
 * Autor: Leandro Mendoza
 * Fecha de Creacion: 13 de Noviembre del 2024
 * Fecha de Modificacion: 13 de Noviembre del 2024
 * NRC: 1978
 * Curso: Estructura de Datos
 * Docente: Edgar Fernando Solis Acosta
 */

#include <stdio.h>
#include "operaciones.h"

int main() {
    int a, b;

    // Solicita el primer número al usuario
    printf("Introduce el primer número (entero no negativo): ");
    while (scanf("%d", &a) != 1 || a < 0) {  // Validación: solo acepta enteros no negativos
        printf("Entrada no válida. Introduce un número entero no negativo: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    // Solicita el segundo número al usuario
    printf("Introduce el segundo número (entero no negativo): ");
    while (scanf("%d", &b) != 1 || b < 0) {  // Validación: solo acepta enteros no negativos
        printf("Entrada no válida. Introduce un número entero no negativo: ");
        while (getchar() != '\n'); // Limpia el buffer de entrada
    }

    printf("MCD de %d y %d: %d\n", a, b, gcd(a, b));
    return 0;
}
