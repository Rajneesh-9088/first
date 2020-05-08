#include<bits/stdc++.h>
using namespace std;
string extractStringAtKey(string str,int n){
	char *s = strtok((char *)str.c_str()," ");
	while(n>1){
		s = strtok(NULL," ");
        n--;
	}
	return (string ) s;
}

int main()	{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	string str("10 29 30");
	
	int n;
	cin>>n;
	cout<<extractStringAtKey(str,n);
	
	
	return 0;

	


}

	
	
	


