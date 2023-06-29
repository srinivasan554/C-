#include <iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
	node(int val){
		data = val;
		next = NULL;
	}

};

node* inserti(node* head,int val,int n){
	node* prev = head;
	node* temp = new node(val);
	if(head == NULL) return temp;
	if(n==1){
		temp->next = head;
		return temp;
	}

	while(--n && prev != NULL){
		prev = prev->next;
	}
	if(prev == NULL){
		cout<<"this position doesn\'t exists"<<endl;
		return head;
	}
	temp->next = prev->next;
	prev->next = temp;
	return head;
}
void printlink(node* head){
	for(node* cur = head;cur!=NULL;cur= cur->next){
		cout<<cur->data<<" ";
	}
	cout<<endl;
}

int main(){
	node* head = new node(1);
	node* second = new node(2);
	node* third = new node(3);

	head->next = second;
	second->next = third;
	third->next = NULL;

	head = inserti(head,3,1);
	printlink(head);
	return 0;
}
