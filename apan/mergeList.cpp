#include<bits/stdc++.h>
using namespace std;
class node {
public:
	int data;
	node *next;
	node(int d){
		data = d;
		next = NULL;
	}
};
void insertAtHead(node *&head,int data){
node  *n = new node(data);
	n->next = head;
	head = n;
}
void reverseList( node *&head){
	node *c = head;
	node *pre = NULL;
	node *n;
	while(n!=NULL){
		n = c->next;
		c->next = pre;
		pre = c;
		c= n;
	}
	head = pre;
}
void print(node *head){
	while(head != NULL){
		cout<<head->data<<"==>";
		head = head->next;
	}
}
int lengthOfList(node *head){
	int l = 1;
	while(head->next!=NULL){
		head = head->next;
		l++;
	}
	return l;
}
int middleNode(node *head ,int m){
	while(m>=1){
		head = head->next;
		m--;

	}
	return head->data;
}
int findMiddle(node *head){
	node *fast= head->next;
	node *slow = head;
	while(fast !=NULL and fast->next !=NULL){
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow->data;
}
int kthFromEnd(node *head,int k){
	node *fast  = head;
	node *slow = head;
	while(k>=1){
		fast = fast->next;
		k--;
	}
	while(fast !=NULL){
		fast = fast->next;
		slow  = slow->next;
	}
	return slow->data;
}
node * mergeList(node *head1,node *head2){
	node * rHead;
	if(head1==NULL){
		return head2;
	}
	else if(head2==NULL){
		return head1;
	}
	if(head1->data<head2->data){
        rHead = head1;
			rHead->next = mergeList(head1->next,head2);
	}
	else {
        rHead = head2;
		rHead->next = mergeList(head2->next,head1);
	}
	return rHead;
}
int main(){
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	node *head = NULL;
	insertAtHead(head,6);
	insertAtHead(head,5);
	insertAtHead(head,4);
	insertAtHead(head,3);
	print(head);
	cout<<endl;
	node *head1 = NULL;
	insertAtHead(head1,3);
	insertAtHead(head1,2);
	insertAtHead(head1,1);
	print(head1);
	
	node *temp = mergeList(head,head1);
	cout<<endl;
    print(temp);cout<<endl;
	cout<<findMiddle(temp);





	
	return 0;
}