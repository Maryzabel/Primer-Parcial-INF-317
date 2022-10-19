#include <stdio.h>
#include <string.h>
#include <mpi.h>

char palabra[30];
int longitud;
int aux=0;
    
int main(){
int total;
int proceso;
    
    MPI_Init (NULL,NULL);
	MPI_Comm_size (MPI_COMM_WORLD, &total);
	MPI_Comm_rank (MPI_COMM_WORLD, &proceso);
	
	longitud=strlen(palabra);
	    for(fin=longitud-1; palabra[fin]==palabra[ini] && fin>=0; inicio++,fin--);
	    if(ini==longitud){
		printf("\nVerdadero\n");
	      }else{
		printf ("\nFalso\n");
	    }
	MPI_Finalize;
	return 0;
} 