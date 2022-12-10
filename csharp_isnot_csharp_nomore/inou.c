#include <stdio.h>
#include "inou.h"

void read(const char* message, double* variable) {
	printf(message);
	scanf_s("%f", variable);
}