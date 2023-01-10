#include<bits/stdc++.h>
using namespace std;

//TRAN THI ANH
//MSSV: 20204512

struct Node {
	int data;
	Node *next;
	Node(int data) {
		this->data = data;
		next = NULL;
	}
};

Node *prepend(Node *head, int data) {
	Node * newNode = new Node(data);
	newNode->next = head;
	head = newNode;
	return head;
}

void print(Node *head) {
	Node *tmp = head;
	while(tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
}

Node* reverse(Node *head) {
	Node * current = head->next;
	Node* prev = head; prev->next = NULL;
	Node *next = NULL;
	
	while(current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}


int main() {
	int n,u;
	cout << "TRAN THI ANH" << endl;
	cout << "MSSV: 20204512" << endl;
	cin >> n;
	Node *head = NULL;
	for(int i = 0; i < n; i++) {
		cin >> u;
		head = prepend(head, u);
	}
	cout << "Original list: ";
	print(head);
	cout << endl;
	head = reverse(head);
	cout << "Reversed list: ";
	print(head);
}
