#include <iostream>
#include <cstdlib>
#include <array>
#include<iterator>
#include <algorithm>

using namespace std;

int main() {

	int i;
	const int n = 5;
	int arr1[n] = { 1, 2, 3, 4, 5 };
	int arr2[n] = { 5, 6, 7, 8, 9 };

	int size = sizeof(arr1) / sizeof(arr1[0]);
	
	for (int i = 0; i < size; i++) {

		cout << arr1[i] + arr2[i] << " ";

	}


	return 0;
}