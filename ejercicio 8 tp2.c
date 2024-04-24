#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	int i;
    int opcion;
    char oracion[100];
    printf("Ingresa una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);
    oracion[strcspn(oracion, "\n")] = 0;

	do{
	printf("\n--- MENU PRINCIPAL ---\n");
    printf("1. Mostrar en mayuscula\n");
    printf("2. Mostrar en minuscula\n");
    printf("3. Mostrar alternando mayuscula y minuscula\n");
    printf("4. Mostrar comenzando las palabras en mayuscula\n");
    printf("5. Finalizar programa\n");
    
    printf("Selecciona una opcion: ");
    scanf("%d", &opcion);
    

    if(opcion == 1) {
        for(i = 0; oracion[i]; i++) {
            oracion[i] = toupper(oracion[i]);
        }
        printf("Oracion en mayuscula: %s\n", oracion);
    } else if(opcion == 2) {
        for( i = 0; oracion[i]; i++) {
            oracion[i] = tolower(oracion[i]);
        }
        printf("Oracion en minuscula: %s\n", oracion);
    } else if(opcion == 3) {
        for(i = 0; oracion[i]; i++) {
            if(i % 2 == 0) {
                oracion[i] = toupper(oracion[i]);
            } else {
                oracion[i] = tolower(oracion[i]);
            }
        }
        printf("Oracion alternando mayusculas y minusculas: %s\n", oracion);
    } else if(opcion == 4) {
        int capitalizar = 1;
        for(i = 0; oracion[i]; i++) {
            if(isalpha(oracion[i])) {
                if(capitalizar) {
                    oracion[i] = toupper(oracion[i]);
                    capitalizar = 0;
                } else {
                    oracion[i] = tolower(oracion[i]);
                }
            } else {
                capitalizar = 1;
            }
        }
        printf("Oracion con palabras en mayuscula: %s\n", oracion);
    } else if(opcion == 5){
        printf("Saliendo del programa. Hasta pronto...");
        return 0;
    }else{
    	printf("Opcion invalida");
	}
    

	}while (opcion != 0);


}
    
