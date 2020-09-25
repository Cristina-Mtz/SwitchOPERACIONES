#ifndef FUNCIONES_H
#define FUNCIONES_H


void vector_enteros()
	{
		int vector[9],i,suma=0,prom=0;
		for(i=0;i<=8;i++)
			{
				printf("Ingresa el valor entero %d:\n",i);scanf("%d",&vector[i]);
					suma=suma+vector[i];
			}
			prom=suma/9;
		for(i=0;i<=8;i++)
			{
				printf("Posicion %d: %d\n",i,vector[i]);
				printf("SUMA: %d\n", suma);
				printf("PROMEDIO: %d\n",prom);
			}		
	system("pause");					
	}
#endif
