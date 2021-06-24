# include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,n,xi;
	cin>>t;
	while(t--){
		cin>>n;
		int mx=0,mn=99;
		for(int i=0;i<n;i++){
			cin>>xi;
			mx=max(mx,xi);
			mn=min(mn,xi);
		}
		cout<<(mx-mn)*2<<endl; 
	}
	return 0;
}
