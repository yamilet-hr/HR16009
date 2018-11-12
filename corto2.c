#include<stdio.h>
int n;
int m;
int s;
int x;
int fibonaci(int n);
int main(){
//pido el valor de n
printf("ingrese un numero para calcular");
scanf("%d",&n);
fibonaci(n);
//convovo el fibonaci desde el inicio hasta donde n ingresada 
for(x=1;x<=n;x++){
	
printf("%d ,", fibonaci(x));
}
}
//metodo que calcula el fibonacci

int fibonaci(int n){ 
 
if
(n==1 || n==2) { 
 
return 1; 
 
} 
 
else
{ 
 s=fibonaci(n-1)+fibonaci(n-2);
return s; 

} 
 
}
