#include <iostream>
#include <stdio.h>
#include <omp.h>
#include <ctime>
#include <string>
using namespace std;

//int main()
//{
//#ifdef _OPENMP
//	printf("OpenMP supporting!\n");
//#endif
//
//	int NumOfThreads;
//
//#pragma omp parallel
//{
//	NumOfThreads = omp_get_num_threads();
//	printf("Hello, I am thread number % d from % d\n", omp_get_thread_num(), NumOfThreads);
//}
//return 0;
//
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
//#ifdef _OPENMP
//	printf("OpenMP supporting!\n");
//#endif
//	std::cout << "Sequential area 1\n";
//#pragma omp parallel
//	{
//		std::cout << "Parallel area of " << omp_get_thread_num() << std::endl;
//	}
//	std::cout << "Sequential area 2\n";
//	return 0;
//}

//int main()
//{
//#ifdef _OPENMP
//	printf("OpenMP supporting!\n");
//#endif
//	int NumOfThreads;
//	
//#pragma omp parallel
//{
//		NumOfThreads = omp_get_num_threads();
//		std::cout << "Thread is " << omp_get_thread_num() << std::endl;
//}
//	std::cout << "Number of threads: " << NumOfThreads;
//	return 0;
//}

//int main() {
//#pragma omp parallel
//	{
//		std::cout << "Thread is " << omp_get_thread_num() << std::endl;
//	}
//	std::cout << std::endl;
//#pragma omp parallel num_threads(3)
//	{
//		std::cout << "Thread is " << omp_get_thread_num() << std::endl;
//	}
//	omp_set_num_threads(4);
//	std::cout << std::endl;
//#pragma omp parallel
//	{
//		std::cout << "Thread is " << omp_get_thread_num() << std::endl;
//	}
//}

//int main() {
//	omp_set_dynamic(1); //1 on 0 off
//#pragma omp parallel num_threads(128)
//	{
//		std::cout << "Thread is " << omp_get_num_threads() << std::endl;
//	}
//}

int main() {
	string par;
	std::cin >> par;
	if (par == "parallel") {
#pragma omp parallel num_threads(4)
		{
			std::cout << "Thread is " << omp_get_thread_num() << std::endl;
		}
	}
	if (par == "serial") {
		cout << "Its serial";
	}
}