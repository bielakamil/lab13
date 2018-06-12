#include "stdafx.h"
#include "my_triangle.h"
#include "my_node.h"
#include <stdlib.h>


MY_TRIANGLE * CreateTriangle()
{
	MY_TRIANGLE *ptr = (MY_TRIANGLE *)malloc(sizeof(MY_TRIANGLE));
	if (ptr)
	{
		ptr->nodes = (MY_NODE *)malloc(3 * sizeof(MY_NODE));
		if (ptr->nodes)
			memset(ptr->nodes, 0, 3 * sizeof(MY_NODE));
		else
		{
			printf("Memory allocation error!\n");
			return NULL;
		}
	}
	else
	{
		printf("Memory allocation error!\n");
		return NULL;
	}

	return ptr;
}