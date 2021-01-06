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
	int arr3[n];

	
	for (int i = 0; i < 5; i++) {

		arr3[i] = arr1[i] + arr2[i];

		cout << arr3[i] << " ";

	}


	return 0;
}