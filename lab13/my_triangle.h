#pragma once

#include "my_node.h";

struct MY_TRIANGLE
{
	MY_NODE *nodes;
};


MY_TRIANGLE* CreateTriangle();
void InputTriangle(MY_TRIANGLE *ptr);
void DataTriangle(MY_TRIANGLE *ptr, MY_NODE *v1, MY_NODE *v2, MY_NODE *v3);
void FreeTriangle(MY_TRIANGLE **ptr);
void PrintTriangle(const char *str, MY_TRIANGLE *ptr);
void CopyTriangle(MY_TRIANGLE *a, MY_TRIANGLE *b);