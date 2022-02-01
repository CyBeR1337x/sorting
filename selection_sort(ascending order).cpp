#include <iostream>
using namespace std;

void printArray(int[], int);

void main() {
	cout << "Selection sort(ascending order)..." << endl;

	int size;
	cout << "Enter Size of list: ";
	cin >> size;

	int* list = new int[size];

	cout << "Enter elements of array: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];

	cout << "Unsorted List: [ ";
	printArray(list, size);
	cout << "]" << endl;

	//Selection sort
	for (int i = (size - 1); i >= 1; i--) {
		int max = 0;
		int j = 1;

		for (j; j <= i; j++) {
			if (list[max] < list[j])
				max = j;
		}
		//Swapping
		int temp;
		temp = list[i];
		list[i] = list[max];
		list[max] = temp;
	}

	cout << "Sorted List: [ ";
	printArray(list, size);
	cout << "]" << endl;
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
