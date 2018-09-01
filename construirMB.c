//crear 2 matrices A yB de [n]x[n] dimensiones y llenar A con valores desde el teclado
// y construir la matriz B con las filas de la matriz Asiendo asignadas a las columnas de la matriz B



#include<stdio.h>

int i,j,k;
int f,c;
int x,w;

int main(){
	
int fila,columna;	

//llenado de la primera matriz
printf("ingrese el numero de filas");
scanf("%d", & fila);
printf("ingrese el numero de columnas");
scanf("%d", &columna );
int A[fila][columna];
for (f=0; f<fila;f++){
for (c=0; c<columna;c++){
printf("ingrese los valores ");
scanf("%d", & A[f][c]);
}
printf("\n");
}


//imprimir la primera matriz
printf("matriz M1: \n");
for (f=0; f<fila;f++){
for (c=0; c<columna;c++){
printf("%d\t",A[f][c]);
}
printf("\n");
}



int B[fila][columna];
printf("matriz B: \n");
for (f=0; f<fila;f++){
for (c=0; c<columna;c++){
B[c][f]=A[f][c];

}
}

for (f=0; f<fila;f++){
	printf("\n");
for (c=0; c<columna;c++){
printf("%d\t",B[f][c]);
}

}
return 0;
}
