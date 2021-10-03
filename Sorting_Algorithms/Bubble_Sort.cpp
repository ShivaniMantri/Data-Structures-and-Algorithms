#include <iostream>
using namespace std;

void bubble_sort(int *, int);
void bubble_sort(int *a, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
	for (int j = 0; j < n - i - 1; j++) {
	    if (a[j] > a[j + 1]) {
		temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;
	    }
	}
    }
 
    for (int i = 0; i < n; i++) {
        cout << a[j] << endl;
    }
}

int main(void) {
    int a[6] = {1, 7, 4, 0, 8, 3};
    bubble_sort(a, 6);
    return 0;
}
	