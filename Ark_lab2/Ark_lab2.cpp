#include <iostream>
#include <omp.h>
#include <string>
using namespace std;

//int main() {
//	double a, b;
//	cout << "a:";
//	cin >> a;
//	cout << "b:";
//	cin >> b;
//	cout << endl;
//	int N = 100000000;
//	double t0 = omp_get_wtime();
//	for (int i = 0; i < N; ++i) {
//		double j = a*b;
//	}
//	double t1 = omp_get_wtime() - t0;
//	cout << "Sequential time: " << t1 << endl;
//	int N1 = N / omp_get_max_threads();
//	t0 = omp_get_wtime();
//#pragma omp parallel
//	{
//		for (int i = 0; i < N1; ++i) {
//			double j = a * b;
//		}
//	}
//	t1 = omp_get_wtime() - t0;
//	cout << "Parallel time: " << t1 << endl;
//}

//int main() {
//	double t0 = omp_get_wtime();
//#pragma omp parallel
//	{
//
//	}
//	double t1 = omp_get_wtime() - t0;
//	cout << "Parallel time: " << t1 << endl;
//}

//int main() {
//	omp_set_num_threads(3);
//#pragma omp parallel
//	{
//#pragma omp single nowait
//		{
//			printf("Start - Thread is %d\n", omp_get_thread_num());
//		}
//#pragma omp single nowait
//		{
//			printf("One thread - Thread is %d\n", omp_get_thread_num());
//		}
//#pragma omp single nowait
//		{
//			printf("End - Thread is %d\n", omp_get_thread_num());
//		}
//	}
//}

//int main() {
//	omp_set_num_threads(3);
//#pragma omp parallel
//	{
//	printf("Start - Thread is %d\n", omp_get_thread_num());
//#pragma omp barrier
//	{}
//#pragma omp master
//	printf("Main thread - Thread is %d\n", omp_get_thread_num());
//#pragma omp barrier 
//	{}
//		printf("Center - Thread is %d\n", omp_get_thread_num());
//#pragma omp barrier 
//		{}
//#pragma omp master
//		printf("Main thread - Thread is %d\n", omp_get_thread_num());
//#pragma omp barrier 
//		{}
//		printf("End - Thread is %d\n", omp_get_thread_num());
//	}
//}

//int main() {
//	int n = 10;
//	printf("Serial area %d thread is %d\n", n, omp_get_thread_num());
//#pragma omp parallel firstprivate (n)
//	{
//		printf("Parallel area %d thread is %d\n", n, omp_get_thread_num());
//#pragma omp barrier
//		{}
//		n = omp_get_thread_num();
//		printf("Parallel area %d thread is %d\n", n, omp_get_thread_num());
//	}
//	printf("Serial area %d thread is %d\n", n, omp_get_thread_num());
//}

//int main() {
//	int m[5] = { 0 };
//	for (int i = 0; i < 5; i++ )	
//		printf("i[%d] =  %d\n", i, m[i]);
//	omp_set_num_threads(2);
//#pragma omp parallel shared (m)
//	{
//		printf("Parallel i[%d] = %d\n", omp_get_thread_num(), m[omp_get_thread_num()]);
//#pragma omp barrier
//		{}
//		m[omp_get_thread_num()] = 1;
//	}
//	for (int i = 0; i < 5; i++)
//		printf("i[%d] =  %d\n", i, m[i]);
//}

//int main() {
//	int f = 0;
//#pragma omp parallel reduction(+:f)
//	{
//		f = 1;
//		printf("Thread number %d reduction %d\n", omp_get_thread_num(), f);
//	}
//	printf("Num of threads = %d\n", f);
//}

int main() {
	int f = 0;
	omp_set_num_threads(4);
#pragma omp parallel reduction(+:f)
	{
		f = omp_get_thread_num();
		printf("Thread number %d reduction %d\n", omp_get_thread_num(), f);
	}
	printf("Num of threads = %d\n", f);
}