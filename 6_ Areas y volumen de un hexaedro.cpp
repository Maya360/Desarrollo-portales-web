/*Escriba un programa en lenguaje C que le permita calcular y mostrar en pantalla el
área de la base, área lateral, área total y volumen de un hexaedro o cubo así:
Área de la base = Lado2
Área lateral = 4 * Lado2
Área total = 6 * Lado2

volumen = Lado3*/

#include<stdio.h>
#include<math.h>

main(){
	
	double areaTotal, lado, areaBase, areaLateral, volumen;
	
	printf("\n\t Area y volumen de un hexaedro");
	printf("\n\t *****************************");
	
	
	printf("\n Ingrese la medida de un lado del hexaedro: ");
	scanf("%lf",&lado);
	
	areaBase= pow(lado,2);
	areaLateral= 4*pow(lado,2);
	areaTotal= 6*pow(lado,2);
	volumen= pow(lado,3);
	
	
	printf("\n El Area de la base de un hexaedro es: %.3lf",areaBase);	
	
	printf("\n El Area lateral de un hexaedro es: %.3lf",areaLateral);	
	
	printf("\n El Area total de un hexaedro es: %.3lf",areaTotal);	
	
	printf("\n El volumen de un hexaedro es: %.3lf",volumen);	
	
	return 0;
	
}
