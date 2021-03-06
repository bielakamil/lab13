// Lab13v2.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include "Triangle.h"
#include <stdlib.h>


int main()
{
	MY_TRIANGLE * abc = CreateTriangle();
	MY_TRIANGLE * mnk = CreateTriangle();

	InputTriangle(abc);
	InputTriangle(mnk);
	system("cls");


	PrintTriangle("ABC", abc);
	PrintTriangle("MNK", mnk);

	printf("\n \n Kopiowanie trojkata MNK do trojkata ABC \n");

	CopyTriangle(abc, mnk);
	PrintTriangle("ABC", abc);
	PrintTriangle("MNK", mnk);

	FreeTriangle(&abc);
	FreeTriangle(&mnk);

	system("pause");

	return 0;
}

