#include "stdafx.h"
#include <stdlib.h>
#include "vertex.h"
#include "Triangle.h"


MY_NODE *CreateVertex()
{

	double x, y;
	int check;

	MY_NODE *ptr = (MY_NODE *)malloc(sizeof(MY_NODE));

	printf("Podaj pare wspolrzednych: ");
	check = scanf_s("%lf%lf", &x, &y);
	if (check != 2)
	{
		printf("Error input!\n");
		exit(1);
	}


	if (!ptr)
	{
		printf("Error allocation memory!\n");
		exit(1);
	}
	memset(ptr, 0, sizeof(MY_NODE));

	ptr->crd[0] = x;
	ptr->crd[1] = y;

	return ptr;
}

void PrintVertex(MY_NODE ptr)
{
	printf("(%lf, %lf) \n", ptr.crd[0], ptr.crd[1]);
}

void FreeVertex(MY_NODE **ptr)
{
	if (ptr)
	{
		if (*ptr)
		{
			free(*ptr);
			*ptr = NULL;
		}
		ptr = NULL;
	}
}


int EqualVertex(MY_NODE *a, MY_NODE *b)
{
	if (a && b && b->crd)
	{
		for (int i = 0; i < 2; ++i)
			a->crd[i] = b->crd[i];
		return 1;
	}
	return 0;
}