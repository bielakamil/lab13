#include "stdafx.h"
#include "Triangle.h"
#include "vertex.h"
#include <stdlib.h>

MY_TRIANGLE * CreateTriangle()
{
	MY_TRIANGLE *ptr = (MY_TRIANGLE *)malloc(sizeof(MY_TRIANGLE));
	if (ptr)
	{
		ptr->Nodes = (MY_NODE *)malloc(3 * sizeof(MY_NODE));
		if (ptr->Nodes)
			memset(ptr->Nodes, 0, 3 * sizeof(MY_NODE));
		else
		{
			printf("Memory allocation error!\n");
			exit(1);
		}
	}
	else
	{
		printf("Memory allocation error!\n");
		exit(1);
	}

	return ptr;
}
void InputTriangle(MY_TRIANGLE *ptr)
{
	
	MY_NODE *v1, *v2, *v3;

	printf("Tworzenie trojkata \n");

	
	v1 = CreateVertex();
	v2 = CreateVertex();
	v3 = CreateVertex();

	DataTriangle(ptr, v1, v2, v3);
}

void DataTriangle(MY_TRIANGLE *ptr, MY_NODE * v1, MY_NODE * v2, MY_NODE * v3)
{
	EqualVertex(&ptr->Nodes[0], v1);
	EqualVertex(&ptr->Nodes[1], v2);
	EqualVertex(&ptr->Nodes[2], v3);

	FreeVertex(&v1);
	FreeVertex(&v2);
	FreeVertex(&v3);
}

void FreeTriangle(MY_TRIANGLE **ptr)
{
	if (ptr)
	{
		if (*ptr)
		{
			if ((*ptr)->Nodes)
				free((*ptr)->Nodes);
			(*ptr)->Nodes = NULL;
			free(*ptr);
			*ptr = NULL;
		}
		ptr = NULL;
	}
}

void PrintTriangle(const char * str, MY_TRIANGLE *ptr)
{
	printf("Trojkat %s\n", str);

	for (size_t it = 0; it < 3; ++it)
	{
		printf("Wierzcholek: ");
		PrintVertex(ptr->Nodes[it]);
	}
	putchar('\n');
}
void CopyTriangle(MY_TRIANGLE *a, MY_TRIANGLE *b)
{
	for (int i = 0; i < 3; i++)
		EqualVertex(&a->Nodes[i], &b->Nodes[i]);
}