#include <stdio.h>
#include <locale.h>

#include "Solution.h"

int main() {
	setlocale(LC_ALL, "ru-ru");

	printf("\n\n\t\t\tFIRST PART\n\n");
	qOne();
	printf("\n\n\t\t\tSECOND PART\n\n");
	qTwo();
	
	char x[1];
	printf("\n\nдля завершения введите \"q\" . . . ");
	scanf_s("%s", x, sizeof(x));
	return 0;
}