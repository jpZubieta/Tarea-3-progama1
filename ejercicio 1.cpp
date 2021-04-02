#include <stdio.h>

void main (void)
{
	int CLA, CAT, ANT, RES;
	printf("\n Ingrese la clave del trabajador:\n");
	scanf("%d", &CLA);

	printf("\n Ingrese la categoria ( 2, 3 o 4) del trabajador:\n");
	scanf("%d", &CAT);

	printf("\n Ingrese la antiguedad del trabajador:\n");
	scanf("%d", &ANT);

	switch(CAT)
	{
	case 3:case 4: 
		if (ANT > 5)
			RES = 1;
		else
			RES = 0;
		break;
	case 2:
		if (ANT > 7)
			RES = 1;
		else
			RES = 0;
	default: RES = 0; 	
	break;
	}
	if (RES)
	printf ("\n El trabajador con clave %d reune las condiciones para el puesto de trabajo\n" , CLA);
	else
	printf("\nEl trabajador con clave %d no reune las condiciones para el puesto de trabajo\n ", CLA);
	scanf("%d" , CLA);
}