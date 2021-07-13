#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void Selectsort(int arr[], int n) {
	int i, j;
	int insData;

	for (i = 1; i < n; i++) {
		insData = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > insData)
				arr[j + 1] = arr[j];
			else
				break;
		}
		arr[j + 1] = insData;
	}

}
	int main() {
		int arr[4] = { 3,2,5,1 };

		Selectsort(arr, sizeof(arr) / sizeof(int));

		for (int i = 0; i < 4; i++)
			cout << arr[i];
	}
