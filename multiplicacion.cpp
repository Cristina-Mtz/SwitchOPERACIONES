#include <stdio.h>
#include <stdlib.h>
#include "FUNCIONES.h"
main()
	{
		int s=0;
			do
			{
				int n1,n2,r,op;
					printf("Selecciona una opcion:\n");
					printf("1.SUMA\n2.MULTIPLICACION\n3.RESTA\n4.DIVISION\n5.VECTOR\n6.HORARIO\n7.SALIR\n");scanf("%d",&op);
						switch(op)
						{
							case 1: system("cls");
									printf("Inserta n1:\n");scanf("%d",&n1);
									printf("Inserta n2:\n");scanf("%d",&n2);
										r=n1+n2;
									printf("El resultado es: %d\n",r);
							break;
							case 2: system("cls");
									printf("Inserta n1:\n");scanf("%d",&n1);
									printf("Inserta n2:\n");scanf("%d",&n2);
										r=n1*n2;
									printf("El resultado es: %d\n",r);
							break;
							case 3: system("cls");
									printf("Inserta n1:\n");scanf("%d",&n1);
									printf("Inserta n2:\n");scanf("%d",&n2);
										r=n2-n1;
									printf("El resultado es: %d\n",r);
							break;
							case 4: system("cls");
									printf("Inserta n1:\n");scanf("%d",&n1);
									printf("Inserta n2:\n");scanf("%d",&n2);
										r=n1*n2;
									printf("El resultado es: %d\n",r);
							break;
							case 5: system("cls");
									vector_enteros();
							break;
							case 6: system("cls");
									registro( );
							break;
							case 7: s=1;
							break;
							default: printf("OPCION INVALIDA\n");
						}
				system("cls");
			}
			while(s==0);
			system("pause");
	}
