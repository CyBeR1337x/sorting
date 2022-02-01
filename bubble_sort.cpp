#include <iostream>
using namespace std;

void displayList(int[], int);

void main() {
	cout << "Bubble Sort.." << endl;

	int size;
	cout << "Enter Size of list: ";
	cin >> size;

	int* list = new int[size];

	cout << "Enter elements of list: ";

	for (int i = 0; i < size; i++)
		cin >> list[i];

	cout << "Unsorted List: [";
	displayList(list, size);
	cout << "]" << endl;

	//Bubble Sort..
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - i - 1); j++) {
			if (list[j] > list[j + 1]) {
				//Swaps the elements
				int temp;
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}


	cout << "Sorted List: [";
	displayList(list, size);
	cout << "]" << endl;

	system("pause");
}

void displayList(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}
