# include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	while(cin>>n && n){
		map<long long,int> mp;
		while(n--){
			long long x=0;
			int a[5];
			for(int i=0;i<5;i++){
				cin>>a[i];
			}
			sort(a,a+5);
			for(int i=0;i<5;i++){
				x*=1000;
				x+=a[i];
			}
			mp[x]++;
		}
		int mx=0,ans=0;
		for(auto i:mp){
			mx=max(i.second,mx);
		}
		for(auto i:mp){
			if(i.second==mx){
				ans+=i.second;
			}
		} 
		cout<<ans<<endl;
	}
	return 0;
}
