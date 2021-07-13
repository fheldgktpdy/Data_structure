#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void Bubblesort(int arr[], int n) {
	int i, j;
	int temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < (n - i) - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

}
	int main() {
		int arr[4] = { 3,2,5,1 };

		Bubblesort(arr, sizeof(arr) / sizeof(int));

		for (int i = 0; i < 4; i++)
			cout << arr[i];
	}
