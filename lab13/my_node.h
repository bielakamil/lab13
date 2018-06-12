#pragma once


struct MY_NODE
{
	double crd[2];
};

MY_NODE* CreateVertex(double x, double y);
void PrintVertex(MY_NODE ptr);
void VertexFree(MY_NODE **ptr);
int VertexEquel(MY_NODE *a, MY_NODE *b);
