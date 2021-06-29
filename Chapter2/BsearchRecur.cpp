#include <iostream>

using namespace std;

int BsearchRecur(int arr[], int first, int last, int target) {
	if (first > last)
		return -1;
	int mid = (first + last) / 2;
	if (arr[mid] == target)
		return mid;
	else if (arr[mid] < target) {
		BsearchRecur(arr, mid+1, last, target);
	}
	else
		BsearchRecur(arr, first, mid-1, target);
}