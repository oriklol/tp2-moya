#include <stdio.h>
#include <string.h>

void reemplazarSubcadena(char *cadena, const char *buscar, const char *reemplazar) {
    char *posicion;
    int longitudBuscar = strlen(buscar);
    int longitudReemplazar = strlen(reemplazar);

    while ((posicion = strstr(cadena, buscar)) != NULL) {
        memmove(posicion + longitudReemplazar, posicion + longitudBuscar, strlen(posicion + longitudBuscar) + 1);
        memcpy(posicion, reemplazar, longitudReemplazar);
    }
}

int main() {
    char cadena[100];
    char subcadenaBusqueda[100], subcadenaReemplazo[100];

    printf("Ingresa una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = '\0'; 

    printf("Ingresa la subcadena que quieres buscar: ");
    fgets(subcadenaBusqueda, sizeof(subcadenaBusqueda), stdin);
    subcadenaBusqueda[strcspn(subcadenaBusqueda, "\n")] = '\0'; 

    printf("Ingresa la subcadena con la que quieres reemplazar: ");
    fgets(subcadenaReemplazo, sizeof(subcadenaReemplazo), stdin);
    subcadenaReemplazo[strcspn(subcadenaReemplazo, "\n")] = '\0'; 

    reemplazarSubcadena(cadena, subcadenaBusqueda, subcadenaReemplazo);

    printf("La cadena modificada es: %s\n", cadena);

    return 0;
}
