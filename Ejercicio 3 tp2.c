#include <stdio.h>
#include <string.h>

int esAlfabetico(char c) {
    return isalpha(c);
}

char aMinuscula(char c) {
    return tolower(c);
}

int esPalindromo(char cadena[]) {
    int longitud = strlen(cadena);
    int i = 0, j = longitud - 1;

    while (i < j) {
        while (i < longitud && !esAlfabetico(cadena[i])) {
            i++;
        }
        while (j >= 0 && !esAlfabetico(cadena[j])) {
            j--;
        }

        if (i < longitud && j >= 0) {
            if (aMinuscula(cadena[i]) != aMinuscula(cadena[j])) {
                return 0; 
            }
            i++;
            j--;
        }
    }

    return 1; 
}

int main() {
    char cadena[100];

    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);

    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    if (esPalindromo(cadena)) {
        printf("La cadena es un palindromo.\n");
    } else {
        printf("La cadena no es un palindromo.\n");
    }

    return 0;
}

