#include <iostream>
#include "shablonh.h"

using namespace std;
char arr1[] = "abcdABCD";
char arr2[] = "badcBADC";

int main() {
	char input[20], output[20];
	cout << "input the text: ";
	cin >> input;
	cout << endl;
	Crypt(arr1, arr2, input, output);
	cout << "\nencoded text is:" << output;

	Crypt(arr2, arr1, output, input);
	cout << "\nDecoded text is:" << input;
	exit(0);
}