﻿#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Swap(int arr[], int idx1, int idx2) {
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}
int middle(int arr[], int left, int right) {

	int samples[3] = { left,(left + right) / 2,right };
	if (arr[samples[0]] > arr[samples[1]])
		Swap(samples, 0, 1);
	if (arr[samples[1]] > arr[samples[2]])
		Swap(samples, 1, 2);
	if (arr[samples[0]] > arr[samples[1]])
		Swap(samples, 0, 1);
	return samples[1];
}

int Partition(int arr[], int left, int right) {
	int pidx = middle(arr, left, right);
	int pivot = arr[pidx];
	int low = left + 1;
	int high = right;
	Swap(arr, left, pidx);

	while (low <= high) {
		while (pivot >= arr[low] && low<=right)
			low++;

		while (pivot <= arr[high] && high>=(left+1))
			high--;

		if (low <= high)
			Swap(arr, low, high);
	}

	Swap(arr, left, high);
	return high;
}

void Quicksort(int arr[], int left, int right) {
	if (left <= right) {
		int pivot = Partition(arr, left, right);
		Quicksort(arr, left, pivot - 1);
		Quicksort(arr, pivot + 1, right);
	}
}

int main() {
	int arr[10] = {1,4,3,6,1,3,4,1,6,8};
	Quicksort(arr, 0, sizeof(arr) / sizeof(int) - 1);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << endl;
}