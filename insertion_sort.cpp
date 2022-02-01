#include <iostream>
using namespace std;

void displayArray(int[], int);

void main() {
	cout << "Insertion Sort." << endl;
	int size;
	cout << "Enter size of list: ";
	cin >> size;

	int* list = new int[size];

	cout << "Enter Elements of list: " << endl;
	for (int i = 0; i < size; i++)
		cin >> list[i];

	cout << "Unsorted List: [ ";
	displayArray(list, size);
	cout << "]" << endl;
	for (int i = 0; i < size; i++) {
		int key = list[i];
		int j = i - 1;

		for (j; (j >= 0 && list[j] > key); j--)
			list[j + 1] = list[j];

		list[j + 1] = key;
	}

	cout << "Sorted List: [ ";
	displayArray(list, size);
	cout << "]" << endl;

	system("pause");

}

void displayArray(int list[], int size) {
	for (int i = 0; i < size; i++)
		cout << list[i] << " ";
}
