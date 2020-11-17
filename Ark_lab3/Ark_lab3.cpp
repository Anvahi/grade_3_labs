#pragma warning (disable:4996)
#include <iostream>
#include <omp.h>
#include <vector>
#include <ctime>
#include <string>
#define N1 4
#define N2 100
#define N3 3
using namespace std;

//int main() {
//	int A[N1], B[N1], C[N1];
//	for (int i = 0; i < N1; i++) {
//		A[i] = rand() % 10;
//		B[i] = rand() % 10;
//	}
//#pragma omp parallel
//{
//	#pragma omp for
//		for (int i = 0; i < N1; i++) {
//			C[i] = A[i] + B[i];
//			printf("thread number %d, elem number %d\n", omp_get_thread_num(), i);
//		}
//		cout << omp_get_num_threads() << endl;
//}
//	for (int i = 0; i < N1; i++)
//		printf("c[%d] = %d\n", i, C[i]);
//	return 0;
//}


//int main() {
//	srand(time(0));
//	vector <int> A, B;
//	int sum = 0;
//	for (int i = 0; i < N2; i++) {
//		A.push_back(rand() % 10);
//		B.push_back(rand() % 10);
//	}
//#pragma omp parallel reduction(+:sum)
//	{
//#pragma omp for
//		for (int i = 0; i < N2; i++)
//			sum += A[i] * B[i];
//	}
//	printf("Sum: %d\n", sum);
//	return 0;
//}

//int main() {
//	int matrix[N3][N3], vect[N3], result[N3] = { 0 };
//	for (int i = 0; i < N3; i++) {
//		vect[i] = rand() % 10;
//		cout << "vect[" << i << "] = " << vect[i] << endl;
//	}
//	for (int i = 0; i < N3; i++) {
//		for (int j = 0; j < N3; j++) {
//			matrix[i][j] = rand() % 10;
//			cout << "matrix[" << i << "][" << j << "] = " << matrix[i][j] << " ";
//		}
//		cout << endl;
//	}
//#pragma omp parallel 
//	{
//#pragma omp for
//		for (int i = 0; i < N3; i++) {
//			for (int j = 0; j < N3; j++) {
//				result[j] += vect[i] * matrix[i][j];
//				printf("Number of thread %d element number %d equal %d\n", omp_get_thread_num(), j, result[j]);
//			}
//		}
//	}
//	for (int i = 0; i < N3; i++)
//		cout << "result[" << i << "] = " << result[i] << endl;
//}

int main() {
	omp_set_num_threads(9);
#pragma omp parallel
	{
#pragma omp for ordered
		for (int i = 2; i < 10; i++) {
#pragma omp ordered
			{
				printf("\t");
				for (int j = 1; j < 10; j++) {
					printf("%d * %d = %d\t", i, j, i * j);
				}
				printf("\n");
			}
		}
	}
}