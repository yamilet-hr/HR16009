#include<stdio.h>
#include<math.h>

float distanciaPuntos(struct puntos punto1, struct puntos punto2);

float resultado;

struct puntos{
float x;
float y;

}punto1,punto2;

int main(void){
	
	float x,y;
	
	   //pedir los valores y almacenar en el struct los puntos
		printf("\nValor de X1 : ");
		scanf("%f",&punto1.x);
		printf("\nValor de Y1 : ");
		scanf("%f",&punto1.y);
		printf("\nValor de X2 : ");
		scanf("%f",&punto2.x);
		printf("\nValor de Y2 : ");
		scanf("%f",&punto2.y);
		
	
		
	printf("La distancia entre los puntos es: %2f",distanciaPuntos( punto1,punto2)); 
	//mandar como parametro los valores
			
	}

//metodo para calcular distancia
	float distanciaPuntos(struct puntos punto1, struct puntos punto2 ){
    float distancia;
	distancia =sqrt(pow((punto2.x-punto1.x), 2)+(pow(punto2.y-punto1.y, 2)));

    return  distancia;

		
}
