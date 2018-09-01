
#include<stdio.h>
#define  tam 2000
int main ()
{
 
int opcion,vector[tam],n,i,j,aux,pos,nbus,npos,li,ls,m,numero,encontrado=0,fila,neliminar, insertar;

  do{
    printf("0. llenar vector\n");  
    printf("1. Agregar un dato\n");
	printf("2. Buscar un dato\n");
	printf("3. Editar un dato\n");
	printf("4. Eliminar un dato\n");
	printf("5. Salir\n"); 

	printf("Elije una opcion:\n");
	scanf("%i", &opcion);
 
   
   switch (opcion)
	{
	   case 0:
	          printf ("Ingrese el tamaño vector:\n");
		      scanf("%i",&n);
		      printf ("Ingrese los datos al vector:\n");
		      for (i=0;i<n;i++){
		      scanf ("%i",&vector[i]);
	          }
	   
       break;
	   
	   
	   case 1:
	  
	   	       printf ("En que posicion quieres insertar el numero:\n");
		       scanf ("%i",&pos);
 
		       printf ("Numero que vas a introducir:\n");
		       scanf ("%i",&numero);
 
		      for(i=n;i>=pos;i--){
		         vector[i]=vector[i-1];
		         }
                 vector[pos-1]=numero;
		       for(i=0;i<=n;i++){
		          printf ("%i\t",vector[i]);
                  }
                  printf("\n\n");
 
 
		  break;
 
  	     case 2:
  	   
                 encontrado=0;
		
		         for(i=0;i<n;i++)
		         printf("%i",vector[i]);
 
         		 printf("Que numero quieres buscar?\n");
		         scanf("%i",&nbus);
		
		
		         for (fila=0; fila<n;fila++){
                     if(vector[fila]==nbus){

	               encontrado=fila+1;
	               printf ("El numero esta en la posicion %d\n",encontrado);
	
	              break;
	               }
	
		

                }
                if(encontrado==0){
		        printf ("El numero no existe en el vector\n");	
		
		
	}	

        break;
 
	   case 3:
        printf ("modificar todo el vector\n");	
	
		 printf ("Ingrese el tamaño vector:\n");
		scanf("%i",&n);
		 printf ("Ingrese los datos al vector:\n");
		for (i=0;i<n;i++){
		scanf ("%i",&vector[i]);
	}
	   
		
		
	
 
		   break;
 
	   case 4:
 
		
	   	for(i=0;i<n;i++)
		printf("%i",vector[i]);
 
		printf ("Que numero quieres eliminar?\n");
		scanf ("%i",&neliminar);
		
		
		for (fila=0; fila<n;fila++){
if(vector[fila]==neliminar){

	vector[fila]=0;
	break;
	}
	
		

}

		printf ("numero eliminado\n");	
		
        	}}
        	while (opcion>=0 &&opcion<5);
        	}
