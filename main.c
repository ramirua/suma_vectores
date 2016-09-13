/* suma de vectores*/
#include <stdio.h>
#include <stdlib.h>
#define r 10
int main()
{
	int vect1[r],vect2[r],vect3[r],k,vector,otro;
	
	printf(" ingrese los valores del 1er vector: \n");
	for(k=0; k<r; k++)
	{
		printf(" vector[%d]= ",k);
		scanf("%d",&vect1[k]);
	
	}
		printf("\n ingrese los valores del 2do vector:\n ");
	for(k=0; k<r; k++)
	{
		printf(" vector[%d]= ",k);
		scanf("%d",&vect2[k]);
	}
	
	for(k=0; k<r; k++)
	{
		vect3[k]=(vect1[k]+vect2[k]);
	}

		printf("\n la suma de los vectores es:\n ");
	 for(k=0; k<r; k++)
	{
		printf("vector[%d] = %d\n",k,vect3[k]);
	}
	
	  // restando dos vectores
		for(k=0; k<r; k++)
	   {
	    	vect3[k]=(vect1[k]-vect2[k]);
      }

		printf("\n la resta de los vectores es:\n ");
	 for(k=0; k<r; k++)
	{
		printf("vector[%d] = %d\n",k,vect3[k]);
	}
	return 0;
}
