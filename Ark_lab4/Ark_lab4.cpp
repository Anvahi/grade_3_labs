#include <iostream>
#include <omp.h>
#define x 0
#define y 2
#define st_def 100
using namespace std;

double Func(double n) {
	double temp = log(1.2 + tan(n / 2));
	return temp;
}

double LR(double st) {
	double n = 0, sum = 0, StSize = (double)(y - x) / st;
#pragma omp parallel reduction(+:sum)
	{
#pragma omp for
		for (int i = 0; i < (int)st; i++) {
			n = x + i * StSize;
			sum += Func(n);
		}
	}
	sum *= StSize;
	return sum;
}

double MR(double st) {
	double n = 0, sum = 0, StSize = (double)(y - x) / st;
#pragma omp parallel reduction(+:sum)
	{
#pragma omp for
		for (int i = 0; i < (int)st; i++) {
			n = x + (i + 0.5) * StSize;
			sum += Func(n);
		}
	}
	sum *= StSize;
	return sum;
}

double RR(double st) {
	double n = 0, sum = 0, StSize = (double)(y - x) / st;
#pragma omp parallel reduction(+:sum)
	{
#pragma omp for
		for (int i = 0; i < (int)st; i++) {
			n = x + (i + 1) * StSize;
			sum += Func(n);
		}
	}
	sum *= StSize;
	return sum;
}

double Trap(double st) {
	double n = 0, sum = 0, StSize = (double)(y - x) / st;
#pragma omp parallel reduction(+:sum)
	{
#pragma omp for
		for (int i = 0; i < (int)st; i++) {
			n = x + i * StSize;
			sum += Func(n);
		}
	}
	sum += (Func(x) + Func(y)) / 2;
	sum *= StSize;
	return sum;
}

double Simps(double st) {
	double nlow = 0, nhigh = 0, nmiddle = 0, sum = 0, StSize = (double)(y - x) / st;
#pragma omp parallel reduction(+:sum)
	{
#pragma omp for
		for (int i = 0; i < (int)st; i++) {
			nlow = x + i * StSize;
			nhigh = x + (i + 1) * StSize;
			nmiddle = (nlow + nhigh) / 2;
			sum += Func(nlow) + 4 * Func(nmiddle) + Func(nhigh);
		}
	}
	sum *= StSize / 6.0;
	return sum;
}

int main() {
	double temp = 0, temp1 = 0, e = 0;
	long st = st_def;
	cout << "Enter e: ";
	cin >> e;
	cout << endl;
	double t = omp_get_wtime();
#pragma omp parallel 
	{
		do {
			temp = temp1;
			st *= 2;
			temp1 = LR(st);
		} while (fabs(temp1 - temp) > e);
	}	
	double t1 = omp_get_wtime();
	auto TimeLR = t1 - t;
	cout << "Left Rectangle Integral " << endl << "Iterations: " << st << endl << "Time: " << TimeLR << endl;
	temp1 = 0; 
	st = st_def;
	cout << endl;
	t = omp_get_wtime();
#pragma omp parallel 
	{
		do {
			temp = temp1;
			st *= 2;
			temp1 = MR(st);
		} while (fabs(temp1 - temp) > e);
	}
	t1 = omp_get_wtime();
	auto TimeMR = t1 - t;
	cout << "Middle Rectangle Integral " << endl << "Iterations: " << st << endl << "Time: " << TimeMR << endl;
	temp1 = 0;
	st = st_def;
	cout << endl;
	t = omp_get_wtime();
#pragma omp parallel 
	{
		do {
			temp = temp1;
			st *= 2;
			temp1 = RR(st);
		} while (fabs(temp1 - temp) > e);
	}
	t1 = omp_get_wtime();
	auto TimeRR = t1 - t;
	cout << "Right Rectangle Integral " << endl << "Iterations: " << st << endl << "Time: " << TimeRR << endl;
	temp1 = 0;
	st = st_def;
	cout << endl;
	t = omp_get_wtime();
#pragma omp parallel 
	{
		do {
			temp = temp1;
			st *= 2;
			temp1 = Trap(st);
		} while (fabs(temp1 - temp) > e);
	}
	t1 = omp_get_wtime();
	auto TimeT = t1 - t;
	cout << "Trapezium formula" << endl << "Iterations: " << st << endl << "Time: " << TimeT << endl;
	temp1 = 0;
	st = st_def;
	cout << endl;
	t = omp_get_wtime();
#pragma omp parallel 
	{
		do {
			temp = temp1;
			st *= 2;
			temp1 = Simps(st);
		} while (fabs(temp1 - temp) > e);
	}
	
	t1 = omp_get_wtime();
	auto TimeS = t1 - t;
	cout << "Simpson's formula" << endl << "Iterations: " << st << endl << "Time: " << TimeS << endl;
}