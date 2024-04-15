#include <iostream>
#include "ARR.h"
using namespace std;

int userSize() {
	int result;
	cout << "Enter new size: ";
	cin >> result;

	return result;
}

int minMaxChoice() {

	char* answ = new char[4];
	cout << "Enter operation (min/max): ";
	cin >> answ;
	if (strcmp(answ, "max") == 0) {
		return 1;
	}
	else if (strcmp(answ, "min") == 0) {
		return 0;
	}
}

int main() {

	int size = 5;
	int* arr = new int[size];
	ARR arr1(size, arr);
	arr1.addElInArr();
	
	/*ARR arr2(move(arr1));
	arr2.show();*/
	int newSize;
	
	int choice;
	do {
		cout << "\n";
		cout << "1 - show arr\n2 - fill arr\n3 - change size\n4 - sort arr\n5 - min/max\n0 - Exit\nEnter choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			
			arr1.show();
			break;
		case 2:
			arr1.addElInArr();
			break;
		case 3:
			newSize = userSize();
			arr1.changeSize(newSize);
			break;
		case 4:
			cout << "Current array: ";
			arr1.show();
			arr1.bubleSort();
			break;
		case 5:
			if (minMaxChoice() == 1) {
				int maxEl = arr1.getMax();
				cout << "Max el in arr : " << maxEl << endl;
			}
			else {
				int minEl = arr1.getMin();
				cout << "Min el in arr : " << minEl << endl;
			}
			break;
		default:
			break;
		}

	} while (choice != 0);

	
	return 0;
}