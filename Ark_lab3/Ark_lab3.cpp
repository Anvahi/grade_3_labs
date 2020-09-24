#include <iostream>
#include <omp.h>

int main() {
	int A[4], B[4], C[4];
	for (int i = 0; i < 4; i++) {
		A[i] = rand() % 10;
		B[i] = rand() % 10;
	}
#pragma omp parallel
{
	#pragma omp for
		for (int i = 0; i < 4; i++) {
			C[i] = A[i] + B[i];
			printf("Thread number %d, elem number %d\n", omp_get_thread_num(), i);
		}
}
for (int i = 0; i < 4; i++) {
	printf("C[%d] = %d\n", i, C[i]);
	}
}