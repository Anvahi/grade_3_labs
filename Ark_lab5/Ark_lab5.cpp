#include <iostream>
#include <vector>
#include <omp.h>
using namespace std;

#define N1 6
//int main(){
//	vector <int> V1, V2;
//	int Res[N1];
//	for (int i = 0; i < N1; i++) {
//		V1.push_back(rand() % 10);
//		cout << V1[i] << " ";
//		V2.push_back(rand() % 10);
//	}
//	cout << endl;
//	for (int i = 0; i < N1; i++) {
//		cout << V2[i] << " ";
//	}
//	cout << endl;
//#pragma omp parallel
//	{
//#pragma omp sections
//		{
//#pragma omp section
//			{
//				for (int i = 0; i < N1 / 2; i++)
//					Res[i] = V1[i] + V2[i];
//			}
//#pragma omp section
//			{
//
//				for (int i = N1 / 2; i < N1; i++)
//					Res[i] = V1[i] + V2[i];
//			}
//		}
//	}
//	cout << "Result: ";
//	for (int i = 0; i < N1; i++) {
//		cout << Res[i] << " ";
//	}
//	cout << endl;
//}
///////////////
//static void merge(int* buf, int left, int right, int middle) {
//	if (left >= right || middle < left || middle > right) return;
//	if (right == left + 1 && buf[left] > buf[right]) {
//		swap(buf[left], buf[right]);
//		return;
//	}
//	vector<int> tmp(&buf[left], &buf[right] + 1);
//	for (int i = left, j = 0, k = middle - left + 1; i <= right; ++i) {
//		if (j > middle - left)
//			buf[i] = tmp[k++];
//		else if (k > right - left)
//			buf[i] = tmp[j++];
//		else
//			buf[i] = (tmp[j] < tmp[k]) ? tmp[j++] : tmp[k++];
//	}
//}
//
//void MergeSort(int* buf, int left, int right) {
//	if (left >= right) return;
//	int middle = left + (right - left) / 2;
//	MergeSort(buf, left, middle);
//	MergeSort(buf, middle + 1, right);
//	merge(buf, left, right, middle);
//}
//
//int main() {
//	int N = 0;
//	cout << "Enter a number of elements:";
//	cin >> N;
//	int *arr = new int[N];
//	for (int i = 0; i < N; i++) {
//		arr[i] = rand() % 10;
//	}
//	double t0 = omp_get_wtime();
//	MergeSort(arr, 0, N - 1);
//	double t1 = omp_get_wtime();
//	cout << "In not parallel programm Merge sort time: " << t1 - t0 << endl;
//}
/////////////
//static void merge(int* buf, int left, int right, int middle) {
//	if (left >= right || middle < left || middle > right) return;
//	if (right == left + 1 && buf[left] > buf[right]) {
//		swap(buf[left], buf[right]);
//		return;
//	}
//	vector<int> tmp(&buf[left], &buf[right] + 1);
//	for (int i = left, j = 0, k = middle - left + 1; i <= right; ++i) {
//		if (j > middle - left)
//			buf[i] = tmp[k++];
//		else if (k > right - left)
//			buf[i] = tmp[j++];
//		else
//			buf[i] = (tmp[j] < tmp[k]) ? tmp[j++] : tmp[k++];
//	}
//}
//
//void MergeSort(int* buf, int left, int right) {
//	if (left >= right) return;
//	int middle = left + (right - left) / 2;
//#pragma omp parallel
//	{
//#pragma omp sections 
//		{
//#pragma omp section
//			{
//				MergeSort(buf, left, middle);
//			}
//#pragma omp section
//			{
//				MergeSort(buf, middle + 1, right);
//			}
//		}
//		merge(buf, left, right, middle);
//	}
//}
//
//int main() {
//	int N = 0;
//	cout << "Enter a number of elements:";
//	cin >> N;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//		arr[i] = rand() % 10;
//	omp_set_nested(1);
//	double t0 = omp_get_wtime();
//	MergeSort(arr, 0, N - 1);
//	double t1 = omp_get_wtime();
//	cout << "In parallel not nested programm Merge sort time: " << t1 - t0 << endl;
//}
////////////////////
//void qsort(int* arr, int left, int right) {
//	int l = left, r = right; 
//	int middle = arr[(l + r) / 2];
//	do {
//		while (arr[l] < middle)
//			l++;
//		while (arr[r] > middle)
//			r--;
//		if (l <= r)
//		{
//			int count = arr[l];
//			arr[l] = arr[r];
//			arr[r] = count;
//			l++;
//			r--;
//		}
//	} while (l < r);
//	if (left < r) 
//		qsort(arr, left, r);
//	if (l < right) 
//		qsort(arr, l, right);
//}
//
//int main() {
//	int N = 0;
//	cout << "Enter a number of elements:";
//	cin >> N;
//	int* arr = new int[N];
//	for (int i = 0; i < N; i++)
//		arr[i] = rand() % 10;
//	double t0 = omp_get_wtime();
//	qsort(arr, 0, N - 1);
//	double t1 = omp_get_wtime();
//	cout << endl;
//	cout << "In not parallel programm quick sort time: " << t1 - t0 << endl;
//}
///////////////
void qsort(int* arr, int left, int right) {
	int l = left, r = right;
	int middle = arr[(l + r) / 2];
	do {
		while (arr[l] < middle)
			l++;
		while (arr[r] > middle)
			r--;
		if (l <= r)
		{
			int count = arr[l];
			arr[l] = arr[r];
			arr[r] = count;
			l++;
			r--;
		}
	} while (l < r);
#pragma omp parallel
	{
#pragma omp sections
		{
#pragma omp section
			{
				if (left < r)
					qsort(arr, left, r);
			}
#pragma omp section
			{
				if (l < right)
					qsort(arr, l, right);
			}
		}
	}
}

int main() {
	int N = 0;
	cout << "Enter a number of elements:";
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++)
		arr[i] = rand() % 10;
	omp_set_nested(0);
	double t0 = omp_get_wtime();
	qsort(arr, 0, N - 1);
	double t1 = omp_get_wtime();
	cout << endl;
	cout << "In parallel not nested programm quick sort time: " << t1 - t0 << endl;
}