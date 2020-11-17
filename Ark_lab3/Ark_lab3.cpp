#include <iostream>
#include <omp.h>
#include <vector>
using namespace std;

//int main() {
//	int A[4], B[4], C[4];
//	for (int i = 0; i < 4; i++) {
//		A[i] = rand() % 10;
//		B[i] = rand() % 10;
//	}
//#pragma omp parallel
//{
//	#pragma omp for
//		for (int i = 0; i < 4; i++) {
//			C[i] = A[i] + B[i];
//			printf("thread number %d, elem number %d\n", omp_get_thread_num(), i);
//		}
//}
//	for (int i = 0; i < 4; i++)
//		printf("c[%d] = %d\n", i, C[i]);
//	return 0;
//}

int main() {
	vector <int> A, B;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		A.push_back(rand() % 10);
		B.push_back(rand() % 10);
	}

	//tmp OUT
	int sumtmp = 0;
	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < B.size(); i++) {
		cout << B[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < A.size(); i++) {
		sumtmp += A[i] * B[i];
	}
	cout << "1 thread sum= " << sumtmp << endl << endl;
	//tmp OUT


	int i = 0;
	omp_set_num_threads(4);
#pragma parallel reduction(+:sum)
	{
		for (i = 0; i < 10; i++) {
			sum = A[i] * B[i];
			cout << A[i]<<"*" << B[i] <<"=" << A[i] * B[i]<< " summ =" << sum <<"  "<< endl;
		}
	}
	printf("Sum of elements:%d\n", sum);
	return 0;
}