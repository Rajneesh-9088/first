#include<bits/stdc++.h>
using namespace std;
void count_sort(int *arr,int n){
	int largest = -1;
	for(int i=0;i<n;i++){
		largest = max(largest,arr[i]);
	}
	int *frq = new int[largest+1]{0};
	for(int i=0;i<n;i++){
		frq[arr[i]]++ ;
	}
	int j=0;
	for(int i=0;i<=largest;i++){
		while(frq[i]>0){
			arr[j] = i;
			frq[i]--;
			j++;
		}
	}
	delete []frq;
}

int main()	{
    
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int arr[]={11,23,100,9,5,10};
	int n = sizeof(arr)/sizeof(int);
	count_sort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;

	


}

	
	
	


