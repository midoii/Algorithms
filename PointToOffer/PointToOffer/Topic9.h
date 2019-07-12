#ifndef TOPIC9_H
#define TOPIC9_H

#include <stack>

template<typename T> class CQueue {

public:

	void appendTail(const T& node);
	T deleteHead();

private:
	stack<T> stack1;
	stack<T> stack2;
};

#endif
