//un programa que multiplique 2 matrices de n*n dimesiones e imprima la matriz resultante


#include<stdio.h>

int i,j,k;
int f,c;
int x,w;

int main(){
//llenado de la primera matriz
printf("ingrese el numero de filas");
scanf("%d", & f);
printf("ingrese el numero de columnas");
scanf("%d", &c );
int m1[f][c];
for (x=0; x<f;x++){
for (w=0; w<c;w++){
printf("ingrese los valores %d%d", x+1,w+1);
scanf("%d", & m1[x][w]);
}
printf("\n");
}

//llenado de la segunda matriz
printf("ingrese el numero de filas");
scanf("%d", & f);
printf("ingrese el numero de columnas");
scanf("%d", & c);
int m2[f][c];

for (x=0; x<f;x++){
for (w=0; w<c;w++){
printf("ingrese los valores %d%d", x+1,w+1);
scanf("%d", & m2[x][w]);
}
printf("\n");
}


//imprimir la primera matriz
printf("matriz M1: \n");
for (x=0; x<=f-1;x++){
for (w=0; w<=f-1;w++){
printf("%d\t",m1[x][w]);
}
printf("\n");
}

//imprimir la segunda matriz
printf("matriz M2: \n");
for (x=0; x<=f-1;x++){
for (w=0; w<=f-1;w++){
printf("%d\t", m2[x][w]);
}
printf("\n");
}

//multiplicacion de matriz
printf("el resultado de la multiplicacion es \n");

int mR[f][c];
for (i=0; i<=f-1;i++){
for (j=0; j<=c-1;j++){
	mR[i][j]=0;
for (k=0; k<=c-1;k++){
mR[i][j]+=m1[i][k]*m2[k][j];


}

	printf("%d\t\t", mR[i][j]);	

}
printf("\n");
}

}
