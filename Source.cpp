#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "string.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*char arr[] = "char";
	//char arrnew[sizeof(arr)];
	int n = strlen(arr) + 1;
	char* c1 = new char[n];
	strcpy(c1, arr);
	cout << c1 << "\n";*/

	char arr1[22] = "aefgbnhjio";
	char arr2[] = "dfdgjytggh";
	strcat(arr1, arr2);
	cout << arr1 << "\n";

	char arr11[] = "aefgbnhjio";
	char arr22[] = "aefgbnhjio";
	char arr3[] = "sdf";
	if (!strcmp(arr11, arr22))
		cout << "1 и 2 массивы имеют одинакове элементы\n";
	if(strcmp(arr11, arr3))
		cout << "1 и 3 массивы имеют разные элементы\n";

	char arr111[] = "aefgbnhjio";
	return 0;
}