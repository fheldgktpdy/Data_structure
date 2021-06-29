#include <iostream>
#include <cstring>
#include<string>
#include <vector>

using namespace std;

int Bsearch(int arr[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {
		mid = (first + last) / 2;

		if (target == arr[mid]) {
			return mid;
		}
		else {
			if (target < arr[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return -1;
}

int main() {
	int arr[] = { 1,3,4,5,6 };
	int idx;

	idx = Bsearch(arr, sizeof(arr) / sizeof(int), 5);
	if (idx == -1)
		cout << "탐색실패";
	else
		cout << idx;
}