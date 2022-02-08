#include <stdio.h>
#include <math.h>
#include <malloc.h>


#define PI 3.14159265
#define S 100
int main() {
	double* array = NULL;
	array = (double*)malloc((S + 1) * sizeof(double));
	double val = 0;
	int i;
	double result = 0.0;
	for (i = 0; i < S; i++) {
		array[i] = sin(i * (PI / 180));
	}

	for (i = 0; i < S; i++) {
		result += array[i];

	}
	printf("%f", result);
	return 0;


}
