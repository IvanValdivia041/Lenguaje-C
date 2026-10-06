#include <stdio.h>

int main () {
	//Realiza un programa que permita la suma de dos numeros
	
	//Definir variables
	int numero1;
	int numero2; 
	int suma; 
	
	//Entrada
	printf ("Ingrese el primer numero: ");
	scanf("%d", &numero1);
	
	printf ("Ingrese el segundo numero: ");
	scanf("%d", &numero2);
	
	//Proceso 
	suma=numero1+numero2;
	
	//Salida
	printf ("El resultado de la suma es: %d\n", suma);

	
	return 0;
}
