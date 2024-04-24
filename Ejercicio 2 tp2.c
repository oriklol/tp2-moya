#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int vocales = 0;
    int i;
    
    printf("Ingresa una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    for ( i = 0; cadena[i] != '\0'; i++) {
        char c = tolower(cadena[i]);
        
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        }
    }


    printf("La cadena tiene %d esta cantidad de vocales.\n", vocales);

    return 0;
}

