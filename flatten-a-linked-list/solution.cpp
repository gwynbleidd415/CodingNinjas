#include <queue>
/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

Node *solution1(Node *head) {
	auto cmp = [](Node *h1, Node *h2) {
		return h2->data < h1->data;
	};
	priority_queue<Node*, vector<Node *>, decltype(cmp)> pq(cmp);
	Node *temp{head}, *temp2;
	while(temp) {
		temp2 = temp;
		pq.push(temp);
		temp = temp->next;
		temp2->next = nullptr;
	}
	Node ans;
	temp = &ans;
	while(!pq.empty()) {
		temp->child = pq.top(), pq.pop();
		temp = temp->child;
		if(temp->child) pq.push(temp->child);
	}
	return ans.child;
}

Node* solution2(Node* head) 
{
	// Write your code here
	Node *thead = new Node(0, head, nullptr);
	Node ans;
	Node *csmall, *temp, *cstemp;
	temp = &ans;
	while(thead->next) {
		csmall = thead;
		cstemp = csmall->next;
		while(cstemp->next) {
			if(cstemp->next->data < csmall->next->data) csmall = cstemp;
			cstemp = cstemp->next;
		}
		temp->child = csmall->next;
		temp = temp->child;
		if(csmall->next->child) {
			csmall->next->child->next = csmall->next->next;
			csmall->next = csmall->next->child;
		} else {
			csmall->next = csmall->next->next;
		}
		temp->next = nullptr;
	}
	return ans.child;
}

Node *merge(Node *left, Node *right) {
	Node ans;
	Node *temp = &ans;
	while(left && right) {
		if(right->data < left->data) temp->child = right, right = right->child;
		else temp->child = left, left = left->child;
		temp = temp->child;
	}
	if(left) temp->child = left;
	if(right) temp->child = right;
	return ans.child;
}

Node *mergeSort(Node *head, Node *tail) {
	if (head == tail) {
		head->next = nullptr;
		return head;
	}
	Node *slow{head}, *fast{head->next};
	while(fast!=tail->next && fast!=tail) {
		slow = slow->next;
		fast = fast->next->next;
	}
	Node *slowNext = slow->next;
	Node *left = mergeSort(head, slow);
	Node *right = mergeSort(slowNext, tail);
	return merge(left, right);
}

Node *solution3(Node *head) {
	Node *tail{head};
	while(tail->next) tail = tail->next;
	return mergeSort(head, tail);
}

Node* flattenLinkedList(Node* head) 
{
	// Write your code here
	// return solution1(head);
	// return solution2(head);
	return solution3(head);
}
