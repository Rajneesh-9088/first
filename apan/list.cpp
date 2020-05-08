#include<bits/stdc++.h>
using namespace std;
int main(){
    
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    
    
	list<pair<int,int> > *l;
	int v;
    cin>>v;
	l  = new list<pair<int,int> >[v];
	int e; 
    cin>>e;
	for(int i=0;i<e;i++){
		int x,y,w;
        cin>>x>>y>>w;
		l[x].push_back(make_pair(y,w));
		l[y].push_back(make_pair(x,w));
	}
	for(int i = 0;i<v;i++){
		cout<<i<<"->";
		for(auto s:l[i]){
			cout<<"("<<s.first<<","<<s.second<<")"<<",";

		}
		cout<<endl;
	}
	return 0;


}