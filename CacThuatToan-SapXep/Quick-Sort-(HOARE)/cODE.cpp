#include<iostream>
using namespace std;

int partition(int a[], int l, int r) {
	int pivot = a[l];
	int i = l - 1;
	int j = r + 1;

	while (1) {
		do {
			++i;
		} while (a[i] < pivot);
		do {
			--j;
		} while (a[j] > pivot);

		if (i < j) {
			swap(a[i], a[j]);
		}
		else {
			return j;
		}
	}
}

void QuickSort(int a[], int l, int r) {
	if (l >= r) return;
	int p = partition(a, l, r);
	QuickSort(a, l, p);
	QuickSort(a, p + 1, r);
}

int main() {
	int a[100];
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];

	QuickSort(a, 0, n - 1);

	for (int i = 0; i < n; i++) cout << a[i] << " ";
	cout << endl;
}