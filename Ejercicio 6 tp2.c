#include <stdio.h>
#include <string.h>

int esAnagrama(char *cadena1, char *cadena2){
	int len1 = strlen(cadena1);
	int len2 = strlen(cadena2);
	
	if(len1 != len2){
		return 0;
	}
	
	int frecuencia[256] = {0};
	
	int i;
	
	for(i=0; i<len1;i++){
		frecuencia[tolower(cadena1[i])]++;
		frecuencia[tolower(cadena2[i])]--;
	}
	
	for(i=0;i<256;i++){
		if(frecuencia[i] != 0){
			return 0;
		}
	}
	
	return 1;
}

int main(){
	char cadena1[100], cadena2[100];
	
	printf("Ingrese la primera cadena: ");
	fgets(cadena1, sizeof(cadena1), stdin);
	
	printf("Ingrese la segunda cadena: ");
	fgets(cadena1, sizeof(cadena2), stdin);
	
	if(esAnagrama(cadena1,cadena2)){
		printf("Las cadenas son anagramas. \n");
	}
	else{
		printf("Las cadenas no son anagramas. \n");
	}
	
	
	return 0;
}

