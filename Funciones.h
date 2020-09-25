#ifndef FUNCIONES
#define FUNCIONES
#include <stdio.h>


void vector_enteros()
	{
		int n;
			printf("Inserta el numero de enteros:\n");scanf("%d",&n);
			system("cls");
		int vector[n],i,suma=0;
		float prom=0;
		for(i=0;i<=n-1;i++)
			{
				printf("Ingresa el valor entero %d:\n",i+1);scanf("%d",&vector[i]);
					suma=suma+vector[i];
			}
			prom=suma/n;
		for(i=0;i<=n-1;i++)
			{
				printf("Posicion %d: %d\n",i+1,vector[i]);
			}		
			printf("SUMA: %d\t\t", suma);
			printf("PROMEDIO: %.2f\n",prom);
	system("pause");					
	}
void registro()
	{
			int n;
		printf("Inserta el numero de materias a registrar:\n");scanf("%d",&n);
		system("cls");
		struct 
			{
				char materia[100];
				char maestro[100];
				int horas;
			} 
		horario[n];

				int i,ht=0;

				for(i=0;i<=n-1;i++)
					{
						printf("Ingresa la materia %d:\n",i+1);fflush(stdin);gets(horario[i].materia);
						printf("Ingresa el nombre del profesor %d:\n",i);fflush(stdin);gets(horario[i].maestro);
						printf("Ingresa la cantidad de horas semanal %d:\n",i);scanf("%d",&horario[i].horas);
							ht=ht+ horario[i].horas;
						system("cls");
					}
					printf("MATERIA\t\t\t\t\tPROFESOR\t\t\t\tHORAS\n");
					printf("_________________________________________________________________________________________\n");
				for(i=0;i<=n-1;i++)
					{
						printf("%-25s\t\t",horario[i].materia);
						printf("%-25s\t\t",horario[i].maestro);
						printf("%d\t\t\t\t\n",horario[i].horas);
						printf("_________________________________________________________________________________________\n");
					}
					printf("\t\t\t\t\t\t\t\tHORAS TOTALES:%d\n\n\n",ht);

		
		
			
		system("pause");
	}
#endif
