#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char palabras[5][MAX_LENGTH];
    char palabrasLargas[5][MAX_LENGTH];
    char palabraMasLarga[MAX_LENGTH];
    int i, max_length, num_palabras_largas;

    printf("Ingresa 5 palabras:\n");
    for (i = 0; i < 5; i++) {
        printf("Palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }

    max_length = strlen(palabras[0]);
    num_palabras_largas = 1;
    strcpy(palabraMasLarga, palabras[0]);
    strcpy(palabrasLargas[0], palabras[0]);

    for (i = 1; i < 5; i++) {
        int current_length = strlen(palabras[i]);
        if (current_length > max_length) {
            max_length = current_length;
            strcpy(palabraMasLarga, palabras[i]);
            num_palabras_largas = 1;
            strcpy(palabrasLargas[0], palabras[i]);
        } else if (current_length == max_length) {
            strcpy(palabrasLargas[num_palabras_largas], palabras[i]);
            num_palabras_largas++;
        }
    }

    printf("\nLa palabra mas larga es: %s\n", palabraMasLarga);
    if (num_palabras_largas > 1) {
        printf("Las palabras mas largas son:\n");
        for (i = 0; i < num_palabras_largas; i++) {
            printf("%s\n", palabrasLargas[i]);
        }
    }

    return 0;
}
