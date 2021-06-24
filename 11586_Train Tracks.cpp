# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	string s;
	cin>>n;
	getline(cin,s);
	while(n--){
		getline(cin,s);
		int m=0,f=0;
		for(int i=0;i<s.size();i++){
			if(s[i]=='M') m++;
			else if(s[i]=='F') f++;
		}
		if(m==f&&m!=1&&f!=1) cout<<"LOOP\n";
		else cout<<"NO LOOP\n";
	}
	
	return 0;
}
