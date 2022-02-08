#include <stdio.h>
#include <math.h>
#include <malloc.h>


#define PI 3.14159265
#define S 1000000
int main() {
	double* array = NULL;
	array = (double*)malloc((S + 1) * sizeof(double));
	double val = 0;
	int i;
	double result = 0.0;
	#pragma acc kernels 
	{
		for (i = 0; i < S; i++) {
			array[i] = sin(i * (2 * PI / S));
		}

		for (i = 0; i < S; i++) {
			result += array[i];

		}
	}
	printf("%f", result);
	return 0;
	

}
