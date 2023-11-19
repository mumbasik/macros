#include <iostream>
#include "func.h"
using namespace std;

int main() {
	const int size = 15;
	int ar[size];
	double arr[size];
	char arrr[size];
	EnterArrayInt(ar, size);
	ShowArrayInt(ar, size);
	MinArrayInt(ar, size);
	MaxArrayInt(ar, size);
	SortArrayInt(ar, size);
	ChangeArrayInt(ar, size);
	EnterArrayDouble(arr, size);
	ShowArrayDouble(arr, size);
	MinArrayDouble(arr, size);
	MaxArrayDouble(arr, size);
	SortArrayDouble(arr, size);
	ChangeArrayDouble(arr, size);
	EnterArrayChar(arrr, size);
	ShowArrayChar(arrr, size);
	MinArrayChar(arrr, size);
	MaxArrayChar(arrr, size);
	SortArrayChar(arrr, size);
	ChangeArrayChar(arrr, size);
#ifdef INTEGER
#define RandomValueInt EnterArrayInt
#define ShowIntArray ShowArrayInt
#define ArrayMinInt MinArrayInt
#define ArrayMaxInt MaxArrayInt
#define ArraySortInt SortArrayInt
#define ArrayChangeInt ChangeArrayInt
#endif

#ifdef DOUBLE
#define ArrayEnterDouble EnterArrayDouble
#define ArrayShowDouble ShowArrayDouble
#define ArrayMinDouble MinArrayDouble
#define ArrayMaxDouble MaxArrayDouble
#define ArraySortDouble SortArrayDouble
#define ArrayChangeDouble ChangeArrayDouble
#endif

#ifdef CHAR

#endif
#define ArrayEnterChar EnterArrayChar
#define ArrayShowChar ShowArrayChar 
#define ArrayMinChar MinArrayChar
#define ArrayMaxChar MaxArrayChar
#define ArraySortChar SortArrayChar
#define ArrayChangeChar ChangeArrayChar
}