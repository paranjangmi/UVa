# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	int n,a,b,Case=1;
	bool f=true;
	while(cin>>s){
		cin>>n;
		cout<<"Case "<<Case++<<":"<<endl;
		for(int j=0;j<n;j++){
			cin>>a>>b;
			for(int i=min(a,b);i<max(a,b);i++){
				if(s[i]!=s[i+1]){
					cout<<"No\n";
					f=false;
					break;
				}
			}
			if(f) cout<<"Yes\n";
			f=true;
		}
	}
	return 0;
}
