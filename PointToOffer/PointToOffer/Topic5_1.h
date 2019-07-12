#ifndef TOPIC5_1_H
#define TOPIC5_1_H
#include <string>


struct ListNode {

	int m_nValue;
	ListNode* m_pNext;
};

using std::string;

void ReplaceBlank(char string[], int length);
void mergeArray(int* a1, int* a2, int length1, int numOf1, int numOf2);
void AddToTail(ListNode** pHead, int value);
void RemoveNode(ListNode** pHead, int value);
#endif
