#include <iostream>
using namespace std;
int bin(int a[], const int& x, int n) {
	int left = 0;
	int right = n - 1;
	while (left<=right)
	{
		int middle = (left +right) / 2;
		if (x == a[middle])
			return middle;
		if (x > a[middle])
			left = middle + 1;
		else
		{
			right = middle - 1;
		}
	}
	return -1;
}
int main() {
	int a[5] = { 10,20,34,89,90 };
	int n = 5;
	int x = 20;
	cout<<bin(a, x, n);
	return 0;
}