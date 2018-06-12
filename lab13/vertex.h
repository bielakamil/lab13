#pragma once

struct MY_NODE
{
	double crd[2];   //crd[0] – x; crd[1] – y 
};

MY_NODE *CreateVertex();
void PrintVertex(MY_NODE ptr);
void FreeVertex(MY_NODE **ptr);
int EqualVertex(MY_NODE *a, MY_NODE *b);