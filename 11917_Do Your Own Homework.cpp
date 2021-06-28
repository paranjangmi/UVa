# include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int T,N,d,D;
	string s;
	cin>>T;
	for(int c=1;c<=T;c++){
		cin>>N;
		map<string,int> mp;
		while(N--){
			cin>>s>>d;
			mp[s]=d;
		}
		cin>>D>>s;
		cout<<"Case "<<c<<": ";
		if(mp.count(s)){
			if(mp[s]<=D){
				cout<<"Yesss\n";
			}else if(mp[s]>D && mp[s]<=D+5){
				cout<<"Late\n";
			}else{
				cout<<"Do your own homework!\n";
			}
		}else{
			cout<<"Do your own homework!\n";
		}
	}
	return 0;
}
