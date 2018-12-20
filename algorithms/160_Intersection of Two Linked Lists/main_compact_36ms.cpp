//Write a program to find the node at which the intersection of two singly linked lists begins.

#include "iostream"
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include "windows.h"
#include "algorithm"
#include <stack>
#include <string>
#include <queue>

using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
	{
		if (!headA || !headB) 
			return NULL;
		ListNode *a = headA, *b = headB;
		while (a != b) 
		{
			a = a ? a->next : headB;
			b = b ? b->next : headA;
		}
		return a;
	}
};

int main()
{
	Solution* solution = new Solution;

	ListNode* input1 = new ListNode(4);
	input1->next = new ListNode(1);
	input1->next->next = new ListNode(8);
	input1->next->next->next = new ListNode(4);
	input1->next->next->next->next = new ListNode(5);

	ListNode* input2 = new ListNode(5);
	input2->next = new ListNode(0);
	input2->next->next = new ListNode(1);
	input2->next->next->next = new ListNode(8);
	input2->next->next->next->next = new ListNode(4);
	input2->next->next->next->next->next = new ListNode(5);

	auto result = solution->getIntersectionNode(input1, input2);
	cout << result << endl;
	delete solution;
	system("pause");
	return 0;
}
