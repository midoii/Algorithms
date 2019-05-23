// PointToOffer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include "Topic3_2.h"
#include "Topic5_1.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;


int main()
{
	int a1[10] = { 1,3,5,7,9 };
	int a2[5] = { 2,4,6,8,10 };
	mergeArray(a1, a2, 10, 5, 5);
	for (int i = 0; i < 10; i++) {
		cout << a1[i];
	}
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
