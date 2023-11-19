#pragma once
#include <iostream>
#include <ctime>


using namespace std;
#define INTEGER
#define DOUBLE
#define CHAR

#ifdef INTEGER
#define RandomValueInt EnterArrayInt
#define ShowIntArray ShowArrayInt
#define ArrayMinInt MinArrayInt
#define ArrayMaxInt MaxArrayInt
#define ArraySortInt SortArrayInt
#define ArrayChangeInt ChangeArrayInt
void EnterArrayInt(int arr[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size;
	}

}
void ShowArrayInt(int ar[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void MinArrayInt(int ar[], int size) {
	int min = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] < min) {
			min = ar[i];
		}
	}
	cout << "Min array in array: " << min;
	
	cout << "\n";
}
void MaxArrayInt(int ar[], int size) {
	int max = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	cout << "Max element in array: " <<  max;
	cout << "\n";;
	 
}
void SortArrayInt(int ar[], int size) {
	int i, j, k, x;
	for (int i = 0; i < size; i++) {
		k = i;
		x = ar[i];
		for (j = i + 1; j < size; j++) {
			if (ar[j] < x) {
				k = j;
				x = ar[j];
			}
			
			}
		if (k != i) {
			ar[k] = ar[i];
			ar[i] = x;
		}
	}
	cout << "Sorted array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void ChangeArrayInt(int ar[], int size) {
	int asnw;
	do {
		cout << "If you want to change array press - 1"<< endl;
		cout << "If you want to exit press - 0" << endl;
		cin >> asnw;
		switch (asnw) {
		case 1: {
			int newvalue;
			int indexofarray;
			cout << "Enter the new value: " << endl;
			cin >> newvalue;
			cout << "Enter the index which you want to change: " << endl;
			cin >> indexofarray;
			ar[indexofarray] = newvalue;
			cout << "Updated array: " << endl;
			for (int i = 0; i < size; i++) {
				cout << ar[i] << " ";
			}
			break;
		case 0: {
			cout << "Good luck" << endl;
		} break;
		default:
			cout << "Wrong command " << endl;
			break;
		}
		}
	} while (asnw != 0);
}
#endif INTEGER

#ifdef DOUBLE
#define ArrayEnterDouble EnterArrayDouble
#define ArrayShowDouble ShowArrayDouble
#define ArrayMinDouble MinArrayDouble
#define ArrayMaxDouble MaxArrayDouble
#define ArraySortDouble SortArrayDouble
#define ArrayChangeDouble ChangeArrayDouble
void EnterArrayDouble(double ar[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		ar[i] = rand() % size;
	}
}
void ShowArrayDouble(double ar[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void MinArrayDouble(double ar[], int size) {
	int min = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] < min) {
			min = ar[i];
		}
	}
	cout << "Min array in array: " << min;
	
	cout << "\n";
}
void MaxArrayDouble(double ar[], int size) {
	int max = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	cout << "Max element in array: " << max;
	
	cout << "\n";
}
void SortArrayDouble(double ar[], int size) {
	int i, j, k, x;
	for (int i = 0; i < size; i++) {
		k = i;
		x = ar[i];
		for (j = i + 1; j < size; j++) {
			if (ar[j] < x) {
				k = j;
				x = ar[j];
			}

		}
		if (k != i) {
			ar[k] = ar[i];
			ar[i] = x;
		}
	}
	cout << "Sorted array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void ChangeArrayDouble(double ar[], int size) {
	int asnw;
	do {
		cout << "If you want to change array press - 1" << endl;
		cout << "If you want to exit press - 0" << endl;
		cin >> asnw;
		switch (asnw) {
		case 1: {
			int newvalue;
			int indexofarray;
			cout << "Enter the new value: " << endl;
			cin >> newvalue;
			cout << "Enter the index which you want to change: " << endl;
			cin >> indexofarray;
			ar[indexofarray] = newvalue;
			cout << "Updated array: " << endl;
			for (int i = 0; i < size; i++) {
				cout << ar[i] << " ";
			}
			break;
		case 0: {
			cout << "Good luck" << endl;
		} break;
		default:
			cout << "Wrong command " << endl;
			break;
		}
		}
	} while (asnw != 0);
}
#endif

#ifdef CHAR
#define ArrayEnterChar EnterArrayChar
#define ArrayShowChar ShowArrayChar 
#define ArrayMinChar MinArrayChar
#define ArrayMaxChar MaxArrayChar
#define ArraySortChar SortArrayChar
#define ArrayChangeChar ChangeArrayChar
void EnterArrayChar(char ar[], int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		ar[i] = rand() % size;
	}
}
void ShowArrayChar(char ar[], int size) {
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void MinArrayChar(char ar[], int size) {
	int min = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] < min) {
			min = ar[i];
		}
	}
	cout << "Min element in array: " << min;
	
	cout << "\n";
}
void MaxArrayChar(char ar[], int size) {
	int max = ar[0];
	for (int i = 0; i < size; i++) {
		if (ar[i] > max) {
			max = ar[i];
		}
	}
	cout << "Max element in array: " << max;
	
	cout << "\n";
}
void SortArrayChar(char ar[], int size) {
	int i, j, k, x;
	for (int i = 0; i < size; i++) {
		k = i;
		x = ar[i];
		for (j = i + 1; j < size; j++) {
			if (ar[j] < x) {
				k = j;
				x = ar[j];
			}

		}
		if (k != i) {
			ar[k] = ar[i];
			ar[i] = x;
		}
	}
	cout << "Sorted array: ";
	for (int i = 0; i < size; i++) {
		cout << ar[i] << " ";
	}
	cout << "\n";
}
void ChangeArrayChar(char ar[], int size) {
	int asnw;
	do {
		cout << "If you want to change array press - 1" << endl;
		cout << "If you want to exit press - 0" << endl;
		cin >> asnw;
		switch (asnw) {
		case 1: {
			int newvalue;
			int indexofarray;
			cout << "Enter the new value: " << endl;
			cin >> newvalue;
			cout << "Enter the index which you want to change: " << endl;
			cin >> indexofarray;
			ar[indexofarray] = newvalue;
			cout << "Updated array: " << endl;
			for (int i = 0; i < size; i++) {
				cout << ar[i] << " ";
			}

		}
			  break;
		case 0: {
			cout << "Good luck" << endl;
		} break;
		default :
			cout << "Wrong command " << endl;
			break;
		}
	} while (asnw != 0);
}

#endif

