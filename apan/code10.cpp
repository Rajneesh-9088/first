#include<bits/stdc++.h>
using namespace std;
#define OJ \
freopen("input.txt","r",stdin); \
freopen("output.txt","w",stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 void counting_sort(int *arr,int n,int *fr_arr){
    int largest = -1;
    for(int i=0;i<n;i++){
        largest = max(largest,arr[i]);
    }
    for(int j=0;j<n;j++){
        fr_arr[arr[j]]++ = arr[j];
    }
}
int main(){
    OJ;
    FIO;
    int arr[]={12,10,21,9,24 ,100,11};
    int n = sizeof(arr)/sizeof(int);
    int fr_arr[n] = {0};
    counting_sort(arr,n,fr_arr);
    for(int i=0;i<n;i++){
        if(fr_arr[i]>0){
            cout<<arr[i]
        }
    }


    
}


