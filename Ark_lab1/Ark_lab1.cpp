#include <iostream>
#include <stdio.h>
#include <omp.h>
#include <ctime>
#include <string>
using namespace std;

//int main() {
//#ifdef _OPENMP
//	printf("OpenMP supporting!\n");
//#endif
//	int NumOfThreads;
//#pragma omp parallel
//{
//	NumOfThreads = omp_get_num_threads();
//	printf("Hello, I am thread number % d from % d\n", omp_get_thread_num(), NumOfThreads);
//}
//	return 0;
//}

//int main() {
//#ifdef _OPENMP
//	printf("OpenMP supporting!\n");
//#endif
//	clock_t t0 = clock();
//	int N = 1000000000;
//	for (int i = 0; i < N; ++i) {
//		int j = i + 1;
//	}
//	clock_t t1 = clock() - t0;
//	std::cout << "Sequential time: " << t1 << std::endl;
//	int N1 = N / omp_get_max_threads();
//	t0 = clock();
//#pragma omp parallel 
//{
//	for (int i = 0; i < N1; ++i) {
//		int j = i + 1;
//	}
//}
//	t1 = clock() - t0;
//	std::cout << "Parallel time: " << t1 << std::endl;
//}

//int main() {
//	printf("Sequential area 1\n");
//#pragma omp parallel
//	{
//		printf("Parallel area of %d\n", omp_get_thread_num());
//	}
//	printf("Sequential area 2\n");
//	return 0;
//}

//int main() {
//#pragma omp parallel
//{
//#pragma omp master
//		printf("Number of threads %d\n", omp_get_num_threads());
//		printf("Thread is %d\n", omp_get_thread_num());
//}
//	return 0;
//}

//int main() {
//	printf("Parallel area 1\n");
//#pragma omp parallel
//	{
//		printf("Thread is %d\n", omp_get_thread_num());
//	}
//	cout << endl;
//	printf("Parallel area 2\n");
//#pragma omp parallel num_threads(3)
//	{
//		printf("Thread is %d\n", omp_get_thread_num());
//	}
//	cout << endl;
//	printf("Parallel area 3\n");
//	omp_set_num_threads(4);
//#pragma omp parallel
//	{
//		printf("Thread is %d\n", omp_get_thread_num());
//	}
//}

int main() {
	omp_set_dynamic(1); //1 on 0 off
#pragma omp parallel num_threads(128)
	{
#pragma omp master
		printf("Number of threads %d\n", omp_get_num_threads());
	}
	return 0;
}

//int main() {
//	string par;
//	std::cin >> par;
//	if (par == "parallel") {
//#pragma omp parallel
//		{
//			printf("Thread is %d\n", omp_get_thread_num());
//		}
//	}
//	if (par == "serial") {
//		cout << "Its serial";
//	}
//}