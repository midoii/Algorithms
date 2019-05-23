#include "Topic5_1.h";


void ReplaceBlank(char string[], int length) {
	if (string == nullptr || length <= 0)
		return;
	int originLength = 0;
	int numOfBlank = 0;
	int index = 0;
	while (string[index] != '\0') {
		++originLength;
		if (string[index] == ' ') {
			++numOfBlank;
		}
		++index;
	}
	int newLength = originLength + 2 * numOfBlank;
	if (newLength > length)
		return;
	int oldPointer = originLength;
	int newPointer = newLength;
	while (newPointer > oldPointer && oldPointer >= 0) {
		if (string[oldPointer] == ' ') {
			string[newPointer--] = '0';
			string[newPointer--] = '2';
			string[newPointer--] = '%';
			--oldPointer;
		}
		else {
			string[newPointer--] = string[oldPointer--];
		}
	}
}

void mergeArray(int* a1, int* a2, int length1,int numOf1,int numOf2) {
	if (a1 == nullptr || a2 == nullptr || length1 <= 0)
		return;
	--length1;
	--numOf1;
	--numOf2;
	while (length1 >= 0 && length1 > numOf1) {
		if (a1[numOf1] > a2[numOf2]) {
			a1[length1] = a1[numOf1];
			--length1;
			--numOf1;
		}
		else {
			a1[length1] = a2[numOf2];
			--length1;
			--numOf2;
		}
	}
}