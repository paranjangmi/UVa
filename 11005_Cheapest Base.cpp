# include<bits/stdc++.h>
using namespace std;

int main(){
	int T,Q,X,cost;
	
	cin>>T;
	for(int c=1;c<=T;c++){
		if(c>1) cout<<endl;
		cout<<"Case "<<c<<":\n";
		map<int,int> mp;
		for(int i=0;i<36;i++){
			cin>>cost;
			mp[i]=cost;
		}
		cin>>Q;
		while(Q--){
			cin>>X;
			cout<<"Cheapest base(s) for number "<<X<<":";
			int mn = 0x7FFFFFFF;
			map<int,int> ans;			
			for(int i=2;i<=36;i++){	
				int n=X;
				cost = 0;			
				while(n){
					cost+=mp[n%i];
					n /= i;	
				}
				ans[i] = cost;
				mn = min(mn,cost);
			}
			for(int i=2;i<=36;i++){
				if(mn==ans[i]) cout<<" "<<i;
			}
			cout<<endl;
		}
	}
	return 0;
}
