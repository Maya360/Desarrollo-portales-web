/*Escriba un programa en lenguaje C que le permita calcular y mostrar en pantalla el
área y volumen de un cilindro.
área = 2 * pi * radio * altura
volumen = pi * radio2 * altura
Use el valor de pi como constante, pi = 3.141592.*/


#include<stdio.h>
#include<math.h>

main(){

	const double pi = 3.141592;
	double radio, altura, area, volumen;
	
	
	printf("\n\t Area y volumen de un cilindro");
	printf("\n\t *****************************");
	
	
	printf("\n\t Area del cilindro.");
	
	printf("\n Ingrese el radio: ");
	scanf("%lf", &radio);
	
	printf("\n Ingrese la altura: ");
	scanf("%lf", &altura);
	
	area= 2*pi*radio*altura;
	
	printf ("\n El area es de:  %.2lf \n\n",area);
	
	
	printf("\n\t Volumen del cilindro.");
	
	volumen = pi* pow(radio,2)*altura;
	
	
	printf ("\n El volumen es de:  %.2lf \n\n",volumen);
	
	return 0;

}

