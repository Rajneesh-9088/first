
 #include<bits/stdc++.h>
 using namespace std;
 class node{
	 public:
	 int data ;
	 node *next;
	 node(int data){
		 this->data = data;
		 next = NULL;
	 }
 };
 int length(node *head){
	int l = 0;
	while(head !=NULL){
		head = head->next;
		l++;
	}
	return l;
}
void moveKthNode(node *&head,int m){
	if(head==NULL||head->next==NULL) return ;
	int k = length(head)-m+1;
	node *pre ,*Next;
	Next = head;
	while(k>1){
		pre = Next;
		Next = Next->next;
		k--;

	}
	pre->next = NULL;
	node *temp = Next;
	while(Next->next!=NULL){
		Next = Next->next;
	}
	Next->next = head;
	head = temp;



}
void insertAtTail(node *&head,int data){

	if(head==NULL) {
		head = new node(data);
		return ;
	}
	node *n = new node(data);
	node *temp = head;
	while(temp->next !=NULL){
		temp = temp->next;
	}
	temp->next = n;

}
void print(node *head){
	while(head !=NULL){
		cout<<head->data<<"->";
		head = head->next;
	}
	return ;
}
 void seperateOddEven(node *&head){
	if(head==NULL || head->next ==NULL) return ;
	node *odd = NULL;
	node *even = NULL;
	node *temp = head;
    
	while(temp->next!=NULL) {
            if(temp->data&1){
                insertAtTail(temp,temp->data);
            }
            else {
                
                insertAtTail(temp,temp->data);
            }
    }
    
}
 
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	node *head = NULL;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int key;
		cin>>key;
		insertAtTail(head,key);
	}
    cout<<"rajneesh1"<<endl;
	seperateOddEven(head);
    cout<<"rajneesh2"<<endl;
    cout<<endl;
	print(head);

	







	
	//cin>>head;
	//node * head3 = mergeList(head,head2);
	//head = merge_Sort(head);
	//cout<<endl<<head;
	return 0;


}

