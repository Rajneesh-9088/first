#include<bits/stdc++.h>
using namespace std;
string extractStringAtKey(string str1,int n){
	char *s = strtok((char *)str1.c_str()," ");
	while(n>1){
		s = strtok(NULL," ");
		n--;
	}
	return (string ) s;
}

int main()	{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("ouput1.txt","w",stdout);
	#endif
	cout<<"raj";
	string str[100];	
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++){
		getline(cin,str[i]);
	}
	pair<string,string> p[100];
	for(int i=0;i<n;i++){
		p[i].first = str[i];
		p[i].second = extractStringAtKey(str[i],n);
	}
	cout<<p[0].second;
	
	

	
	
	return 0;

	


}

	
	
	


