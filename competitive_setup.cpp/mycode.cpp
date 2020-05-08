#include<bits/stdc++.h>
using namespace std;
#define OJ \
freopen("input.txt","r",stdin); \
freopen("output.txt","w",stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int main(){
    OJ;
    int a;
    cin>>a;
    cout<<a<<endl;
    int arr[5];
    for(int i=0;i<5;i++){
        arr[i] = i;

    }
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}
