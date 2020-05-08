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
int length(node *&head){
	int len = 0;
	node *temp = head;
	while(temp!=NULL){
		temp = temp->next;
		len++;
	}
	return len;

}
void insertAtTail(node *&head,int data){
	if(head==NULL){
		head = new node(data);
	}
	node *temp = head;
	while(temp->next !=NULL){
		temp = temp->next;
	}
	temp->next = new node(data);
}
void insertAtMiddle(node *&head,int data,int p){
	if(head==NULL||p==0){
			insertAtHead(head,data);
	}
	else if(p>length(head)){
		insertAtTail(head,data);
	}
	else {
		int jump = 1;
		node *temp = head;
		while(jump<=p-1){
			temp = temp->next;
			jump +=1;
		}
		node *n = new node(data);
		n->next = temp->next;
		temp->next = n; 
	}
	return ;
}
void deleteAtHead(node *&head){
	if(head==NULL){
		return ;
	}
		node *temp = head;
		head = temp->next;
		delete temp;
		return ;
}
void deleteAtTail(node *&head){
	node *prev = NULL;
	node *temp = head;
	while(temp->next !=NULL){
		prev = temp;
		temp = temp->next;
	}
	
	delete temp;
	prev->next = NULL;
	return ;


}
void deleteAtMiddle(node *&head,int m){
		node *pre = NULL;
		node *Next = head;
		while(m>1){
			pre = Next;
			Next = Next->next;
			m--;
		}
		pre->next = Next->next;
		delete Next;


}

void print(node *head){
	while(head != NULL){
		cout<<head->data<<" -->";
		head = head->next;
	}
}
bool searchRecursively(node *head ,int key){
	if(head == NULL){
		return false;
	}
	else if(head->data == key){
		return true;
	}
	else {
		searchRecursively(head->next,key);
	}
}
bool searchIteratively(node *head,int key) {
	if(head == NULL) return false;
	while(head->next !=NULL){
		if(head->data==key) return true;
		head = head->next;
	}
	return false;
}
void buildList(node *&head){
		int data;
		cin>>data;
		while(data!=-1){
			insertAtTail(head,data);
			cin>>data;
		}
		
}
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	node *head = NULL;
	//insertAtHead(head,5);
	//insertAtHead(head,4);
	//insertAtHead(head,3);
	//insertAtTail(head,6);
    
    buildList(head);
    cout<<endl;
    print(head);
	
	
	
	return 0;

}
