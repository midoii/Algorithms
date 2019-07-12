#include "Topic6.h"
#include <stack> 



//ͨ����ջ��ʵ������Ĵ�β��ͷ��ӡ
void PrintListReversingly_Iteratively(ListNode* pHead) {
	std::stack<ListNode*>nodes;

	ListNode* pNode = pHead;

	while (pNode != nullptr) {
		nodes.push(pNode);
		pNode = pNode->m_pNext;
	}

	while (!nodes.empty()) {
		pNode = nodes.top();
		printf("%d\t", pNode->m_nValue);
		nodes.pop();
	}

}

//ͨ���ݹ�ķ�ʽ�����ӡ

void PrintReversingly_Recursively(ListNode* pHead) {
	if (pHead != nullptr) {
		if (pHead->m_pNext != nullptr) {
			PrintReversingly_Recursively(pHead->m_pNext);
		}
		printf("%d\t", pHead->m_nValue);
	}

}