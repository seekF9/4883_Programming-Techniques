#include <iostream>
#include <stdio.h>

#define size 500000
#define num_e 1000000000
long inv_count, Left[size+2], Right[size+2];
long a[size+2];

void merge(long p, long q, long r) 
{
	long i, j, k, 
		index1, index2;

	for (i = p, index1 = 1; i <= q; i++)
	{
		Left[index1++] = a[i];
	}
	Left[index1] = num_e;

	for (i = q + 1, index2 = 1; i <= r; i++)
	{
		Right[index2++] = a[i];
	}
	Right[index2] = num_e;

	i = j = 1;

	for (k = p; k <= r; k++)
	{
		if (Left[i] > Right[j])
		{
			inv_count += index1 - i;
			a[k] = Right[j];
			j++;
		}
		else {
			a[k] = Left[i];
			i++;
		}
	}
}

void mergeSort(long p, long r) {
	if (p < r) {
		long q = (p + r) / 2;
		mergeSort(p, q);
		mergeSort(q + 1, r);
		merge(p, q, r);
	}
}

int main() 
{
	long i, n;
	
	while (scanf("%ld", &n) && n) 
    {
		std::cin >> n; 
		for (i = 1; i <= n; i++) 
		{
			std::cin >> a[i];//scanf("%ld", &a[i]);
		}
		inv_count = 0;
		mergeSort(1, n);
		std::cout << inv_count; // printf("%ld\n",cnt);
	}
	return 0;
}