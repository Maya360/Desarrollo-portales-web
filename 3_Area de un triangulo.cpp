//3. Escriba un programa en lenguaje C que le permita calcular y mostrar en pantalla el �rea de un tri�ngulo. �rea del tri�ngulo = (base * altura) /2.

#include <stdio.h>

main(){
	
	
double area, base, altura;

	printf("\n\t Calcular area del triangulo");
	printf("\n\t **************************");
	
	printf("\n Ingrese la base del triangulo: ");
	scanf("%lf",&base);

	printf("\n Ingrese la altura del triangulo: ");
	scanf("%lf",&altura);	
	
	area = (base*altura)/2;
	
	printf("\n El area es de: %.2lf \n\n",area);
	
	return 0;
	
}


