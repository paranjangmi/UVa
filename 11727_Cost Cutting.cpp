# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T,s[3];
	cin>>T;
	for(int c=1;c<=T;c++){
		cin>>s[0]>>s[1]>>s[2];
		sort(s,s+3);
		cout<<"Case "<<c<<": "<<s[1]<<endl;
	}
	return 0;
}
