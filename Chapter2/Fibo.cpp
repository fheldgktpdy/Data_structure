#include <iostream>

using namespace std;

int Fibonnaci(int n) {
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else {
		return Fibonnaci(n - 2) + Fibonnaci(n - 1);
	}
}

int main() {
	int i;
	for (i = 1; i < 10; i++) {
		cout << Fibonnaci(i);
	}
}