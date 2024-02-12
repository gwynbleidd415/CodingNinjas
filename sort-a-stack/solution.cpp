#include <bits/stdc++.h> 

void solution1(stack<int> &stack)
{
	// Write your code here
	if(stack.size() == 1) return;
	int top = stack.top();
	stack.pop();
	solution1(stack);
	std::stack<int> st1;
	while(!stack.empty() && stack.top()>top) st1.push(stack.top()), stack.pop();
	stack.push(top);
	while(!st1.empty()) stack.push(st1.top()), st1.pop();
}
void sortStack(stack<int> &stack)
{
	// Write your code here
	solution1(stack);
}
