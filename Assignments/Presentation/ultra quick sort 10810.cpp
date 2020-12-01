//Vishwas Karki 
// UVA 10810 
// UVA accepted code

#include <stdio.h>

#define N 500000 // maximum array size.
#define inf 1000000000 // maximum limit for an integer

long a[N + 2], // global array that will be used to store integers
	 inv_count, // counter that counts the number of inversion
	 L[N + 2], // array of the left portion in merge sort
	 R[N + 2]; // array of the right portion in merge sort

// Function used to merge the left and right portion of an array
// This function will count the number of swaps that has occured 
// when merge algorithm has started. 
void merge(long p, long q, long r) {
	long i, j, k, index_1, index_2;

	for (i = p, index_1 = 1; i <= q; i++) {
		L[index_1++] = a[i];
	}
	L[index_1] = inf;

	for (i = q + 1, index_2 = 1; i <= r; i++) {
		R[index_2++] = a[i];
	}
	R[index_2] = inf;

	i = j = 1;

	// loop that updates the swap counter
	for (k = p; k <= r; k++) {
		if (L[i] > R[j]) {
			inv_count += index_1 - i;
			a[k] = R[j];
			j++;
		}
		else {
			a[k] = L[i];
			i++;
		}
	}
}

// Recusrsion Method that will disintegrate and then merge 
// the array that has been created in the main method. 
void mergeSort(long p, long r) {
	if (p < r) {
		long q = (p + r) / 2;// partition of the array into two sides
		mergeSort(p, q);
		mergeSort(q + 1, r);
		merge(p, q, r);
	}
}
//////////////////////////////////////////////////////////////////////
//////////////////////Main Program////////////////////////////////////

int main() {
	long i, n;

	while (scanf("%ld", &n) && n) {
		for (i = 1; i <= n; i++) {
			cin >> a[i]; 
		}
		inv_count = 0;
		mergeSort(1, n);// number of elements in the array is noted and passed to the mergeSort method.
		cout << inv_count << "\n";
	}

	return 0;
}
