#include <iostream>
using namespace std;

void Bubble_sort(int *, int);
void Bubble_sort(int *a, int n) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i -1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}

int main(void) {
	int a[6] = {1, 6, 2, 0, 9, 4};
	Bubble_sort(a, 6);
	return 0;
}
