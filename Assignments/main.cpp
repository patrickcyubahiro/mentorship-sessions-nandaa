#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;

// Function to get the missing number
int getMissingnum(int x[], int n)
{
	//First step: Calculate the sum of first n natural numbers as sumtotal= n*(n+1)/2
	double total = (n + 1) * (n + 2) / 2;
	for (int i = 0; i < n; i++)
		total -= x[i];
	return total;
}

int main()
{
	int arr[] = { 1, 2, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int missing = getMissingnum(arr, n);
	cout << missing;
}
